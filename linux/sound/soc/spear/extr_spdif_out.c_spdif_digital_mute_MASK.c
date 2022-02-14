
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int mute; } ;
struct spdif_out_dev {scalar_t__ io_base; scalar_t__ running; TYPE_1__ saved_params; } ;
struct snd_soc_dai {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 struct spdif_out_dev* FUNC_1 (struct snd_soc_dai*) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_6, int VAR_7)
{
 struct spdif_out_dev *VAR_8 = FUNC_1(VAR_6);
 u32 VAR_9;

 VAR_8->saved_params.mute = VAR_7;
 VAR_9 = FUNC_0(VAR_8->io_base + VAR_4);
 VAR_9 &= ~VAR_1;

 if (VAR_7)
  VAR_9 |= VAR_2;
 else {
  if (VAR_8->running)
   VAR_9 |= VAR_0 | VAR_5;
  else
   VAR_9 |= VAR_3;
 }

 FUNC_2(VAR_9, VAR_8->io_base + VAR_4);
 return 0;
}
