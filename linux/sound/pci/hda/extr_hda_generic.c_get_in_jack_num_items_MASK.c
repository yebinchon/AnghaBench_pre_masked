
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_gen_spec {scalar_t__ add_jack_modes; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;
typedef int hda_nid_t ;


 int FUNC_0 (struct hda_codec*,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct hda_codec *VAR_0, hda_nid_t VAR_1)
{
 struct hda_gen_spec *VAR_2 = VAR_0->spec;
 int VAR_3 = 0;
 if (VAR_2->add_jack_modes)
  VAR_3 = FUNC_1(FUNC_0(VAR_0, VAR_1));
 return VAR_3 ? VAR_3 : 1;
}
