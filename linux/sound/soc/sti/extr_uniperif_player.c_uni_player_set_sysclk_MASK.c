
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uniperif {unsigned int mclk; int ctrl_lock; } ;
struct TYPE_2__ {struct uniperif* uni; } ;
struct sti_uniperiph_data {TYPE_1__ dai_data; } ;
struct snd_soc_dai {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct uniperif*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct sti_uniperiph_data* FUNC_3 (struct snd_soc_dai*) ;
 int FUNC_4 (struct uniperif*,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_dai *VAR_2, int VAR_3,
     unsigned int VAR_4, int VAR_5)
{
 struct sti_uniperiph_data *VAR_6 = FUNC_3(VAR_2);
 struct uniperif *VAR_7 = VAR_6->dai_data.uni;
 int VAR_8;

 if (FUNC_0(VAR_7) || (VAR_5 == VAR_1))
  return 0;

 if (VAR_3 != 0)
  return -VAR_0;

 FUNC_1(&VAR_7->ctrl_lock);
 VAR_8 = FUNC_4(VAR_7, VAR_4);
 if (!VAR_8)
  VAR_7->mclk = VAR_4;
 FUNC_2(&VAR_7->ctrl_lock);

 return VAR_8;
}
