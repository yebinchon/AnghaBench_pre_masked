
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct cs35l33_pdata {int boost_ctl; int amp_drv_sel; int ramp_rate; int boost_ipk; int imon_adc_scale; } ;
struct cs35l33_private {int enable_soft_ramp; struct cs35l33_pdata pdata; } ;


 int FUNC_0 (struct device_node*,struct cs35l33_pdata*) ;
 scalar_t__ FUNC_1 (struct device_node*,char*,int*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0,
    struct cs35l33_private *VAR_1)
{
 struct device_node *VAR_2 = VAR_0->of_node;
 struct cs35l33_pdata *VAR_3 = &VAR_1->pdata;
 u32 VAR_4;

 if (!VAR_2)
  return 0;

 if (FUNC_1(VAR_2, "cirrus,boost-ctl", &VAR_4) >= 0) {
  VAR_3->boost_ctl = VAR_4;
  VAR_3->amp_drv_sel = 1;
 }

 if (FUNC_1(VAR_2, "cirrus,ramp-rate", &VAR_4) >= 0) {
  VAR_3->ramp_rate = VAR_4;
  VAR_1->enable_soft_ramp = 1;
 }

 if (FUNC_1(VAR_2, "cirrus,boost-ipk", &VAR_4) >= 0)
  VAR_3->boost_ipk = VAR_4;

 if (FUNC_1(VAR_2, "cirrus,imon-adc-scale", &VAR_4) >= 0) {
  if ((VAR_4 == 0x0) || (VAR_4 == 0x7) || (VAR_4 == 0x6))
   VAR_3->imon_adc_scale = VAR_4;
  else

   VAR_3->imon_adc_scale = 0x8;
 } else {

  VAR_3->imon_adc_scale = 0x8;
 }

 FUNC_0(VAR_2, VAR_3);

 return 0;
}
