
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int linebuf ;
typedef enum cpufreq_value { ____Placeholder_cpufreq_value } cpufreq_value ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned long FUNC_0 (char*,char**,int ) ;
 unsigned int FUNC_1 (unsigned int,int ,char*,int) ;

__attribute__((used)) static unsigned long FUNC_2(unsigned int VAR_5,
       enum cpufreq_value VAR_6)
{
 unsigned long VAR_7;
 unsigned int VAR_8;
 char VAR_9[VAR_2];
 char *VAR_10;

 if (VAR_6 >= VAR_1)
  return 0;

 VAR_8 = FUNC_1(VAR_5, VAR_3[VAR_6],
    VAR_9, sizeof(VAR_9));

 if (VAR_8 == 0)
  return 0;

 VAR_7 = FUNC_0(VAR_9, &VAR_10, 0);

 if (VAR_10 == VAR_9 || VAR_4 == VAR_0)
  return 0;

 return VAR_7;
}
