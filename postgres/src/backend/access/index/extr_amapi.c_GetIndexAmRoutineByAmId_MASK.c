
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int regproc ;
struct TYPE_2__ {scalar_t__ amtype; int amname; int amhandler; } ;
typedef int Oid ;
typedef int IndexAmRoutine ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_am ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,char*,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*,int ,...) ;

IndexAmRoutine *
FUNC_12(Oid VAR_4, bool VAR_5)
{
 HeapTuple VAR_6;
 Form_pg_am VAR_7;
 regproc VAR_8;


 VAR_6 = FUNC_7(VAR_0, FUNC_4(VAR_4));
 if (!FUNC_2(VAR_6))
 {
  if (VAR_5)
   return ((void*)0);
  FUNC_8(VAR_3, "cache lookup failed for access method %u",
    VAR_4);
 }
 VAR_7 = (Form_pg_am) FUNC_0(VAR_6);


 if (VAR_7->amtype != VAR_1)
 {
  if (VAR_5)
  {
   FUNC_6(VAR_6);
   return ((void*)0);
  }
  FUNC_9(VAR_3,
    (FUNC_10(VAR_2),
     FUNC_11("access method \"%s\" is not of type %s",
      FUNC_3(VAR_7->amname), "INDEX")));
 }

 VAR_8 = VAR_7->amhandler;


 if (!FUNC_5(VAR_8))
 {
  if (VAR_5)
  {
   FUNC_6(VAR_6);
   return ((void*)0);
  }
  FUNC_9(VAR_3,
    (FUNC_10(VAR_2),
     FUNC_11("index access method \"%s\" does not have a handler",
      FUNC_3(VAR_7->amname))));
 }

 FUNC_6(VAR_6);


 return FUNC_1(VAR_8);
}
