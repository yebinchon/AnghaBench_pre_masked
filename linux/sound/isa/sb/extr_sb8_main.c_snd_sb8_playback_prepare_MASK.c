
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_sb {int hardware; int mode; unsigned int playback_format; int dma16; int dma8; unsigned int p_dma_size; unsigned int p_period_size; unsigned int force_mode16; int reg_lock; int mixer_lock; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int channels; unsigned int rate; int* dma_area; int rate_den; int dma_addr; int format; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (int) ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 unsigned char VAR_8 ;
 unsigned char VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned char VAR_14 ;
 unsigned char VAR_15 ;
 int VAR_16 ;





 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
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

__attribute__((used)) static int FUNC_13(struct snd_pcm_substream *VAR_21)
{
 unsigned long VAR_22;
 struct snd_sb *VAR_23 = FUNC_5(VAR_21);
 struct snd_pcm_runtime *VAR_24 = VAR_21->runtime;
 unsigned int VAR_25, VAR_26, VAR_27, VAR_28;
 unsigned char VAR_29;
 unsigned char VAR_30 = VAR_24->channels > 1;
 int VAR_31;

 VAR_26 = VAR_24->rate;
 switch (VAR_23->hardware) {
 case 129:
  if (VAR_24->format == VAR_20) {
   if (VAR_23->mode & VAR_17)
    return -VAR_2;
   else
    VAR_23->mode |= VAR_18;
  }
  VAR_23->playback_format = VAR_7;
  break;
 case 128:
  if (VAR_24->channels > 1) {
   if (FUNC_1(VAR_26 != FUNC_0(11025) &&
           VAR_26 != FUNC_0(22050)))
    return -VAR_3;
   VAR_23->playback_format = VAR_6;
   break;
  }

 case 130:
  if (VAR_26 > 23000) {
   VAR_23->playback_format = VAR_6;
   break;
  }

 case 131:
  VAR_23->playback_format = VAR_7;
  break;
 case 132:
  VAR_23->playback_format = VAR_10;
  break;
 default:
  return -VAR_3;
 }
 if (VAR_23->mode & VAR_18) {
  VAR_29 = VAR_30 ? VAR_14 : VAR_8;
  VAR_31 = VAR_23->dma16;
 } else {
  VAR_29 = VAR_30 ? VAR_15 : VAR_9;
  VAR_23->mode |= VAR_19;
  VAR_31 = VAR_23->dma8;
 }
 VAR_27 = VAR_23->p_dma_size = FUNC_3(VAR_21);
 VAR_28 = VAR_23->p_period_size = FUNC_4(VAR_21);
 FUNC_10(&VAR_23->reg_lock, VAR_22);
 FUNC_6(VAR_23, VAR_13);
 if (VAR_23->hardware == 129)
  FUNC_6(VAR_23, VAR_29);
 else if (VAR_30) {

  FUNC_9(&VAR_23->mixer_lock);
  VAR_25 = FUNC_7(VAR_23, VAR_16);
  FUNC_8(VAR_23, VAR_16, VAR_25 | 0x02);
  FUNC_11(&VAR_23->mixer_lock);


  FUNC_6(VAR_23, VAR_5);
  VAR_24->dma_area[0] = 0x80;
  FUNC_2(VAR_31, VAR_24->dma_addr, 1, VAR_1);

  FUNC_6(VAR_23, VAR_10);
  FUNC_6(VAR_23, 0);
  FUNC_6(VAR_23, 0);
 }
 FUNC_6(VAR_23, VAR_12);
 if (VAR_30) {
  FUNC_6(VAR_23, 256 - VAR_24->rate_den / 2);
  FUNC_9(&VAR_23->mixer_lock);

  VAR_25 = FUNC_7(VAR_23, VAR_11);
  FUNC_8(VAR_23, VAR_11, VAR_25 | 0x20);
  FUNC_11(&VAR_23->mixer_lock);

  VAR_23->force_mode16 = VAR_25;
 } else {
  FUNC_6(VAR_23, 256 - VAR_24->rate_den);
 }
 if (VAR_23->playback_format != VAR_10) {
  if (VAR_23->mode & VAR_18)
   VAR_28 /= 2;
  VAR_28--;
  FUNC_6(VAR_23, VAR_4);
  FUNC_6(VAR_23, VAR_28 & 0xff);
  FUNC_6(VAR_23, VAR_28 >> 8);
 }
 FUNC_12(&VAR_23->reg_lock, VAR_22);
 FUNC_2(VAR_31, VAR_24->dma_addr,
   VAR_27, VAR_1 | VAR_0);
 return 0;
}
