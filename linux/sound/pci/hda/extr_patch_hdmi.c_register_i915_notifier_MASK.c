
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hdmi_spec {int use_acomp_notifier; int drm_audio_ops; int port2pin; } ;
struct hda_codec {int relaxed_resume; TYPE_1__* bus; struct hdmi_spec* spec; } ;
struct TYPE_2__ {int core; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hda_codec*,int *) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void FUNC_2(struct hda_codec *VAR_2)
{
 struct hdmi_spec *VAR_3 = VAR_2->spec;

 VAR_3->use_acomp_notifier = 1;
 VAR_3->port2pin = VAR_1;
 FUNC_0(VAR_2, &VAR_0);
 FUNC_1(&VAR_2->bus->core,
     &VAR_3->drm_audio_ops);

 VAR_2->relaxed_resume = 1;
}
