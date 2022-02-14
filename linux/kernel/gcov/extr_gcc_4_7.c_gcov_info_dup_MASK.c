
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct gcov_info {unsigned int n_functions; TYPE_1__** functions; int * filename; int * next; } ;
struct gcov_fn_info {int dummy; } ;
struct gcov_ctr_info {int num; int values; } ;
typedef int gcov_type ;
struct TYPE_3__ {struct gcov_ctr_info* ctrs; } ;


 int VAR_0 ;
 int FUNC_0 (struct gcov_info*) ;
 TYPE_1__** FUNC_1 (unsigned int,int,int ) ;
 struct gcov_info* FUNC_2 (struct gcov_info*,int,int ) ;
 int * FUNC_3 (int *,int ) ;
 TYPE_1__* FUNC_4 (size_t,int ) ;
 int FUNC_5 (int ,int ,size_t) ;
 unsigned int FUNC_6 (struct gcov_info*) ;
 int FUNC_7 (size_t) ;

struct gcov_info *FUNC_8(struct gcov_info *VAR_1)
{
 struct gcov_info *VAR_2;
 struct gcov_ctr_info *VAR_3;
 struct gcov_ctr_info *VAR_4;
 unsigned int VAR_5;
 unsigned int VAR_6;
 unsigned int VAR_7;
 size_t VAR_8;
 size_t VAR_9;

 VAR_2 = FUNC_2(VAR_1, sizeof(*VAR_2), VAR_0);
 if (!VAR_2)
  return ((void*)0);

 VAR_2->next = ((void*)0);
 VAR_2->filename = ((void*)0);
 VAR_2->functions = ((void*)0);

 VAR_2->filename = FUNC_3(VAR_1->filename, VAR_0);
 if (!VAR_2->filename)
  goto err_free;

 VAR_2->functions = FUNC_1(VAR_1->n_functions,
     sizeof(struct gcov_fn_info *), VAR_0);
 if (!VAR_2->functions)
  goto err_free;

 VAR_5 = FUNC_6(VAR_1);
 VAR_8 = sizeof(struct gcov_fn_info);
 VAR_8 += sizeof(struct gcov_ctr_info) * VAR_5;

 for (VAR_6 = 0; VAR_6 < VAR_1->n_functions; VAR_6++) {
  VAR_2->functions[VAR_6] = FUNC_4(VAR_8, VAR_0);
  if (!VAR_2->functions[VAR_6])
   goto err_free;

  *(VAR_2->functions[VAR_6]) = *(VAR_1->functions[VAR_6]);

  VAR_4 = VAR_1->functions[VAR_6]->ctrs;
  VAR_3 = VAR_2->functions[VAR_6]->ctrs;

  for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {

   VAR_9 = sizeof(gcov_type) * VAR_4->num;

   VAR_3->values = FUNC_7(VAR_9);

   if (!VAR_3->values)
    goto err_free;

   VAR_3->num = VAR_4->num;
   FUNC_5(VAR_3->values, VAR_4->values, VAR_9);

   VAR_4++;
   VAR_3++;
  }
 }

 return VAR_2;
err_free:
 FUNC_0(VAR_2);
 return ((void*)0);
}
