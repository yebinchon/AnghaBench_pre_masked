
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int db; } ;


 char* FUNC_0 (int ,char*) ;
 TYPE_1__ VAR_0 ;
 scalar_t__ FUNC_1 (char const*,char*) ;

bool
FUNC_2(void)
{
 const char *VAR_1;

 if (!VAR_0.db)
  return 0;

 VAR_1 = FUNC_0(VAR_0.db, "is_superuser");

 if (VAR_1 && FUNC_1(VAR_1, "on") == 0)
  return 1;

 return 0;
}
