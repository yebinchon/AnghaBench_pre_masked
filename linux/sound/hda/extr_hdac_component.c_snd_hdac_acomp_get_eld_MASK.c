
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hdac_device {struct hdac_bus* bus; } ;
struct hdac_bus {struct drm_audio_component* audio_component; } ;
struct drm_audio_component {int dev; TYPE_2__* ops; TYPE_1__* audio_ops; } ;
typedef int hda_nid_t ;
struct TYPE_4__ {int (* get_eld ) (int ,int,int,int*,char*,int) ;} ;
struct TYPE_3__ {int (* pin2port ) (struct hdac_device*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hdac_device*,int) ;
 int FUNC_1 (int ,int,int,int*,char*,int) ;

int FUNC_2(struct hdac_device *VAR_2, hda_nid_t VAR_3, int VAR_4,
      bool *VAR_5, char *VAR_6, int VAR_7)
{
 struct hdac_bus *VAR_8 = VAR_2->bus;
 struct drm_audio_component *VAR_9 = VAR_8->audio_component;
 int VAR_10, VAR_11;

 if (!VAR_9 || !VAR_9->ops || !VAR_9->ops->get_eld)
  return -VAR_1;

 VAR_10 = VAR_3;
 if (VAR_9->audio_ops && VAR_9->audio_ops->pin2port) {
  VAR_10 = VAR_9->audio_ops->pin2port(VAR_2, VAR_3);
  if (VAR_10 < 0)
   return -VAR_0;
 }
 VAR_11 = VAR_4;
 return VAR_9->ops->get_eld(VAR_9->dev, VAR_10, VAR_11, VAR_5,
       VAR_6, VAR_7);
}
