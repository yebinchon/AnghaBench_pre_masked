
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* free ) (struct hda_codec*) ;} ;
struct hda_codec {TYPE_1__ patch_ops; } ;


 int FUNC_0 (struct hda_codec*) ;

__attribute__((used)) static void FUNC_1(struct hda_codec *VAR_0)
{
 VAR_0->patch_ops.free(VAR_0);
}
