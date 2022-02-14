
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int linebuf ;
typedef enum cpufreq_string { ____Placeholder_cpufreq_string } cpufreq_string ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 unsigned int FUNC_2 (unsigned int,int ,char*,int) ;

__attribute__((used)) static char *FUNC_3(unsigned int VAR_3,
        enum cpufreq_string VAR_4)
{
 char VAR_5[VAR_1];
 char *VAR_6;
 unsigned int VAR_7;

 if (VAR_4 >= VAR_0)
  return ((void*)0);

 VAR_7 = FUNC_2(VAR_3, VAR_2[VAR_4],
    VAR_5, sizeof(VAR_5));
 if (VAR_7 == 0)
  return ((void*)0);

 VAR_6 = FUNC_0(VAR_5);
 if (VAR_6 == ((void*)0))
  return ((void*)0);

 if (VAR_6[FUNC_1(VAR_6) - 1] == '\n')
  VAR_6[FUNC_1(VAR_6) - 1] = '\0';

 return VAR_6;
}
