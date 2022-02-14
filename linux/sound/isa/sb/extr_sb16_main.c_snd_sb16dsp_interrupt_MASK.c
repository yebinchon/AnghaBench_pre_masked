
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_sb {int mode; int reg_lock; int capture_substream; int playback_substream; TYPE_1__* rmidi; int (* rmidi_callback ) (int,int ) ;int mixer_lock; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct snd_sb*) ;
 int FUNC_2 (struct snd_sb*) ;
 int FUNC_3 (struct snd_sb*) ;
 int FUNC_4 (struct snd_sb*,int ) ;
 unsigned char FUNC_5 (struct snd_sb*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int,int ) ;

irqreturn_t FUNC_9(int VAR_11, void *VAR_12)
{
 struct snd_sb *VAR_13 = VAR_12;
 unsigned char VAR_14;
 int VAR_15;

 FUNC_6(&VAR_13->mixer_lock);
 VAR_14 = FUNC_5(VAR_13, VAR_1);
 FUNC_7(&VAR_13->mixer_lock);
 if ((VAR_14 & VAR_6) && VAR_13->rmidi_callback)
  VAR_13->rmidi_callback(VAR_11, VAR_13->rmidi->private_data);
 if (VAR_14 & VAR_5) {
  VAR_15 = 0;
  if (VAR_13->mode & VAR_10) {
   FUNC_0(VAR_13->playback_substream);
   FUNC_1(VAR_13);
   VAR_15++;
  }
  if (VAR_13->mode & VAR_8) {
   FUNC_0(VAR_13->capture_substream);
   VAR_15++;
  }
  FUNC_6(&VAR_13->reg_lock);
  if (!VAR_15)
   FUNC_4(VAR_13, VAR_3);
  FUNC_3(VAR_13);
  FUNC_7(&VAR_13->reg_lock);
 }
 if (VAR_14 & VAR_4) {
  VAR_15 = 0;
  if (VAR_13->mode & VAR_9) {
   FUNC_0(VAR_13->playback_substream);
   FUNC_1(VAR_13);
   VAR_15++;
  }
  if (VAR_13->mode & VAR_7) {
   FUNC_0(VAR_13->capture_substream);
   VAR_15++;
  }
  FUNC_6(&VAR_13->reg_lock);
  if (!VAR_15)
   FUNC_4(VAR_13, VAR_2);
  FUNC_2(VAR_13);
  FUNC_7(&VAR_13->reg_lock);
 }
 return VAR_0;
}
