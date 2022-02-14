
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_jack_callback {int dummy; } ;
struct hda_codec {struct alc_spec* spec; } ;
struct TYPE_2__ {scalar_t__ hp_jack_present; } ;
struct alc_spec {TYPE_1__ gen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct hda_codec*,int,int ,int ,int) ;
 int FUNC_2 (struct hda_codec*,struct hda_jack_callback*) ;

__attribute__((used)) static void FUNC_3(struct hda_codec *VAR_2,
        struct hda_jack_callback *VAR_3)
{
 struct alc_spec *VAR_4 = VAR_2->spec;
 int VAR_5;

 FUNC_0(200);
 FUNC_2(VAR_2, VAR_3);

 VAR_5 = VAR_4->gen.hp_jack_present ? VAR_1 : 0;

 FUNC_0(600);
 FUNC_1(VAR_2, 0x19, 0, VAR_0,
       VAR_5);
}
