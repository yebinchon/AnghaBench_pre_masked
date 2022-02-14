
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twl4030_codec_data {int digimic_delay; int ramp_delay_value; int offset_cncl_path; int hs_extmute; int hs_extmute_gpio; } ;
struct device_node {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct device_node*,char*,int ) ;
 int FUNC_2 (struct device_node*,char*,int*) ;

__attribute__((used)) static void FUNC_3(struct twl4030_codec_data *VAR_0,
       struct device_node *VAR_1)
{
 int VAR_2;

 FUNC_2(VAR_1, "ti,digimic_delay",
        &VAR_0->digimic_delay);
 FUNC_2(VAR_1, "ti,ramp_delay_value",
        &VAR_0->ramp_delay_value);
 FUNC_2(VAR_1, "ti,offset_cncl_path",
        &VAR_0->offset_cncl_path);
 if (!FUNC_2(VAR_1, "ti,hs_extmute", &VAR_2))
  VAR_0->hs_extmute = VAR_2;

 VAR_0->hs_extmute_gpio = FUNC_1(VAR_1,
         "ti,hs_extmute_gpio", 0);
 if (FUNC_0(VAR_0->hs_extmute_gpio))
  VAR_0->hs_extmute = 1;
}
