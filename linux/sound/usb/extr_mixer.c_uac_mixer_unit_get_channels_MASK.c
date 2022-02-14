
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uac_mixer_unit_descriptor {int bNrInPins; int bLength; } ;
struct mixer_build {TYPE_1__* mixer; } ;
struct TYPE_2__ {int protocol; } ;





 int FUNC_0 (struct mixer_build*,int ) ;
 int FUNC_1 (struct uac_mixer_unit_descriptor*) ;
 int FUNC_2 (struct uac_mixer_unit_descriptor*) ;

__attribute__((used)) static int FUNC_3(struct mixer_build *VAR_0,
           struct uac_mixer_unit_descriptor *VAR_1)
{
 int VAR_2;

 switch (VAR_0->mixer->protocol) {
 case 130:
 case 129:
 default:
  if (VAR_1->bLength < sizeof(*VAR_1) + VAR_1->bNrInPins + 1)
   return 0;
  VAR_2 = FUNC_2(VAR_1);
  break;
 case 128:
  VAR_2 = FUNC_0(VAR_0,
    FUNC_1(VAR_1));
  break;
 }

 return VAR_2;
}
