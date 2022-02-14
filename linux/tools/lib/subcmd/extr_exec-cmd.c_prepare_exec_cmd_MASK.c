
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* exec_name; } ;


 char** FUNC_0 (int) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static const char **FUNC_1(const char **VAR_1)
{
 int VAR_2;
 const char **VAR_3;

 for (VAR_2 = 0; VAR_1[VAR_2]; VAR_2++)
  ;
 VAR_3 = FUNC_0(sizeof(*VAR_3) * (VAR_2 + 2));

 VAR_3[0] = VAR_0.exec_name;
 for (VAR_2 = 0; VAR_1[VAR_2]; VAR_2++)
  VAR_3[VAR_2 + 1] = VAR_1[VAR_2];
 VAR_3[VAR_2 + 1] = ((void*)0);
 return VAR_3;
}
