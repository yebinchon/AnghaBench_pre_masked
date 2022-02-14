
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int* values; } ;
struct TYPE_10__ {int pronargs; TYPE_1__ proargtypes; int pronamespace; int proname; } ;
struct TYPE_9__ {char* data; } ;
typedef TYPE_2__ StringInfoData ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_3__* Form_pg_proc ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 () ;
 int VAR_0 ;
 char* FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int VAR_1 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (TYPE_2__*,char*,int ) ;
 int FUNC_10 (TYPE_2__*,char) ;
 int FUNC_11 (TYPE_2__*,int ) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int) ;
 char* FUNC_14 (int ) ;
 int FUNC_15 (TYPE_2__*) ;
 scalar_t__ FUNC_16 (int ) ;
 int FUNC_17 (char*,char*) ;
 int FUNC_18 (char*,int ,char*,int) ;

__attribute__((used)) static char *
FUNC_19(Oid VAR_2, bool VAR_3)
{
 char *VAR_4;
 HeapTuple VAR_5;

 VAR_5 = FUNC_8(VAR_1, FUNC_6(VAR_2));

 if (FUNC_3(VAR_5))
 {
  Form_pg_proc VAR_6 = (Form_pg_proc) FUNC_2(VAR_5);
  char *VAR_7 = FUNC_5(VAR_6->proname);
  int VAR_8 = VAR_6->pronargs;
  int VAR_9;
  char *VAR_10;
  StringInfoData VAR_11;


  FUNC_0(!FUNC_4());

  FUNC_15(&VAR_11);





  if (!VAR_3 && FUNC_1(VAR_2))
   VAR_10 = ((void*)0);
  else
   VAR_10 = FUNC_14(VAR_6->pronamespace);

  FUNC_9(&VAR_11, "%s(",
       FUNC_17(VAR_10, VAR_7));
  for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++)
  {
   Oid VAR_12 = VAR_6->proargtypes.values[VAR_9];

   if (VAR_9 > 0)
    FUNC_10(&VAR_11, ',');
   FUNC_11(&VAR_11,
           VAR_3 ?
           FUNC_13(VAR_12) :
           FUNC_12(VAR_12));
  }
  FUNC_10(&VAR_11, ')');

  VAR_4 = VAR_11.data;

  FUNC_7(VAR_5);
 }
 else
 {

  VAR_4 = (char *) FUNC_16(VAR_0);
  FUNC_18(VAR_4, VAR_0, "%u", VAR_2);
 }

 return VAR_4;
}
