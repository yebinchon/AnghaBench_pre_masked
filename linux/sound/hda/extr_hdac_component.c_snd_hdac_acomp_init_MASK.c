
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdac_bus {struct drm_audio_component* audio_component; struct device* dev; } ;
struct drm_audio_component_audio_ops {int dummy; } ;
struct drm_audio_component {struct drm_audio_component_audio_ops const* audio_ops; } ;
struct device {int dummy; } ;
struct component_match {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct device*,int *,struct component_match*) ;
 int FUNC_2 (struct device*,struct component_match**,int (*) (struct device*,int,void*),struct hdac_bus*) ;
 int FUNC_3 (struct device*,char*,int) ;
 int FUNC_4 (struct device*,struct drm_audio_component*) ;
 struct drm_audio_component* FUNC_5 (int ,int,int ) ;
 int FUNC_6 (struct device*,int ,int *,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (struct device*) ;

int FUNC_8(struct hdac_bus *VAR_5,
   const struct drm_audio_component_audio_ops *VAR_6,
   int (*VAR_7)(struct device *, int, void *),
   size_t VAR_8)
{
 struct component_match *VAR_9 = ((void*)0);
 struct device *VAR_10 = VAR_5->dev;
 struct drm_audio_component *VAR_11;
 int VAR_12;

 if (FUNC_0(FUNC_7(VAR_10)))
  return -VAR_0;

 VAR_11 = FUNC_5(VAR_3, sizeof(*VAR_11) + VAR_8,
        VAR_2);
 if (!VAR_11)
  return -VAR_1;
 VAR_11->audio_ops = VAR_6;
 VAR_5->audio_component = VAR_11;
 FUNC_4(VAR_10, VAR_11);

 FUNC_2(VAR_10, &VAR_9, VAR_7, VAR_5);
 VAR_12 = FUNC_1(VAR_10, &VAR_4,
           VAR_9);
 if (VAR_12 < 0)
  goto out_err;

 return 0;

out_err:
 VAR_5->audio_component = ((void*)0);
 FUNC_6(VAR_10, VAR_3, ((void*)0), ((void*)0));
 FUNC_3(VAR_10, "failed to add audio component master (%d)\n", VAR_12);

 return VAR_12;
}
