
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_sof_dev {int dummy; } ;
struct TYPE_2__ {int (* core_power_down ) (struct snd_sof_dev*,unsigned int) ;} ;


 TYPE_1__* FUNC_0 (struct snd_sof_dev*) ;
 int FUNC_1 (struct snd_sof_dev*,unsigned int) ;

__attribute__((used)) static inline int FUNC_2(struct snd_sof_dev *VAR_0,
           unsigned int VAR_1)
{
 if (FUNC_0(VAR_0)->core_power_down)
  return FUNC_0(VAR_0)->core_power_down(VAR_0, VAR_1);

 return 0;
}
