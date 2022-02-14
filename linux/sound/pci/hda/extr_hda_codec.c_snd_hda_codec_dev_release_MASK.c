
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; } ;
struct hda_codec {TYPE_1__ core; struct hda_codec* wcaps; struct hda_codec* modelname; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct hda_codec* FUNC_0 (struct device*) ;
 int FUNC_1 (struct hda_codec*) ;
 int FUNC_2 (struct hda_codec*) ;
 int FUNC_3 (struct hda_codec*) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_5(struct device *VAR_1)
{
 struct hda_codec *VAR_2 = FUNC_0(VAR_1);

 FUNC_1(VAR_2);
 FUNC_4(&VAR_2->core);
 FUNC_3(VAR_2);
 FUNC_2(VAR_2->modelname);
 FUNC_2(VAR_2->wcaps);





 if (VAR_2->core.type == VAR_0)
  FUNC_2(VAR_2);
}
