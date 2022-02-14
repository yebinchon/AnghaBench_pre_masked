
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sst_module {int list; struct sst_dsp* dsp; } ;
struct sst_dsp {int mutex; } ;


 int FUNC_0 (struct sst_module*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct sst_module *VAR_0)
{
 struct sst_dsp *VAR_1 = VAR_0->dsp;

 FUNC_2(&VAR_1->mutex);
 FUNC_1(&VAR_0->list);
 FUNC_3(&VAR_1->mutex);

 FUNC_0(VAR_0);
}
