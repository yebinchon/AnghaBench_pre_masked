
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct hdac_bus {int dev; struct drm_audio_component* audio_component; } ;
struct drm_audio_component {int dev; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* get_cdclk_freq ) (int ) ;} ;


 int FUNC_0 (struct pci_dev*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct hdac_bus*,int ,unsigned int) ;
 int FUNC_2 (int ) ;
 struct pci_dev* FUNC_3 (int ) ;

void FUNC_4(struct hdac_bus *VAR_2)
{
 struct drm_audio_component *VAR_3 = VAR_2->audio_component;
 struct pci_dev *VAR_4 = FUNC_3(VAR_2->dev);
 int VAR_5;
 unsigned int VAR_6, VAR_7;

 if (!VAR_3 || !VAR_3->ops || !VAR_3->ops->get_cdclk_freq)
  return;
 if (!FUNC_0(VAR_4))
  return;

 VAR_5 = VAR_3->ops->get_cdclk_freq(VAR_3->dev);
 switch (VAR_5) {
 case 337500:
  VAR_6 = 16;
  VAR_7 = 225;
  break;

 case 450000:
 default:
  VAR_6 = 4;
  VAR_7 = 75;
  break;

 case 540000:
  VAR_6 = 4;
  VAR_7 = 90;
  break;

 case 675000:
  VAR_6 = 8;
  VAR_7 = 225;
  break;
 }

 FUNC_1(VAR_2, VAR_0, VAR_6);
 FUNC_1(VAR_2, VAR_1, VAR_7);
}
