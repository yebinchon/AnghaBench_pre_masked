
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ afg; } ;
struct hda_codec {TYPE_1__ core; struct alc_spec* spec; } ;
struct alc_spec {scalar_t__ gpio_data; } ;
typedef scalar_t__ hda_nid_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;

__attribute__((used)) static unsigned int FUNC_0(struct hda_codec *VAR_2,
       hda_nid_t VAR_3,
       unsigned int VAR_4)
{
 struct alc_spec *VAR_5 = VAR_2->spec;
 if (VAR_3 == VAR_2->core.afg && VAR_4 == VAR_1 && VAR_5->gpio_data)
  return VAR_0;
 return VAR_4;
}
