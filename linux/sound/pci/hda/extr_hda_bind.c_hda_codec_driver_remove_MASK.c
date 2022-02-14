
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int (* free ) (struct hda_codec*) ;} ;
struct hda_codec {TYPE_1__ patch_ops; int core; TYPE_5__* bus; } ;
struct device {TYPE_2__* driver; } ;
struct TYPE_8__ {TYPE_4__* ext_ops; } ;
struct TYPE_10__ {TYPE_3__ core; } ;
struct TYPE_9__ {int (* hdev_detach ) (int *) ;} ;
struct TYPE_7__ {int owner; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 struct hda_codec* FUNC_1 (struct device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct hda_codec*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct hda_codec*) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_1)
{
 struct hda_codec *VAR_2 = FUNC_1(VAR_1);

 if (VAR_2->bus->core.ext_ops) {
  if (FUNC_0(!VAR_2->bus->core.ext_ops->hdev_detach))
   return -VAR_0;
  return VAR_2->bus->core.ext_ops->hdev_detach(&VAR_2->core);
 }

 if (VAR_2->patch_ops.free)
  VAR_2->patch_ops.free(VAR_2);
 FUNC_3(VAR_2);
 FUNC_2(VAR_1->driver->owner);
 return 0;
}
