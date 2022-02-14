
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct viadev {unsigned int shadow_shift; unsigned char in_interrupt; scalar_t__ fragsize; scalar_t__ hwptr_done; scalar_t__ running; struct snd_pcm_substream* substream; } ;
struct via82xx {unsigned int num_devs; int reg_lock; struct viadev* devs; } ;
struct snd_pcm_substream {int dummy; } ;
typedef int irqreturn_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_1 (struct viadev*,int ) ;
 int FUNC_2 (struct via82xx*,int ) ;
 unsigned char VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int FUNC_3 (int ) ;
 int FUNC_4 (unsigned char,int ) ;
 int FUNC_5 (struct snd_pcm_substream*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_6, void *VAR_7)
{
 struct via82xx *VAR_8 = VAR_7;
 unsigned int VAR_9;
 unsigned int VAR_10;
 int VAR_11 = 0;


 FUNC_6(&VAR_8->reg_lock);
 VAR_9 = FUNC_3(FUNC_2(VAR_8, VAR_1));

 for (VAR_10 = 0; VAR_10 < VAR_8->num_devs; VAR_10++) {
  struct viadev *VAR_12 = &VAR_8->devs[VAR_10];
  struct snd_pcm_substream *VAR_13;
  unsigned char VAR_14, VAR_15;

  VAR_15 = (VAR_9 >> VAR_12->shadow_shift) &
   (VAR_2|VAR_4|
    VAR_5);
  VAR_14 = VAR_15 & (VAR_4|VAR_5);
  if (!VAR_14)
   continue;

  VAR_13 = VAR_12->substream;
  if (VAR_13 && VAR_12->running) {





   if (VAR_14 & VAR_4)
    VAR_12->hwptr_done = 0;
   else
    VAR_12->hwptr_done += VAR_12->fragsize;
   VAR_12->in_interrupt = VAR_14;
   if (VAR_15 & VAR_2)
    VAR_12->in_interrupt |= VAR_3;
   FUNC_7(&VAR_8->reg_lock);

   FUNC_5(VAR_13);

   FUNC_6(&VAR_8->reg_lock);
   VAR_12->in_interrupt = 0;
  }
  FUNC_4(VAR_14, FUNC_1(VAR_12, VAR_0));
  VAR_11 = 1;
 }
 FUNC_7(&VAR_8->reg_lock);
 return FUNC_0(VAR_11);
}
