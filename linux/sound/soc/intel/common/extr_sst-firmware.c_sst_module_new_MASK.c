
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sst_module_template {int entry; int persistent_size; int scratch_size; int id; } ;
struct sst_module {int list; int runtime_list; int block_list; int state; int entry; int persistent_size; int scratch_size; struct sst_fw* sst_fw; struct sst_dsp* dsp; int id; } ;
struct sst_fw {struct sst_dsp* dsp; } ;
struct sst_dsp {int mutex; int module_list; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 struct sst_module* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

struct sst_module *FUNC_5(struct sst_fw *VAR_2,
 struct sst_module_template *VAR_3, void *VAR_4)
{
 struct sst_dsp *VAR_5 = VAR_2->dsp;
 struct sst_module *VAR_6;

 VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_0);
 if (VAR_6 == ((void*)0))
  return ((void*)0);

 VAR_6->id = VAR_3->id;
 VAR_6->dsp = VAR_5;
 VAR_6->sst_fw = VAR_2;
 VAR_6->scratch_size = VAR_3->scratch_size;
 VAR_6->persistent_size = VAR_3->persistent_size;
 VAR_6->entry = VAR_3->entry;
 VAR_6->state = VAR_1;

 FUNC_0(&VAR_6->block_list);
 FUNC_0(&VAR_6->runtime_list);

 FUNC_3(&VAR_5->mutex);
 FUNC_2(&VAR_6->list, &VAR_5->module_list);
 FUNC_4(&VAR_5->mutex);

 return VAR_6;
}
