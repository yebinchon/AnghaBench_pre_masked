
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ oprright; scalar_t__ oprleft; int oprnamespace; int oprname; } ;
struct TYPE_6__ {char* data; } ;
typedef TYPE_1__ StringInfoData ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_2__* Form_pg_operator ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 () ;
 int VAR_0 ;
 char* FUNC_4 (int ) ;
 int VAR_1 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (TYPE_1__*,char*,char*) ;
 int FUNC_10 (TYPE_1__*,char*) ;
 char* FUNC_11 (scalar_t__) ;
 char* FUNC_12 (scalar_t__) ;
 char* FUNC_13 (int ) ;
 int FUNC_14 (TYPE_1__*) ;
 scalar_t__ FUNC_15 (int ) ;
 char* FUNC_16 (char*) ;
 int FUNC_17 (char*,int ,char*,int) ;

__attribute__((used)) static char *
FUNC_18(Oid VAR_2, bool VAR_3)
{
 char *VAR_4;
 HeapTuple VAR_5;

 VAR_5 = FUNC_8(VAR_1, FUNC_5(VAR_2));

 if (FUNC_2(VAR_5))
 {
  Form_pg_operator VAR_6 = (Form_pg_operator) FUNC_1(VAR_5);
  char *VAR_7 = FUNC_4(VAR_6->oprname);
  char *VAR_8;
  StringInfoData VAR_9;


  FUNC_0(!FUNC_3());

  FUNC_14(&VAR_9);





  if (VAR_3 || !FUNC_6(VAR_2))
  {
   VAR_8 = FUNC_13(VAR_6->oprnamespace);
   FUNC_9(&VAR_9, "%s.",
        FUNC_16(VAR_8));
  }

  FUNC_9(&VAR_9, "%s(", VAR_7);

  if (VAR_6->oprleft)
   FUNC_9(&VAR_9, "%s,",
        VAR_3 ?
        FUNC_12(VAR_6->oprleft) :
        FUNC_11(VAR_6->oprleft));
  else
   FUNC_10(&VAR_9, "NONE,");

  if (VAR_6->oprright)
   FUNC_9(&VAR_9, "%s)",
        VAR_3 ?
        FUNC_12(VAR_6->oprright) :
        FUNC_11(VAR_6->oprright));
  else
   FUNC_10(&VAR_9, "NONE)");

  VAR_4 = VAR_9.data;

  FUNC_7(VAR_5);
 }
 else
 {



  VAR_4 = (char *) FUNC_15(VAR_0);
  FUNC_17(VAR_4, VAR_0, "%u", VAR_2);
 }

 return VAR_4;
}
