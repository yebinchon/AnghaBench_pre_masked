
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int linebuf ;
typedef enum cpuidle_string { ____Placeholder_cpuidle_string } cpuidle_string ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 unsigned int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static char *FUNC_3(enum cpuidle_string VAR_3)
{
 char VAR_4[VAR_1];
 char *VAR_5;
 unsigned int VAR_6;

 if (VAR_3 >= VAR_0)
  return ((void*)0);

 VAR_6 = FUNC_2(VAR_2[VAR_3],
    VAR_4, sizeof(VAR_4));
 if (VAR_6 == 0)
  return ((void*)0);

 VAR_5 = FUNC_0(VAR_4);
 if (VAR_5 == ((void*)0))
  return ((void*)0);

 if (VAR_5[FUNC_1(VAR_5) - 1] == '\n')
  VAR_5[FUNC_1(VAR_5) - 1] = '\0';

 return VAR_5;
}
