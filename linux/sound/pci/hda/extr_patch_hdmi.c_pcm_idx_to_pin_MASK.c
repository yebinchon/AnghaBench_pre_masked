
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi_spec_per_pin {int pcm_idx; } ;
struct hdmi_spec {int num_pins; } ;


 struct hdmi_spec_per_pin* FUNC_0 (struct hdmi_spec*,int) ;

__attribute__((used)) static struct hdmi_spec_per_pin *FUNC_1(struct hdmi_spec *VAR_0,
      int VAR_1)
{
 int VAR_2;
 struct hdmi_spec_per_pin *VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_0->num_pins; VAR_2++) {
  VAR_3 = FUNC_0(VAR_0, VAR_2);
  if (VAR_3->pcm_idx == VAR_1)
   return VAR_3;
 }
 return ((void*)0);
}
