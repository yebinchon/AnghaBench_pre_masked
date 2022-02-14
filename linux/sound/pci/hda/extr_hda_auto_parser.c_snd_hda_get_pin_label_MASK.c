
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_codec {int dummy; } ;
struct auto_pin_cfg {int dig_outs; int num_inputs; TYPE_1__* inputs; int * dig_out_pins; } ;
typedef int hda_nid_t ;
struct TYPE_2__ {int pin; } ;





 scalar_t__ VAR_0 ;


 int FUNC_0 (struct hda_codec*,int ,struct auto_pin_cfg const*,char*,char*,int,int*) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 char* FUNC_3 (struct hda_codec*,struct auto_pin_cfg const*,int) ;
 char* FUNC_4 (struct hda_codec*,int *,int ,int) ;
 int FUNC_5 (unsigned int) ;
 unsigned int FUNC_6 (struct hda_codec*,int ) ;
 int FUNC_7 (char*,char const*,int) ;

int FUNC_8(struct hda_codec *VAR_1, hda_nid_t VAR_2,
     const struct auto_pin_cfg *VAR_3,
     char *VAR_4, int VAR_5, int *VAR_6)
{
 unsigned int VAR_7 = FUNC_6(VAR_1, VAR_2);
 const char *VAR_8 = ((void*)0);
 int VAR_9;
 bool VAR_10;

 if (VAR_6)
  *VAR_6 = 0;
 if (FUNC_1(VAR_7) == VAR_0)
  return 0;

 switch (FUNC_2(VAR_7)) {
 case 130:
  return FUNC_0(VAR_1, VAR_2, VAR_3, "Line Out",
        VAR_4, VAR_5, VAR_6);
 case 128:
  return FUNC_0(VAR_1, VAR_2, VAR_3, "Speaker",
        VAR_4, VAR_5, VAR_6);
 case 131:
  return FUNC_0(VAR_1, VAR_2, VAR_3, "Headphone",
        VAR_4, VAR_5, VAR_6);
 case 129:
 case 132:
  VAR_10 = FUNC_5(VAR_7);
  VAR_8 = VAR_10 ? "HDMI" : "SPDIF";
  if (VAR_3 && VAR_6)
   for (VAR_9 = 0; VAR_9 < VAR_3->dig_outs; VAR_9++) {
    hda_nid_t VAR_11 = VAR_3->dig_out_pins[VAR_9];
    unsigned int VAR_12;
    if (VAR_11 == VAR_2)
     break;
    VAR_12 = FUNC_6(VAR_1, VAR_11);
    if (VAR_10 == FUNC_5(VAR_12))
     (*VAR_6)++;
   }
  break;
 default:
  if (VAR_3) {
   for (VAR_9 = 0; VAR_9 < VAR_3->num_inputs; VAR_9++) {
    if (VAR_3->inputs[VAR_9].pin != VAR_2)
     continue;
    VAR_8 = FUNC_3(VAR_1, VAR_3, VAR_9);
    if (VAR_8)
     break;
   }
  }
  if (!VAR_8)
   VAR_8 = FUNC_4(VAR_1, ((void*)0), VAR_2, 1);
  break;
 }
 if (!VAR_8)
  return 0;
 FUNC_7(VAR_4, VAR_8, VAR_5);
 return 1;
}
