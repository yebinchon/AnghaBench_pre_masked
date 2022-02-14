
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gcov_info {unsigned int n_functions; TYPE_1__** functions; } ;
struct gcov_ctr_info {int num; int values; } ;
typedef int gcov_type ;
struct TYPE_2__ {struct gcov_ctr_info* ctrs; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct gcov_info*,unsigned int) ;
 int FUNC_1 (int ,int ,int) ;

void FUNC_2(struct gcov_info *VAR_1)
{
 struct gcov_ctr_info *VAR_2;
 unsigned int VAR_3;
 unsigned int VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_1->n_functions; VAR_3++) {
  VAR_2 = VAR_1->functions[VAR_3]->ctrs;

  for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
   if (!FUNC_0(VAR_1, VAR_4))
    continue;

   FUNC_1(VAR_2->values, 0,
     sizeof(gcov_type) * VAR_2->num);
   VAR_2++;
  }
 }
}
