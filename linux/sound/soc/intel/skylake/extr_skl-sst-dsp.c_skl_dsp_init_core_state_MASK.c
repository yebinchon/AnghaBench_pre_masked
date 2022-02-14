
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sst_dsp {struct skl_dev* thread_context; } ;
struct TYPE_2__ {int* usage_count; int count; int * state; } ;
struct skl_dev {TYPE_1__ cores; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_0(struct sst_dsp *VAR_3)
{
 struct skl_dev *VAR_4 = VAR_3->thread_context;
 int VAR_5;

 VAR_4->cores.state[VAR_0] = VAR_2;
 VAR_4->cores.usage_count[VAR_0] = 1;

 for (VAR_5 = VAR_0 + 1; VAR_5 < VAR_4->cores.count; VAR_5++) {
  VAR_4->cores.state[VAR_5] = VAR_1;
  VAR_4->cores.usage_count[VAR_5] = 0;
 }
}
