
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gcov_info {int n_functions; struct gcov_ctr_info* counts; int functions; int filename; int ctr_mask; int stamp; int version; } ;
struct gcov_ctr_info {int num; int values; int merge; } ;
typedef int gcov_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gcov_info*) ;
 int FUNC_1 (struct gcov_info*) ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 (int ,int ) ;
 struct gcov_info* FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,size_t) ;
 unsigned int FUNC_6 (struct gcov_info*) ;
 int FUNC_7 (struct gcov_info*,int ,unsigned int) ;
 int FUNC_8 (size_t) ;

struct gcov_info *FUNC_9(struct gcov_info *VAR_2)
{
 struct gcov_info *VAR_3;
 unsigned int VAR_4;
 unsigned int VAR_5;


 VAR_5 = FUNC_6(VAR_2);
 VAR_3 = FUNC_4(FUNC_7(VAR_3, VAR_1, VAR_5), VAR_0);
 if (!VAR_3)
  return ((void*)0);
 VAR_3->version = VAR_2->version;
 VAR_3->stamp = VAR_2->stamp;
 VAR_3->n_functions = VAR_2->n_functions;
 VAR_3->ctr_mask = VAR_2->ctr_mask;

 VAR_3->filename = FUNC_3(VAR_2->filename, VAR_0);
 if (!VAR_3->filename)
  goto err_free;

 VAR_3->functions = FUNC_2(VAR_2->functions, VAR_2->n_functions *
     FUNC_1(VAR_2), VAR_0);
 if (!VAR_3->functions)
  goto err_free;

 for (VAR_4 = 0; VAR_4 < VAR_5 ; VAR_4++) {
  struct gcov_ctr_info *VAR_6 = &VAR_2->counts[VAR_4];
  size_t VAR_7 = VAR_6->num * sizeof(gcov_type);

  VAR_3->counts[VAR_4].num = VAR_6->num;
  VAR_3->counts[VAR_4].merge = VAR_6->merge;
  VAR_3->counts[VAR_4].values = FUNC_8(VAR_7);
  if (!VAR_3->counts[VAR_4].values)
   goto err_free;
  FUNC_5(VAR_3->counts[VAR_4].values, VAR_6->values, VAR_7);
 }
 return VAR_3;

err_free:
 FUNC_0(VAR_3);
 return ((void*)0);
}
