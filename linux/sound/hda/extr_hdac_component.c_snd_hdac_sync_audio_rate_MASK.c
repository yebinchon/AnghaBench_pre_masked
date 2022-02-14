
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
struct TYPE_4__ {int (* sync_audio_rate ) (int ,int,int,int) ;} ;
struct TYPE_3__ {int (* pin2port ) (struct hdac_device*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hdac_device*,int) ;
 int FUNC_1 (int ,int,int,int) ;

int FUNC_2(struct hdac_device *VAR_2, hda_nid_t VAR_3,
        int VAR_4, int VAR_5)
{
 struct hdac_bus *VAR_6 = VAR_2->bus;
 struct drm_audio_component *VAR_7 = VAR_6->audio_component;
 int VAR_8, VAR_9;

 if (!VAR_7 || !VAR_7->ops || !VAR_7->ops->sync_audio_rate)
  return -VAR_1;
 VAR_8 = VAR_3;
 if (VAR_7->audio_ops && VAR_7->audio_ops->pin2port) {
  VAR_8 = VAR_7->audio_ops->pin2port(VAR_2, VAR_3);
  if (VAR_8 < 0)
   return -VAR_0;
 }
 VAR_9 = VAR_4;
 return VAR_7->ops->sync_audio_rate(VAR_7->dev, VAR_8, VAR_9, VAR_5);
}
