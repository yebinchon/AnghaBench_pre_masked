
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct snd_sof_dev {int dummy; } ;
struct TYPE_2__ {int (* dsp_stack ) (struct snd_sof_dev*,void*,int *,int ) ;} ;


 TYPE_1__* FUNC_0 (struct snd_sof_dev*) ;
 int FUNC_1 (struct snd_sof_dev*,void*,int *,int ) ;

__attribute__((used)) static inline void FUNC_2(struct snd_sof_dev *VAR_0, void *VAR_1, u32 *VAR_2,
        u32 VAR_3)
{
 if (FUNC_0(VAR_0)->dsp_stack)
  FUNC_0(VAR_0)->dsp_stack(VAR_0, VAR_1, VAR_2, VAR_3);
}
