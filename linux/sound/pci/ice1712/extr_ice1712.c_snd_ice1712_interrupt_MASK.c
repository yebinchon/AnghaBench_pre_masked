
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct snd_pcm_substream {int dummy; } ;
struct snd_ice1712 {struct snd_pcm_substream* playback_con_substream; struct snd_pcm_substream* capture_con_substream; struct snd_pcm_substream** playback_con_substream_ds; struct snd_pcm_substream* capture_pro_substream; struct snd_pcm_substream* playback_pro_substream; TYPE_1__** rmidi; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int private_data; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 unsigned char VAR_8 ;
 unsigned char VAR_9 ;
 int FUNC_0 (struct snd_ice1712*,int ) ;
 int FUNC_1 (struct snd_ice1712*,int ) ;
 int FUNC_2 (struct snd_ice1712*,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (int) ;
 unsigned char FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (unsigned char,int ) ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (int,int ) ;
 int FUNC_9 (struct snd_pcm_substream*) ;

__attribute__((used)) static irqreturn_t FUNC_10(int VAR_13, void *VAR_14)
{
 struct snd_ice1712 *VAR_15 = VAR_14;
 unsigned char VAR_16;
 int VAR_17 = 0;

 while (1) {
  VAR_16 = FUNC_4(FUNC_2(VAR_15, VAR_12));
  if (VAR_16 == 0)
   break;
  VAR_17 = 1;
  if (VAR_16 & VAR_3) {
   if (VAR_15->rmidi[0])
    FUNC_8(VAR_13, VAR_15->rmidi[0]->private_data);
   FUNC_6(VAR_3, FUNC_2(VAR_15, VAR_12));
   VAR_16 &= ~VAR_3;
  }
  if (VAR_16 & VAR_7)
   FUNC_6(VAR_7, FUNC_2(VAR_15, VAR_12));
  if (VAR_16 & VAR_4) {
   if (VAR_15->rmidi[1])
    FUNC_8(VAR_13, VAR_15->rmidi[1]->private_data);
   FUNC_6(VAR_4, FUNC_2(VAR_15, VAR_12));
   VAR_16 &= ~VAR_4;
  }
  if (VAR_16 & VAR_6) {
   unsigned char VAR_18 = FUNC_4(FUNC_1(VAR_15, VAR_11));
   if (VAR_18 & VAR_9) {
    if (VAR_15->playback_pro_substream)
     FUNC_9(VAR_15->playback_pro_substream);
    FUNC_6(VAR_9, FUNC_1(VAR_15, VAR_11));
   }
   if (VAR_18 & VAR_8) {
    if (VAR_15->capture_pro_substream)
     FUNC_9(VAR_15->capture_pro_substream);
    FUNC_6(VAR_8, FUNC_1(VAR_15, VAR_11));
   }
  }
  if (VAR_16 & VAR_2)
   FUNC_6(VAR_2, FUNC_2(VAR_15, VAR_12));
  if (VAR_16 & VAR_5) {
   u32 VAR_19;
   u16 VAR_20;
   struct snd_pcm_substream *VAR_21;
   VAR_20 = FUNC_5(FUNC_0(VAR_15, VAR_10));

   for (VAR_19 = 0; VAR_19 < 6; VAR_19++) {
    if ((VAR_20 & (3 << (VAR_19 * 2))) == 0)
     continue;
    VAR_21 = VAR_15->playback_con_substream_ds[VAR_19];
    if (VAR_21 != ((void*)0))
     FUNC_9(VAR_21);
    FUNC_7(3 << (VAR_19 * 2), FUNC_0(VAR_15, VAR_10));
   }
   FUNC_6(VAR_5, FUNC_2(VAR_15, VAR_12));
  }
  if (VAR_16 & VAR_0) {
   if (VAR_15->capture_con_substream)
    FUNC_9(VAR_15->capture_con_substream);
   FUNC_6(VAR_0, FUNC_2(VAR_15, VAR_12));
  }
  if (VAR_16 & VAR_1) {
   if (VAR_15->playback_con_substream)
    FUNC_9(VAR_15->playback_con_substream);
   FUNC_6(VAR_1, FUNC_2(VAR_15, VAR_12));
  }
 }
 return FUNC_3(VAR_17);
}
