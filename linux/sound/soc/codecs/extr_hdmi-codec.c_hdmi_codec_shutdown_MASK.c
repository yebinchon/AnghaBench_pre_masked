
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_soc_dai {TYPE_2__* dev; } ;
struct snd_pcm_substream {int dummy; } ;
struct TYPE_6__ {int data; TYPE_1__* ops; } ;
struct hdmi_codec_priv {int busy; TYPE_3__ hcd; int chmap_idx; } ;
struct TYPE_5__ {int parent; } ;
struct TYPE_4__ {int (* audio_shutdown ) (int ,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 struct hdmi_codec_priv* FUNC_1 (struct snd_soc_dai*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct snd_pcm_substream *VAR_1,
    struct snd_soc_dai *VAR_2)
{
 struct hdmi_codec_priv *VAR_3 = FUNC_1(VAR_2);

 VAR_3->chmap_idx = VAR_0;
 VAR_3->hcd.ops->audio_shutdown(VAR_2->dev->parent, VAR_3->hcd.data);

 FUNC_0(0, &VAR_3->busy);
}
