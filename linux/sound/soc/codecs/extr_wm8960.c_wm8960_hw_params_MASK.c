
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct wm8960_priv {int bclk; int* is_stream_in_use; scalar_t__ lrclk; } ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct TYPE_3__ {scalar_t__ rate; int val; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 scalar_t__ FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (struct snd_pcm_hw_params*) ;
 scalar_t__ FUNC_5 (struct snd_soc_component*) ;
 struct wm8960_priv* FUNC_6 (struct snd_soc_component*) ;
 int FUNC_7 (struct snd_soc_component*,int ) ;
 int FUNC_8 (struct snd_soc_component*,int ,int,int ) ;
 int FUNC_9 (struct snd_soc_component*,int ,int) ;
 int FUNC_10 (struct snd_pcm_hw_params*) ;
 int FUNC_11 (struct snd_soc_component*) ;
 int FUNC_12 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_13(struct snd_pcm_substream *VAR_6,
       struct snd_pcm_hw_params *VAR_7,
       struct snd_soc_dai *VAR_8)
{
 struct snd_soc_component *VAR_9 = VAR_8->component;
 struct wm8960_priv *VAR_10 = FUNC_6(VAR_9);
 u16 VAR_11 = FUNC_7(VAR_9, VAR_4) & 0xfff3;
 bool VAR_12 = VAR_6->stream == VAR_1;
 int VAR_13;

 VAR_10->bclk = FUNC_10(VAR_7);
 if (FUNC_2(VAR_7) == 1)
  VAR_10->bclk *= 2;


 switch (FUNC_4(VAR_7)) {
 case 16:
  break;
 case 20:
  VAR_11 |= 0x0004;
  break;
 case 24:
  VAR_11 |= 0x0008;
  break;
 case 32:

  if ((VAR_11 & 0x3) != 0) {
   VAR_11 |= 0x000c;
   break;
  }

 default:
  FUNC_1(VAR_9->dev, "unsupported width %d\n",
   FUNC_4(VAR_7));
  return -VAR_0;
 }

 VAR_10->lrclk = FUNC_3(VAR_7);

 if (VAR_12) {
  FUNC_12(VAR_9);
 } else {
  for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_5); VAR_13++)
   if (VAR_5[VAR_13].rate == FUNC_3(VAR_7))
    FUNC_8(VAR_9,
          VAR_3, 0x7,
          VAR_5[VAR_13].val);
 }


 FUNC_9(VAR_9, VAR_4, VAR_11);

 VAR_10->is_stream_in_use[VAR_12] = 1;

 if (FUNC_5(VAR_9) == VAR_2 &&
     !VAR_10->is_stream_in_use[!VAR_12])
  return FUNC_11(VAR_9);

 return 0;
}
