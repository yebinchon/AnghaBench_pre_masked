
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct viadev {int dummy; } ;
struct via82xx {scalar_t__ revision; int ac97; int * rates; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {scalar_t__ format; int channels; int rate; struct viadev* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct viadev*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 struct via82xx* FUNC_4 (struct snd_pcm_substream*) ;
 int FUNC_5 (struct via82xx*,struct viadev*) ;
 int FUNC_6 (struct via82xx*,int ) ;
 int FUNC_7 (struct via82xx*,struct viadev*) ;
 int FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int *,int ) ;

__attribute__((used)) static int FUNC_10(struct snd_pcm_substream *VAR_11)
{
 struct via82xx *VAR_12 = FUNC_4(VAR_11);
 struct viadev *VAR_13 = VAR_11->runtime->private_data;
 struct snd_pcm_runtime *VAR_14 = VAR_11->runtime;
 unsigned int VAR_15;
 int VAR_16;

 if (FUNC_9(&VAR_12->rates[0], VAR_14->rate) < 0)
  return -VAR_4;
 FUNC_3(VAR_12->ac97, VAR_0, VAR_14->rate);
 FUNC_3(VAR_12->ac97, VAR_2, VAR_14->rate);
 FUNC_3(VAR_12->ac97, VAR_1, VAR_14->rate);
 FUNC_3(VAR_12->ac97, VAR_3, VAR_14->rate);
 FUNC_5(VAR_12, VAR_13);
 FUNC_7(VAR_12, VAR_13);

 VAR_16 = (VAR_14->format == VAR_7) ?
  VAR_8 : VAR_9;
 VAR_16 |= VAR_14->channels << 4;
 FUNC_1(VAR_16, FUNC_0(VAR_13, VAR_6));





 {


  switch (VAR_14->channels) {
  case 1: VAR_15 = (1<<0) | (1<<4); break;
  case 2: VAR_15 = (1<<0) | (2<<4); break;
  case 3: VAR_15 = (1<<0) | (2<<4) | (5<<8); break;
  case 4: VAR_15 = (1<<0) | (2<<4) | (3<<8) | (4<<12); break;
  case 5: VAR_15 = (1<<0) | (2<<4) | (3<<8) | (4<<12) | (5<<16); break;
  case 6: VAR_15 = (1<<0) | (2<<4) | (3<<8) | (4<<12) | (5<<16) | (6<<20); break;
  default: VAR_15 = 0; break;
  }
 }

 FUNC_2(0xff000000 | VAR_15, FUNC_0(VAR_13, VAR_5));
 FUNC_8(20);
 FUNC_6(VAR_12, 0);
 return 0;
}
