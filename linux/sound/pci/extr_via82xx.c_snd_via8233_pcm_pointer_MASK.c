
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct viadev {unsigned int tbl_entries; int in_interrupt; unsigned int lastpos; unsigned int hwptr_done; scalar_t__ fragsize; } ;
struct via82xx {scalar_t__ revision; int reg_lock; TYPE_1__* card; } ;
struct snd_pcm_substream {TYPE_2__* runtime; } ;
typedef int snd_pcm_uframes_t ;
struct TYPE_4__ {struct viadev* private_data; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct viadev*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (TYPE_2__*,unsigned int) ;
 unsigned int FUNC_2 (struct via82xx*,struct viadev*,unsigned int,unsigned int) ;
 int FUNC_3 (int ,char*,unsigned int,unsigned int) ;
 int FUNC_4 (int ) ;
 unsigned int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int) ;
 struct via82xx* FUNC_7 (struct snd_pcm_substream*) ;
 int FUNC_8 (struct snd_pcm_substream*,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_11(struct snd_pcm_substream *VAR_7)
{
 struct via82xx *VAR_8 = FUNC_7(VAR_7);
 struct viadev *VAR_9 = VAR_7->runtime->private_data;
 unsigned int VAR_10, VAR_11, VAR_12;
 int VAR_13;

 if (FUNC_6(!VAR_9->tbl_entries))
  return 0;

 FUNC_9(&VAR_8->reg_lock);
 VAR_11 = FUNC_5(FUNC_0(VAR_9, VAR_0));
 VAR_13 = VAR_9->in_interrupt;
 if (!VAR_13)
  VAR_13 = FUNC_4(FUNC_0(VAR_9, VAR_1));



 if (VAR_8->revision == VAR_6 && (VAR_13 & VAR_4))
  FUNC_8(VAR_7, VAR_2);

 if (!(VAR_13 & VAR_3)) {
  VAR_12 = 0;
  goto unlock;
 }
 if (VAR_11 & 0xffffff) {
  VAR_10 = VAR_11 >> 24;
  if (VAR_10 >= VAR_9->tbl_entries) {





   VAR_12 = VAR_9->lastpos;
  } else {
   VAR_11 &= 0xffffff;
   VAR_12 = FUNC_2(VAR_8, VAR_9, VAR_10, VAR_11);
  }
 } else {
  VAR_12 = VAR_9->hwptr_done;
  if (!VAR_9->in_interrupt) {
   if (VAR_13 & VAR_4) {
    VAR_12 = 0;
   } else
    if (VAR_13 & VAR_5) {
     VAR_12 += VAR_9->fragsize;
    }
  }
 }
unlock:
 VAR_9->lastpos = VAR_12;
 FUNC_10(&VAR_8->reg_lock);

 return FUNC_1(VAR_7->runtime, VAR_12);
}
