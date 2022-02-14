
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm {int name; scalar_t__ info_flags; int private_free; struct es1968* private_data; } ;
struct TYPE_2__ {int addr; } ;
struct es1968 {struct snd_pcm* pcm; int capture_streams; int playback_streams; int card; TYPE_1__ dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct es1968*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*,int,int ,int ,struct snd_pcm**) ;
 int FUNC_2 (struct snd_pcm*,int ,int *) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct es1968*,int,int) ;

__attribute__((used)) static int
FUNC_5(struct es1968 *VAR_5, int VAR_6)
{
 struct snd_pcm *VAR_7;
 int VAR_8;


 if ((VAR_8 = FUNC_0(VAR_5)) < 0)
  return VAR_8;


 FUNC_4(VAR_5, 0x01FC, VAR_5->dma.addr >> 12);
 FUNC_4(VAR_5, 0x01FD, VAR_5->dma.addr >> 12);
 FUNC_4(VAR_5, 0x01FE, VAR_5->dma.addr >> 12);
 FUNC_4(VAR_5, 0x01FF, VAR_5->dma.addr >> 12);

 if ((VAR_8 = FUNC_1(VAR_5->card, "ESS Maestro", VAR_6,
          VAR_5->playback_streams,
          VAR_5->capture_streams, &VAR_7)) < 0)
  return VAR_8;

 VAR_7->private_data = VAR_5;
 VAR_7->private_free = VAR_3;

 FUNC_2(VAR_7, VAR_1, &VAR_4);
 FUNC_2(VAR_7, VAR_0, &VAR_2);

 VAR_7->info_flags = 0;

 FUNC_3(VAR_7->name, "ESS Maestro");

 VAR_5->pcm = VAR_7;

 return 0;
}
