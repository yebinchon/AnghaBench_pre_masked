
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct TYPE_2__ {struct device_node* of_node; } ;
struct i2c_client {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;
struct cs42l56_platform_data {int ain1a_ref_cfg; int ain2a_ref_cfg; int ain1b_ref_cfg; int ain2b_ref_cfg; int gpio_nreset; void* hpfb_freq; void* hpfa_freq; void* adaptive_pwr; void* chgfreq; void* micbias_lvl; } ;


 int FUNC_0 (struct device_node*,char*,int ) ;
 scalar_t__ FUNC_1 (struct device_node*,char*) ;
 scalar_t__ FUNC_2 (struct device_node*,char*,void**) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_0,
        struct cs42l56_platform_data *VAR_1)
{
 struct device_node *VAR_2 = VAR_0->dev.of_node;
 u32 VAR_3;

 if (FUNC_1(VAR_2, "cirrus,ain1a-reference-cfg"))
  VAR_1->ain1a_ref_cfg = 1;

 if (FUNC_1(VAR_2, "cirrus,ain2a-reference-cfg"))
  VAR_1->ain2a_ref_cfg = 1;

 if (FUNC_1(VAR_2, "cirrus,ain1b-reference-cfg"))
  VAR_1->ain1b_ref_cfg = 1;

 if (FUNC_1(VAR_2, "cirrus,ain2b-reference-cfg"))
  VAR_1->ain2b_ref_cfg = 1;

 if (FUNC_2(VAR_2, "cirrus,micbias-lvl", &VAR_3) >= 0)
  VAR_1->micbias_lvl = VAR_3;

 if (FUNC_2(VAR_2, "cirrus,chgfreq-divisor", &VAR_3) >= 0)
  VAR_1->chgfreq = VAR_3;

 if (FUNC_2(VAR_2, "cirrus,adaptive-pwr-cfg", &VAR_3) >= 0)
  VAR_1->adaptive_pwr = VAR_3;

 if (FUNC_2(VAR_2, "cirrus,hpf-left-freq", &VAR_3) >= 0)
  VAR_1->hpfa_freq = VAR_3;

 if (FUNC_2(VAR_2, "cirrus,hpf-left-freq", &VAR_3) >= 0)
  VAR_1->hpfb_freq = VAR_3;

 VAR_1->gpio_nreset = FUNC_0(VAR_2, "cirrus,gpio-nreset", 0);

 return 0;
}
