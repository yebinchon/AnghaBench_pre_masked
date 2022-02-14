
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ oprnamespace; int oprright; int oprleft; int oprname; } ;
typedef scalar_t__ Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_operator ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ,int ,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int VAR_3 ;
 int FUNC_7 (int ,char*,scalar_t__) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,scalar_t__) ;
 int FUNC_10 (char*) ;
 int FUNC_11 () ;

bool
FUNC_12(Oid VAR_4)
{
 HeapTuple VAR_5;
 Form_pg_operator VAR_6;
 Oid VAR_7;
 bool VAR_8;

 VAR_5 = FUNC_6(VAR_1, FUNC_3(VAR_4));
 if (!FUNC_1(VAR_5))
  FUNC_7(VAR_0, "cache lookup failed for operator %u", VAR_4);
 VAR_6 = (Form_pg_operator) FUNC_0(VAR_5);

 FUNC_11();






 VAR_7 = VAR_6->oprnamespace;
 if (VAR_7 != VAR_2 &&
  !FUNC_9(VAR_3, VAR_7))
  VAR_8 = 0;
 else
 {






  char *VAR_9 = FUNC_2(VAR_6->oprname);

  VAR_8 = (FUNC_4(FUNC_8(FUNC_10(VAR_9)),
         VAR_6->oprleft, VAR_6->oprright)
       == VAR_4);
 }

 FUNC_5(VAR_5);

 return VAR_8;
}
