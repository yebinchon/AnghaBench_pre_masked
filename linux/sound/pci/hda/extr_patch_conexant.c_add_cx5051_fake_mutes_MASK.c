
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_codec {struct conexant_spec* spec; } ;
struct TYPE_2__ {int dac_min_mute; } ;
struct conexant_spec {TYPE_1__ gen; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hda_codec*,int,int ) ;
 int FUNC_1 (struct hda_codec*,int,int ,int) ;

__attribute__((used)) static void FUNC_2(struct hda_codec *VAR_2)
{
 struct conexant_spec *VAR_3 = VAR_2->spec;
 static hda_nid_t VAR_4[] = {
  0x10, 0x11, 0
 };
 hda_nid_t *VAR_5;

 for (VAR_5 = VAR_4; *VAR_5; VAR_5++)
  FUNC_1(VAR_2, *VAR_5, VAR_1,
       VAR_0 |
       FUNC_0(VAR_2, *VAR_5, VAR_1));
 VAR_3->gen.dac_min_mute = 1;
}
