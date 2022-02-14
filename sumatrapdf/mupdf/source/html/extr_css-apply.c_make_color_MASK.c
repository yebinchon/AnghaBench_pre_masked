
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int r; int g; int b; int a; } ;
typedef TYPE_1__ fz_css_color ;



__attribute__((used)) static fz_css_color
FUNC_0(int VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
 fz_css_color VAR_4;
 VAR_4.r = VAR_0 < 0 ? 0 : VAR_0 > 255 ? 255 : VAR_0;
 VAR_4.g = VAR_1 < 0 ? 0 : VAR_1 > 255 ? 255 : VAR_1;
 VAR_4.b = VAR_2 < 0 ? 0 : VAR_2 > 255 ? 255 : VAR_2;
 VAR_4.a = VAR_3 < 0 ? 0 : VAR_3 > 255 ? 255 : VAR_3;
 return VAR_4;
}
