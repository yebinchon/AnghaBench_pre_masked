
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int exec_path; int exec_path_env; } ;


 char* VAR_0 ;
 char* FUNC_0 (int ) ;
 char* FUNC_1 (char*) ;
 TYPE_1__ VAR_1 ;
 char* FUNC_2 (int ) ;

char *FUNC_3(void)
{
 char *VAR_2;

 if (VAR_0)
  return FUNC_1(VAR_0);

 VAR_2 = FUNC_0(VAR_1.exec_path_env);
 if (VAR_2 && *VAR_2)
  return FUNC_1(VAR_2);

 return FUNC_2(VAR_1.exec_path);
}
