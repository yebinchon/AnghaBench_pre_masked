
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct viadev {int reg_offset; } ;
struct via82xx {size_t playback_devno; TYPE_2__** dxs_controls; int card; void*** playback_volume; struct viadev* devs; } ;
struct snd_pcm_substream {size_t number; } ;
struct TYPE_4__ {int id; TYPE_1__* vd; } ;
struct TYPE_3__ {int access; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int,int *) ;
 struct via82xx* FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (struct via82xx*,struct viadev*,struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_5)
{
 struct via82xx *VAR_6 = FUNC_1(VAR_5);
 struct viadev *VAR_7;
 unsigned int VAR_8;
 int VAR_9;

 VAR_7 = &VAR_6->devs[VAR_6->playback_devno + VAR_5->number];
 if ((VAR_9 = FUNC_2(VAR_6, VAR_7, VAR_5)) < 0)
  return VAR_9;
 VAR_8 = VAR_7->reg_offset / 0x10;
 if (VAR_6->dxs_controls[VAR_8]) {
  VAR_6->playback_volume[VAR_8][0] =
    VAR_3 - (VAR_4 & 31);
  VAR_6->playback_volume[VAR_8][1] =
    VAR_3 - (VAR_4 & 31);
  VAR_6->dxs_controls[VAR_8]->vd[0].access &=
   ~VAR_0;
  FUNC_0(VAR_6->card, VAR_2 |
          VAR_1,
          &VAR_6->dxs_controls[VAR_8]->id);
 }
 return 0;
}
