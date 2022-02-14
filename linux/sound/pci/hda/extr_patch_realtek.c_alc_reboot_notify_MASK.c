
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct alc_spec* spec; } ;
struct alc_spec {int (* reboot_notify ) (struct hda_codec*) ;} ;


 int FUNC_0 (struct hda_codec*) ;
 int FUNC_1 (struct hda_codec*) ;

__attribute__((used)) static void FUNC_2(struct hda_codec *VAR_0)
{
 struct alc_spec *VAR_1 = VAR_0->spec;

 if (VAR_1 && VAR_1->reboot_notify)
  VAR_1->reboot_notify(VAR_0);
 else
  FUNC_0(VAR_0);
}
