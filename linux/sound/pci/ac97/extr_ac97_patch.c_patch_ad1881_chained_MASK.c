
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* codec_cfg; scalar_t__* unchained; scalar_t__* chained; } ;
struct TYPE_4__ {TYPE_1__ ad18xx; } ;
struct snd_ac97 {TYPE_2__ spec; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct snd_ac97*,int,int) ;
 int FUNC_1 (struct snd_ac97*,int ,int,scalar_t__) ;
 int FUNC_2 (struct snd_ac97*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct snd_ac97 * VAR_2, int VAR_3, int VAR_4, int VAR_5)
{

 if (VAR_2->spec.ad18xx.unchained[VAR_4] || VAR_2->spec.ad18xx.chained[VAR_4])
  VAR_4 = -1;
 if (VAR_2->spec.ad18xx.unchained[VAR_5] || VAR_2->spec.ad18xx.chained[VAR_5])
  VAR_5 = -1;
 if (VAR_4 < 0 && VAR_5 < 0)
  return;

 FUNC_1(VAR_2, VAR_1, 0x7000,
        VAR_2->spec.ad18xx.unchained[VAR_3]);
 FUNC_2(VAR_2, VAR_0, 0x0002);
 VAR_2->spec.ad18xx.codec_cfg[VAR_3] = 0x0002;
 if (VAR_4 >= 0) {
  if (VAR_5 < 0)
   FUNC_0(VAR_2, VAR_4, 0);
  else if (FUNC_0(VAR_2, VAR_4, 0x0006))
   FUNC_0(VAR_2, VAR_5, 0);
  else if (FUNC_0(VAR_2, VAR_5, 0x0006))
   FUNC_0(VAR_2, VAR_4, 0);
 } else if (VAR_5 >= 0) {
  FUNC_0(VAR_2, VAR_5, 0);
 }
}
