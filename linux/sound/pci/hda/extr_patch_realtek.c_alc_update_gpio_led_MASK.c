
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct alc_spec* spec; } ;
struct alc_spec {scalar_t__ mute_led_polarity; } ;


 int FUNC_0 (struct hda_codec*,unsigned int,int) ;

__attribute__((used)) static void FUNC_1(struct hda_codec *VAR_0, unsigned int VAR_1,
    bool VAR_2)
{
 struct alc_spec *VAR_3 = VAR_0->spec;

 if (VAR_3->mute_led_polarity)
  VAR_2 = !VAR_2;
 FUNC_0(VAR_0, VAR_1, !VAR_2);
}
