
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_gen_spec {scalar_t__ add_jack_modes; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;
typedef int hda_nid_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (struct hda_codec*,int ) ;

__attribute__((used)) static int FUNC_1(struct hda_codec *VAR_2, hda_nid_t VAR_3)
{
 struct hda_gen_spec *VAR_4 = VAR_2->spec;
 if (VAR_4->add_jack_modes) {
  unsigned int VAR_5 = FUNC_0(VAR_2, VAR_3);
  if ((VAR_5 & VAR_1) && (VAR_5 & VAR_0))
   return 2;
 }
 return 1;
}
