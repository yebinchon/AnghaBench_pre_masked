
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_sof_dev {int dummy; } ;
struct TYPE_2__ {int (* trace_release ) (struct snd_sof_dev*) ;} ;


 TYPE_1__* FUNC_0 (struct snd_sof_dev*) ;
 int FUNC_1 (struct snd_sof_dev*) ;

__attribute__((used)) static inline int FUNC_2(struct snd_sof_dev *VAR_0)
{
 if (FUNC_0(VAR_0)->trace_release)
  return FUNC_0(VAR_0)->trace_release(VAR_0);

 return 0;
}
