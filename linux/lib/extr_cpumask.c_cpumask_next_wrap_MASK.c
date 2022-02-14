
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpumask {int dummy; } ;


 int FUNC_0 (int,struct cpumask const*) ;
 int VAR_0 ;

int FUNC_1(int VAR_1, const struct cpumask *VAR_2, int VAR_3, bool VAR_4)
{
 int VAR_5;

again:
 VAR_5 = FUNC_0(VAR_1, VAR_2);

 if (VAR_4 && VAR_1 < VAR_3 && VAR_5 >= VAR_3) {
  return VAR_0;

 } else if (VAR_5 >= VAR_0) {
  VAR_4 = 1;
  VAR_1 = -1;
  goto again;
 }

 return VAR_5;
}
