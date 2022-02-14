
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int build_pcms; } ;
struct hda_codec {TYPE_1__ patch_ops; } ;


 int FUNC_0 (struct hda_codec*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct hda_codec *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2)
  return VAR_2;

 VAR_1->patch_ops.build_pcms = VAR_0;

 return 0;
}
