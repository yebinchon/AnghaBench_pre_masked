
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int unit; float value; } ;
typedef TYPE_1__ fz_css_number ;
float
FUNC_0(fz_css_number VAR_0, float VAR_1)
{
 switch (VAR_0.unit) {
 default:
 case 130: return VAR_0.value * VAR_1;
 case 131: return VAR_0.value;
 case 128: return VAR_0.value * VAR_1;
 case 129: return VAR_0.value * 0.01f * VAR_1;
 case 132: return VAR_1;
 }
}
