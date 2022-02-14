
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_policy {unsigned long max; unsigned long min; int governor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int,char*,unsigned long) ;
 int FUNC_1 (char*) ;
 unsigned long FUNC_2 (unsigned int,int ) ;
 int FUNC_3 (unsigned int,int ,char*,int ) ;
 scalar_t__ FUNC_4 (char*,int ) ;

int FUNC_5(unsigned int VAR_6, struct cpufreq_policy *VAR_7)
{
 char VAR_8[VAR_2];
 char VAR_9[VAR_2];
 char VAR_10[VAR_2];
 int VAR_11;
 unsigned long VAR_12;
 int VAR_13;

 if (!VAR_7 || !(VAR_7->governor))
  return -VAR_0;

 if (VAR_7->max < VAR_7->min)
  return -VAR_0;

 if (FUNC_4(VAR_10, VAR_7->governor))
  return -VAR_0;

 FUNC_0(VAR_8, VAR_2, "%lu", VAR_7->min);
 FUNC_0(VAR_9, VAR_2, "%lu", VAR_7->max);

 VAR_12 = FUNC_2(VAR_6, VAR_1);
 VAR_13 = (VAR_12 && (VAR_7->max < VAR_12) ? 0 : 1);

 if (VAR_13) {
  VAR_11 = FUNC_3(VAR_6, VAR_4,
          VAR_9, FUNC_1(VAR_9));
  if (VAR_11)
   return VAR_11;
 }

 VAR_11 = FUNC_3(VAR_6, VAR_5, VAR_8,
         FUNC_1(VAR_8));
 if (VAR_11)
  return VAR_11;

 if (!VAR_13) {
  VAR_11 = FUNC_3(VAR_6, VAR_4,
          VAR_9, FUNC_1(VAR_9));
  if (VAR_11)
   return VAR_11;
 }

 return FUNC_3(VAR_6, VAR_3,
          VAR_10, FUNC_1(VAR_10));
}
