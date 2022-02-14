
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* reboot_notify ) (struct hda_codec*) ;} ;
struct hda_codec {TYPE_1__ patch_ops; } ;
struct device {int dummy; } ;


 struct hda_codec* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct hda_codec*) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_0)
{
 struct hda_codec *VAR_1 = FUNC_0(VAR_0);

 if (!FUNC_1(VAR_0) && VAR_1->patch_ops.reboot_notify)
  VAR_1->patch_ops.reboot_notify(VAR_1);
}
