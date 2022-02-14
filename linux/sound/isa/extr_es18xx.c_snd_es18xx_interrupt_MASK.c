
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct snd_es18xx {int caps; int active; TYPE_5__* master_volume; TYPE_4__* master_switch; TYPE_3__* hw_volume; TYPE_2__* hw_switch; TYPE_1__* rmidi; scalar_t__ port; int playback_b_substream; int capture_a_substream; int playback_a_substream; scalar_t__ ctrl_port; } ;
struct snd_card {struct snd_es18xx* private_data; } ;
typedef int irqreturn_t ;
struct TYPE_10__ {int id; } ;
struct TYPE_9__ {int id; } ;
struct TYPE_8__ {int id; } ;
struct TYPE_7__ {int id; } ;
struct TYPE_6__ {int private_data; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned char VAR_7 ;
 int VAR_8 ;
 unsigned char VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct snd_card*,int ,int *) ;
 int FUNC_2 (struct snd_es18xx*,int,int,int) ;
 int FUNC_3 (struct snd_es18xx*,int) ;
 int FUNC_4 (struct snd_es18xx*,int,int) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_11, void *VAR_12)
{
 struct snd_card *VAR_13 = VAR_12;
 struct snd_es18xx *VAR_14 = VAR_13->private_data;
 unsigned char VAR_15;

 if (VAR_14->caps & VAR_5) {

  VAR_15 = FUNC_0(VAR_14->ctrl_port + 6);
 } else {

  VAR_15 = FUNC_3(VAR_14, 0x7f) >> 4;
 }
        if (VAR_15 & VAR_2) {
                if (VAR_14->active & VAR_4)
                 FUNC_6(VAR_14->playback_a_substream);

                FUNC_2(VAR_14, 0x7A, 0x80, 0x00);
        }
        if (VAR_15 & VAR_1) {

                if (VAR_14->active & VAR_0)
                 FUNC_6(VAR_14->capture_a_substream);

                else if (VAR_14->active & VAR_3)
                 FUNC_6(VAR_14->playback_b_substream);

  FUNC_0(VAR_14->port + 0x0E);
        }


 if ((VAR_15 & VAR_9) && VAR_14->rmidi)
  FUNC_5(VAR_11, VAR_14->rmidi->private_data);


 if (VAR_15 & VAR_7) {
  int VAR_16 = 0;
  if (VAR_14->caps & VAR_6) {
   VAR_16 = FUNC_3(VAR_14, 0x64) & 0x80;
   FUNC_1(VAR_13, VAR_10,
     &VAR_14->hw_switch->id);
   FUNC_1(VAR_13, VAR_10,
     &VAR_14->hw_volume->id);
  }
  if (!VAR_16) {
   FUNC_1(VAR_13, VAR_10,
     &VAR_14->master_switch->id);
   FUNC_1(VAR_13, VAR_10,
     &VAR_14->master_volume->id);
  }

  FUNC_4(VAR_14, 0x66, 0x00);
 }
 return VAR_8;
}
