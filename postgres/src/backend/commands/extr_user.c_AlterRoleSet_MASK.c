
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int setstmt; int * database; scalar_t__ role; } ;
struct TYPE_4__ {scalar_t__ oid; scalar_t__ rolsuper; } ;
typedef scalar_t__ Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_authid ;
typedef TYPE_2__ AlterRoleSetStmt ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (scalar_t__,char*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (int *,int) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 () ;
 int FUNC_12 (scalar_t__,scalar_t__) ;
 int FUNC_13 (int ,scalar_t__) ;
 int FUNC_14 () ;

Oid
FUNC_15(AlterRoleSetStmt *VAR_7)
{
 HeapTuple VAR_8;
 Form_pg_authid VAR_9;
 Oid VAR_10 = VAR_5;
 Oid VAR_11 = VAR_5;

 if (VAR_7->role)
 {
  FUNC_5(VAR_7->role,
       "Cannot alter reserved roles.");

  VAR_8 = FUNC_10(VAR_7->role);
  VAR_9 = (Form_pg_authid) FUNC_1(VAR_8);
  VAR_11 = VAR_9->oid;





  FUNC_13(VAR_1, VAR_11);





  if (VAR_9->rolsuper)
  {
   if (!FUNC_14())
    FUNC_6(VAR_4,
      (FUNC_7(VAR_3),
       FUNC_8("must be superuser to alter superusers")));
  }
  else
  {
   if (!FUNC_11() && VAR_11 != FUNC_2())
    FUNC_6(VAR_4,
      (FUNC_7(VAR_3),
       FUNC_8("permission denied")));
  }

  FUNC_3(VAR_8);
 }


 if (VAR_7->database != ((void*)0))
 {
  VAR_10 = FUNC_9(VAR_7->database, 0);
  FUNC_13(VAR_2, VAR_10);

  if (!VAR_7->role)
  {




   if (!FUNC_12(VAR_10, FUNC_2()))
    FUNC_4(VAR_0, VAR_6,
          VAR_7->database);
  }
 }

 if (!VAR_7->role && !VAR_7->database)
 {

  if (!FUNC_14())
   FUNC_6(VAR_4,
     (FUNC_7(VAR_3),
      FUNC_8("must be superuser to alter settings globally")));
 }

 FUNC_0(VAR_10, VAR_11, VAR_7->setstmt);

 return VAR_11;
}
