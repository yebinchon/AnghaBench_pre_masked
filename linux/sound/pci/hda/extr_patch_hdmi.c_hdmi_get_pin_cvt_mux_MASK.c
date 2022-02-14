
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi_spec_per_pin {int num_mux_nids; scalar_t__* mux_nids; } ;
struct hdmi_spec {int dummy; } ;
typedef scalar_t__ hda_nid_t ;



__attribute__((used)) static int FUNC_0(struct hdmi_spec *VAR_0,
  struct hdmi_spec_per_pin *VAR_1, hda_nid_t VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->num_mux_nids; VAR_3++)
  if (VAR_1->mux_nids[VAR_3] == VAR_2)
   break;
 return VAR_3;
}
