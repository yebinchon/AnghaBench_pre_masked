
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gcov_info {unsigned int n_functions; TYPE_1__** functions; } ;
struct gcov_ctr_info {unsigned int num; scalar_t__* values; } ;
struct TYPE_2__ {struct gcov_ctr_info* ctrs; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct gcov_info*,unsigned int) ;

void FUNC_1(struct gcov_info *VAR_1, struct gcov_info *VAR_2)
{
 struct gcov_ctr_info *VAR_3;
 struct gcov_ctr_info *VAR_4;
 unsigned int VAR_5;
 unsigned int VAR_6;
 unsigned int VAR_7;

 for (VAR_5 = 0; VAR_5 < VAR_2->n_functions; VAR_5++) {
  VAR_3 = VAR_1->functions[VAR_5]->ctrs;
  VAR_4 = VAR_2->functions[VAR_5]->ctrs;

  for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
   if (!FUNC_0(VAR_2, VAR_6))
    continue;

   for (VAR_7 = 0; VAR_7 < VAR_4->num; VAR_7++)
    VAR_3->values[VAR_7] +=
     VAR_4->values[VAR_7];

   VAR_3++;
   VAR_4++;
  }
 }
}
