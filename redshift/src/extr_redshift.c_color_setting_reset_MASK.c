
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double* gamma; double brightness; int temperature; } ;
typedef TYPE_1__ color_setting_t ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(color_setting_t *VAR_1)
{
 VAR_1->temperature = VAR_0;
 VAR_1->gamma[0] = 1.0;
 VAR_1->gamma[1] = 1.0;
 VAR_1->gamma[2] = 1.0;
 VAR_1->brightness = 1.0;
}
