
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum cpufreq_write { ____Placeholder_cpufreq_write } cpufreq_write ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 size_t FUNC_0 (unsigned int,int ,char const*,size_t) ;

__attribute__((used)) static int FUNC_1(unsigned int VAR_3,
      enum cpufreq_write VAR_4,
      const char *VAR_5, size_t VAR_6)
{
 if (VAR_4 >= VAR_1)
  return 0;

 if (FUNC_0(VAR_3, VAR_2[VAR_4],
     VAR_5, VAR_6) != VAR_6)
  return -VAR_0;

 return 0;
}
