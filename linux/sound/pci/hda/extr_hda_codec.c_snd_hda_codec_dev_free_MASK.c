
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_device {struct hda_codec* device_data; } ;
struct TYPE_2__ {scalar_t__ type; } ;
struct hda_codec {int in_freeing; TYPE_1__ core; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct hda_codec*,int) ;
 int FUNC_1 (struct hda_codec*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(struct snd_device *VAR_1)
{
 struct hda_codec *VAR_2 = VAR_1->device_data;

 VAR_2->in_freeing = 1;





 if (VAR_2->core.type == VAR_0)
  FUNC_3(&VAR_2->core);
 FUNC_0(VAR_2, 0);





 if (VAR_2->core.type == VAR_0)
  FUNC_2(FUNC_1(VAR_2));

 return 0;
}
