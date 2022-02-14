
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_soc_dai {TYPE_2__* dev; } ;
struct TYPE_6__ {int data; TYPE_1__* ops; } ;
struct hdmi_codec_priv {TYPE_3__ hcd; } ;
struct TYPE_5__ {int parent; } ;
struct TYPE_4__ {int (* digital_mute ) (int ,int ,int) ;} ;


 struct hdmi_codec_priv* FUNC_0 (struct snd_soc_dai*) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_0, int VAR_1)
{
 struct hdmi_codec_priv *VAR_2 = FUNC_0(VAR_0);

 if (VAR_2->hcd.ops->digital_mute)
  return VAR_2->hcd.ops->digital_mute(VAR_0->dev->parent,
        VAR_2->hcd.data, VAR_1);

 return 0;
}
