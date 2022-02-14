
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;
struct imx_ssi {int flags; scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;






 scalar_t__ VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 scalar_t__ VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int FUNC_0 (scalar_t__) ;
 struct imx_ssi* FUNC_1 (struct snd_soc_dai*) ;
 int FUNC_2 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_15, int VAR_16,
  struct snd_soc_dai *VAR_17)
{
 struct imx_ssi *VAR_18 = FUNC_1(VAR_17);
 unsigned int VAR_19, VAR_20;
 unsigned int VAR_21;

 VAR_21 = FUNC_0(VAR_18->base + VAR_4);
 VAR_20 = FUNC_0(VAR_18->base + VAR_8);

 if (VAR_15->stream == VAR_3) {
  if (VAR_18->flags & VAR_1)
   VAR_19 = VAR_12;
  else
   VAR_19 = VAR_14 | VAR_13;
 } else {
  if (VAR_18->flags & VAR_1)
   VAR_19 = VAR_9;
  else
   VAR_19 = VAR_11 | VAR_10;
 }

 switch (VAR_16) {
 case 130:
 case 131:
 case 132:
  if (VAR_15->stream == VAR_3)
   VAR_21 |= VAR_7;
  else
   VAR_21 |= VAR_5;
  VAR_20 |= VAR_19;

  VAR_21 |= VAR_6;

  break;

 case 129:
 case 128:
 case 133:
  if (VAR_15->stream == VAR_3)
   VAR_21 &= ~VAR_7;
  else
   VAR_21 &= ~VAR_5;
  VAR_20 &= ~VAR_19;

  if (!(VAR_21 & (VAR_7 | VAR_5)))
   VAR_21 &= ~VAR_6;

  break;
 default:
  return -VAR_0;
 }

 if (!(VAR_18->flags & VAR_2))

  FUNC_2(VAR_21, VAR_18->base + VAR_4);

 FUNC_2(VAR_20, VAR_18->base + VAR_8);

 return 0;
}
