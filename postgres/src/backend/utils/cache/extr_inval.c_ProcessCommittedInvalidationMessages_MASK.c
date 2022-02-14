
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SharedInvalidationMessage ;
typedef int Oid ;


 int VAR_0 ;
 int * VAR_1 ;
 int * FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int ,char*,int,...) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;

void
FUNC_8(SharedInvalidationMessage *VAR_2,
          int VAR_3, bool VAR_4,
          Oid VAR_5, Oid VAR_6)
{
 if (VAR_3 <= 0)
  return;

 FUNC_5(FUNC_7(VAR_0), "replaying commit with %d messages%s", VAR_3,
   (VAR_4 ? " and relcache file invalidation" : ""));

 if (VAR_4)
 {
  FUNC_5(FUNC_7(VAR_0), "removing relcache init files for database %u",
    VAR_5);
  if (FUNC_1(VAR_5))
   VAR_1 = FUNC_0(VAR_5, VAR_6);

  FUNC_3();

  if (FUNC_1(VAR_5))
  {
   FUNC_6(VAR_1);
   VAR_1 = ((void*)0);
  }
 }

 FUNC_4(VAR_2, VAR_3);

 if (VAR_4)
  FUNC_2();
}
