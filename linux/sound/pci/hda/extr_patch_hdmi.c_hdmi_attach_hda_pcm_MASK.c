
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi_spec_per_pin {int pcm_idx; int pcm; } ;
struct hdmi_spec {int pcm_bitmap; } ;


 int VAR_0 ;
 int FUNC_0 (struct hdmi_spec*,int) ;
 int FUNC_1 (struct hdmi_spec*,struct hdmi_spec_per_pin*) ;
 int FUNC_2 (int,int *) ;

__attribute__((used)) static void FUNC_3(struct hdmi_spec *VAR_1,
    struct hdmi_spec_per_pin *VAR_2)
{
 int VAR_3;


 if (VAR_2->pcm)
  return;
 VAR_3 = FUNC_1(VAR_1, VAR_2);
 if (VAR_3 == -VAR_0)
  return;
 VAR_2->pcm_idx = VAR_3;
 VAR_2->pcm = FUNC_0(VAR_1, VAR_3);
 FUNC_2(VAR_3, &VAR_1->pcm_bitmap);
}
