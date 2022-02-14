
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_sof_dev {int dummy; } ;
struct TYPE_2__ {int (* dsp_oops ) (struct snd_sof_dev*,void*) ;} ;


 TYPE_1__* FUNC_0 (struct snd_sof_dev*) ;
 int FUNC_1 (struct snd_sof_dev*,void*) ;

__attribute__((used)) static inline void FUNC_2(struct snd_sof_dev *VAR_0, void *VAR_1)
{
 if (FUNC_0(VAR_0)->dsp_oops)
  FUNC_0(VAR_0)->dsp_oops(VAR_0, VAR_1);
}
