
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct backing_dev_info {unsigned int min_ratio; unsigned int max_ratio; unsigned int max_prop_frac; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct backing_dev_info *VAR_3, unsigned VAR_4)
{
 int VAR_5 = 0;

 if (VAR_4 > 100)
  return -VAR_0;

 FUNC_0(&VAR_2);
 if (VAR_3->min_ratio > VAR_4) {
  VAR_5 = -VAR_0;
 } else {
  VAR_3->max_ratio = VAR_4;
  VAR_3->max_prop_frac = (VAR_1 * VAR_4) / 100;
 }
 FUNC_1(&VAR_2);

 return VAR_5;
}
