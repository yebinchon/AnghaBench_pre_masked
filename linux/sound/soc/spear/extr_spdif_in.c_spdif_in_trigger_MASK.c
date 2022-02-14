
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int format; } ;
struct spdif_in_dev {int clk; int (* reset_perip ) () ;scalar_t__ io_base; TYPE_1__ saved_params; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;






 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 struct spdif_in_dev* FUNC_3 (struct snd_soc_dai*) ;
 int FUNC_4 (struct spdif_in_dev*) ;
 int FUNC_5 (struct spdif_in_dev*,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_substream *VAR_6, int VAR_7,
  struct snd_soc_dai *VAR_8)
{
 struct spdif_in_dev *VAR_9 = FUNC_3(VAR_8);
 u32 VAR_10;
 int VAR_11 = 0;

 if (VAR_6->stream != VAR_1)
  return -VAR_0;

 switch (VAR_7) {
 case 130:
 case 131:
 case 132:
  FUNC_1(VAR_9->clk);
  FUNC_4(VAR_9);
  FUNC_5(VAR_9, VAR_9->saved_params.format);

  VAR_10 = FUNC_2(VAR_9->io_base + VAR_2);
  VAR_10 |= VAR_5 | VAR_3;
  FUNC_7(VAR_10, VAR_9->io_base + VAR_2);
  FUNC_7(0xF, VAR_9->io_base + VAR_4);
  break;

 case 129:
 case 128:
 case 133:
  VAR_10 = FUNC_2(VAR_9->io_base + VAR_2);
  VAR_10 &= ~(VAR_5 | VAR_3);
  FUNC_7(VAR_10, VAR_9->io_base + VAR_2);
  FUNC_7(0x0, VAR_9->io_base + VAR_4);

  if (VAR_9->reset_perip)
   VAR_9->reset_perip();
  FUNC_0(VAR_9->clk);
  break;

 default:
  VAR_11 = -VAR_0;
  break;
 }
 return VAR_11;
}
