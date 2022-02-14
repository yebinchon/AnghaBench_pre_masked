
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_sb {int hardware; int mode; scalar_t__ capture_format; int dma16; int dma8; unsigned int c_dma_size; unsigned int c_period_size; unsigned int force_mode16; int reg_lock; int mixer_lock; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int channels; unsigned int rate; int rate_den; int dma_addr; int format; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (int) ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 scalar_t__ VAR_7 ;
 void* VAR_8 ;
 unsigned char VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned char VAR_13 ;
 unsigned int VAR_14 ;





 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int ,unsigned int,int) ;
 unsigned int FUNC_3 (struct snd_pcm_substream*) ;
 unsigned int FUNC_4 (struct snd_pcm_substream*) ;
 struct snd_sb* FUNC_5 (struct snd_pcm_substream*) ;
 int FUNC_6 (struct snd_sb*,unsigned int) ;
 unsigned int FUNC_7 (struct snd_sb*,int ) ;
 int FUNC_8 (struct snd_sb*,int ,unsigned int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_13(struct snd_pcm_substream *VAR_19)
{
 unsigned long VAR_20;
 struct snd_sb *VAR_21 = FUNC_5(VAR_19);
 struct snd_pcm_runtime *VAR_22 = VAR_19->runtime;
 unsigned int VAR_23, VAR_24, VAR_25, VAR_26;
 unsigned char VAR_27;
 unsigned char VAR_28 = VAR_22->channels > 1;
 int VAR_29;

 VAR_24 = VAR_22->rate;
 switch (VAR_21->hardware) {
 case 129:
  if (VAR_22->format == VAR_18) {
   if (VAR_21->mode & VAR_17)
    return -VAR_2;
   else
    VAR_21->mode |= VAR_15;
  }
  VAR_21->capture_format = VAR_8;
  break;
 case 128:
  if (VAR_22->channels > 1) {
   if (FUNC_1(VAR_24 != FUNC_0(11025) &&
           VAR_24 != FUNC_0(22050)))
    return -VAR_3;
   VAR_21->capture_format = VAR_6;
   break;
  }
  VAR_21->capture_format = (VAR_24 > 23000) ? VAR_6 : VAR_8;
  break;
 case 130:
  if (VAR_24 > 13000) {
   VAR_21->capture_format = VAR_6;
   break;
  }

 case 131:
  VAR_21->capture_format = VAR_8;
  break;
 case 132:
  VAR_21->capture_format = VAR_7;
  break;
 default:
  return -VAR_3;
 }
 if (VAR_21->mode & VAR_15) {
  VAR_27 = VAR_28 ? VAR_13 : VAR_9;
  VAR_29 = VAR_21->dma16;
 } else {
  VAR_27 = VAR_28 ? VAR_14 : VAR_10;
  VAR_21->mode |= VAR_16;
  VAR_29 = VAR_21->dma8;
 }
 VAR_25 = VAR_21->c_dma_size = FUNC_3(VAR_19);
 VAR_26 = VAR_21->c_period_size = FUNC_4(VAR_19);
 FUNC_10(&VAR_21->reg_lock, VAR_20);
 FUNC_6(VAR_21, VAR_12);
 if (VAR_21->hardware == 129)
  FUNC_6(VAR_21, VAR_27);
 else if (VAR_28)
  FUNC_6(VAR_21, VAR_14);
 FUNC_6(VAR_21, VAR_11);
 if (VAR_28) {
  FUNC_6(VAR_21, 256 - VAR_22->rate_den / 2);
  FUNC_9(&VAR_21->mixer_lock);

  VAR_23 = FUNC_7(VAR_21, VAR_5);
  FUNC_8(VAR_21, VAR_5, VAR_23 | 0x20);
  FUNC_11(&VAR_21->mixer_lock);

  VAR_21->force_mode16 = VAR_23;
 } else {
  FUNC_6(VAR_21, 256 - VAR_22->rate_den);
 }
 if (VAR_21->capture_format != VAR_7) {
  if (VAR_21->mode & VAR_17)
   VAR_26 /= 2;
  VAR_26--;
  FUNC_6(VAR_21, VAR_4);
  FUNC_6(VAR_21, VAR_26 & 0xff);
  FUNC_6(VAR_21, VAR_26 >> 8);
 }
 FUNC_12(&VAR_21->reg_lock, VAR_20);
 FUNC_2(VAR_29, VAR_22->dma_addr,
   VAR_25, VAR_1 | VAR_0);
 return 0;
}
