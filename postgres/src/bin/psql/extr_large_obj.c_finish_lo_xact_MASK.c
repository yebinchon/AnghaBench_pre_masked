
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ autocommit; } ;
typedef int PGresult ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char*) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static bool
FUNC_2(const char *VAR_1, bool VAR_2)
{
 PGresult *VAR_3;

 if (VAR_2 && VAR_0.autocommit)
 {

  if (!(VAR_3 = FUNC_1("COMMIT")))
  {
   VAR_3 = FUNC_1("ROLLBACK");
   FUNC_0(VAR_3);
   return 0;
  }
  FUNC_0(VAR_3);
 }

 return 1;
}
