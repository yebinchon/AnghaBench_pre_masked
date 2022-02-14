
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sst_dsp {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* stall ) (struct sst_dsp*) ;} ;


 int FUNC_0 (struct sst_dsp*) ;

void FUNC_1(struct sst_dsp *VAR_0)
{
 if (VAR_0->ops->stall)
  VAR_0->ops->stall(VAR_0);
}
