
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct snd_sof_dev {int dummy; } ;
struct TYPE_2__ {int (* set_clk ) (struct snd_sof_dev*,int ) ;} ;


 TYPE_1__* FUNC_0 (struct snd_sof_dev*) ;
 int FUNC_1 (struct snd_sof_dev*,int ) ;

__attribute__((used)) static inline int FUNC_2(struct snd_sof_dev *VAR_0, u32 VAR_1)
{
 if (FUNC_0(VAR_0)->set_clk)
  return FUNC_0(VAR_0)->set_clk(VAR_0, VAR_1);

 return 0;
}
