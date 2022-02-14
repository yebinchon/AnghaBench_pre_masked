
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sst_module_runtime {int id; int list; int block_list; struct sst_module* module; struct sst_dsp* dsp; } ;
struct sst_module {int runtime_list; struct sst_dsp* dsp; } ;
struct sst_dsp {int mutex; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct sst_module_runtime* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

struct sst_module_runtime *FUNC_5(struct sst_module *VAR_1,
 int VAR_2, void *VAR_3)
{
 struct sst_dsp *VAR_4 = VAR_1->dsp;
 struct sst_module_runtime *VAR_5;

 VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_0);
 if (VAR_5 == ((void*)0))
  return ((void*)0);

 VAR_5->id = VAR_2;
 VAR_5->dsp = VAR_4;
 VAR_5->module = VAR_1;
 FUNC_0(&VAR_5->block_list);

 FUNC_3(&VAR_4->mutex);
 FUNC_2(&VAR_5->list, &VAR_1->runtime_list);
 FUNC_4(&VAR_4->mutex);

 return VAR_5;
}
