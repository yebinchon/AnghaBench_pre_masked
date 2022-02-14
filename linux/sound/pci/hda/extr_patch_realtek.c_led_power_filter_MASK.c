
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct alc_spec* spec; } ;
struct alc_spec {scalar_t__ mute_led_nid; scalar_t__ cap_mute_led_nid; } ;
typedef scalar_t__ hda_nid_t ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct hda_codec*,scalar_t__) ;
 unsigned int FUNC_1 (struct hda_codec*,scalar_t__,unsigned int) ;
 int FUNC_2 (struct hda_codec*,scalar_t__,int ) ;

__attribute__((used)) static unsigned int FUNC_3(struct hda_codec *VAR_1,
        hda_nid_t VAR_2,
        unsigned int VAR_3)
{
 struct alc_spec *VAR_4 = VAR_1->spec;

 if (VAR_3 != VAR_0 || VAR_2 == 0 ||
     (VAR_2 != VAR_4->mute_led_nid && VAR_2 != VAR_4->cap_mute_led_nid))
  return VAR_3;


 FUNC_2(VAR_1, VAR_2,
       FUNC_0(VAR_1, VAR_2));

 return FUNC_1(VAR_1, VAR_2, VAR_3);
}
