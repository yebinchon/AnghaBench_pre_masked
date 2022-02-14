
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sst_dsp {int mutex; int scratch_block_list; } ;


 int FUNC_0 (struct sst_dsp*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct sst_dsp *VAR_0)
{
 FUNC_1(&VAR_0->mutex);
 FUNC_0(VAR_0, &VAR_0->scratch_block_list);
 FUNC_2(&VAR_0->mutex);
}
