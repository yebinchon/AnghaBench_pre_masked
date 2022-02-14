
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct snd_sof_dev {int dummy; } ;
struct TYPE_2__ {void (* dbg_dump ) (struct snd_sof_dev*,int ) ;} ;


 TYPE_1__* FUNC_0 (struct snd_sof_dev*) ;
 void FUNC_1 (struct snd_sof_dev*,int ) ;

__attribute__((used)) static inline void FUNC_2(struct snd_sof_dev *VAR_0, u32 VAR_1)
{
 if (FUNC_0(VAR_0)->dbg_dump)
  return FUNC_0(VAR_0)->dbg_dump(VAR_0, VAR_1);
}
