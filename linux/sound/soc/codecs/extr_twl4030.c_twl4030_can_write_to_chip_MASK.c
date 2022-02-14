
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twl4030_priv {int hsr_enabled; int hsl_enabled; int carkitr_enabled; int carkitl_enabled; int predriver_enabled; int predrivel_enabled; int earpiece_enabled; } ;
__attribute__((used)) static bool FUNC_0(struct twl4030_priv *VAR_0,
          unsigned int VAR_1)
{
 bool VAR_2 = 0;


 switch (VAR_1) {
 case 133:
  if (VAR_0->earpiece_enabled)
   VAR_2 = 1;
  break;
 case 129:
  if (VAR_0->predrivel_enabled)
   VAR_2 = 1;
  break;
 case 128:
  if (VAR_0->predriver_enabled)
   VAR_2 = 1;
  break;
 case 131:
  if (VAR_0->carkitl_enabled)
   VAR_2 = 1;
  break;
 case 130:
  if (VAR_0->carkitr_enabled)
   VAR_2 = 1;
  break;
 case 132:
  if (VAR_0->hsl_enabled || VAR_0->hsr_enabled)
   VAR_2 = 1;
  break;
 default:

  VAR_2 = 1;
  break;
 }

 return VAR_2;
}
