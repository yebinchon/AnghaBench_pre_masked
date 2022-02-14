
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm {TYPE_1__* streams; int name; scalar_t__ info_flags; struct snd_ice1712* private_data; } ;
struct snd_ice1712 {scalar_t__ cs8427; struct snd_pcm* pcm_pro; int pci; int card; } ;
struct TYPE_2__ {int substream; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct snd_ice1712*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct snd_pcm*,int ,int ,int,int) ;
 int FUNC_4 (int ,char*,int,int,int,struct snd_pcm**) ;
 int FUNC_5 (struct snd_pcm*,int ,int *) ;
 int FUNC_6 (int ,char*) ;

__attribute__((used)) static int FUNC_7(struct snd_ice1712 *VAR_5, int VAR_6)
{
 struct snd_pcm *VAR_7;
 int VAR_8;

 VAR_8 = FUNC_4(VAR_5->card, "ICE1712 multi", VAR_6, 1, 1, &VAR_7);
 if (VAR_8 < 0)
  return VAR_8;

 FUNC_5(VAR_7, VAR_2, &VAR_4);
 FUNC_5(VAR_7, VAR_1, &VAR_3);

 VAR_7->private_data = VAR_5;
 VAR_7->info_flags = 0;
 FUNC_6(VAR_7->name, "ICE1712 multi");

 FUNC_3(VAR_7, VAR_0,
           FUNC_1(VAR_5->pci), 256*1024, 256*1024);

 VAR_5->pcm_pro = VAR_7;

 if (VAR_5->cs8427) {

  VAR_8 = FUNC_0(VAR_5->cs8427,
           VAR_7->streams[0].substream,
           VAR_7->streams[1].substream);
  if (VAR_8 < 0)
   return VAR_8;
 }

 return FUNC_2(VAR_5);
}
