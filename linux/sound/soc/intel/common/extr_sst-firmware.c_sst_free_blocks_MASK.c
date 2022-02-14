
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sst_dsp {int mutex; } ;
struct list_head {int dummy; } ;


 int FUNC_0 (struct sst_dsp*,struct list_head*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct sst_dsp *VAR_0, struct list_head *VAR_1)
{
 FUNC_1(&VAR_0->mutex);
 FUNC_0(VAR_0, VAR_1);
 FUNC_2(&VAR_0->mutex);
 return 0;
}
