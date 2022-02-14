
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct snd_pcm_substream {int dummy; } ;
struct TYPE_2__ {int ddma_chan; } ;


 int VAR_0 ;




 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_1, int VAR_2)
{
 u32 VAR_3 = FUNC_2(VAR_1)->ddma_chan;

 switch (VAR_2) {
 case 130:
 case 131:
  FUNC_0(VAR_3);
  break;
 case 129:
 case 128:
  FUNC_1(VAR_3);
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
