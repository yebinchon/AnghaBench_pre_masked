
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi_spec_per_pin {int pin_nid_idx; } ;
struct hdmi_spec {int num_nids; int pcm_used; int pcm_bitmap; } ;


 int VAR_0 ;
 int FUNC_0 (int,int *) ;

__attribute__((used)) static int FUNC_1(struct hdmi_spec *VAR_1,
    struct hdmi_spec_per_pin *VAR_2)
{
 int VAR_3;


 if (!FUNC_0(VAR_2->pin_nid_idx, &VAR_1->pcm_bitmap))
  return VAR_2->pin_nid_idx;


 for (VAR_3 = VAR_1->num_nids; VAR_3 < VAR_1->pcm_used; VAR_3++) {
  if (!FUNC_0(VAR_3, &VAR_1->pcm_bitmap))
   return VAR_3;
 }


 for (VAR_3 = 0; VAR_3 < VAR_1->num_nids; VAR_3++) {
  if (!FUNC_0(VAR_3, &VAR_1->pcm_bitmap))
   return VAR_3;
 }
 return -VAR_0;
}
