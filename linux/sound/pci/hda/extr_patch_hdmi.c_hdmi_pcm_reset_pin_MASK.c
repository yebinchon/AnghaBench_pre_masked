
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi_spec_per_pin {scalar_t__ pcm_idx; int chmap_set; int setup; scalar_t__ channels; int chmap; int codec; } ;
struct hdmi_spec {scalar_t__ pcm_used; } ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct hdmi_spec *VAR_0,
      struct hdmi_spec_per_pin *VAR_1)
{
 if (VAR_1->pcm_idx >= 0 && VAR_1->pcm_idx < VAR_0->pcm_used)
  FUNC_1(VAR_1->codec, VAR_1->pcm_idx);

 VAR_1->chmap_set = 0;
 FUNC_0(VAR_1->chmap, 0, sizeof(VAR_1->chmap));

 VAR_1->setup = 0;
 VAR_1->channels = 0;
}
