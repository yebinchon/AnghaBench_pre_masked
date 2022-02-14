
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int chmap_validate; int chmap_cea_alloc_validate_get_type; } ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct hdmi_spec {int dyn_pin_out; TYPE_2__ chmap; } ;
struct hda_codec {int link_down_at_suspend; struct hdmi_spec* spec; } ;


 int FUNC_0 (struct hda_codec*,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct hda_codec*) ;

__attribute__((used)) static int FUNC_2(struct hda_codec *VAR_4)
{
 struct hdmi_spec *VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_4);
 if (VAR_6)
  return VAR_6;

 VAR_5 = VAR_4->spec;
 VAR_5->dyn_pin_out = 1;

 VAR_5->chmap.ops.chmap_cea_alloc_validate_get_type =
  VAR_1;
 VAR_5->chmap.ops.chmap_validate = VAR_2;

 VAR_4->link_down_at_suspend = 1;

 FUNC_0(VAR_4, &VAR_0, VAR_3);

 return 0;
}
