
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {double temperature; double brightness; double* gamma; } ;
typedef TYPE_1__ color_setting_t ;


 double FUNC_0 (double,double,double) ;

__attribute__((used)) static void
FUNC_1(
 const color_setting_t *VAR_0,
 const color_setting_t *VAR_1,
 double VAR_2,
 color_setting_t *VAR_3)
{
 VAR_2 = FUNC_0(0.0, VAR_2, 1.0);

 VAR_3->temperature = (1.0-VAR_2)*VAR_0->temperature +
  VAR_2*VAR_1->temperature;
 VAR_3->brightness = (1.0-VAR_2)*VAR_0->brightness +
  VAR_2*VAR_1->brightness;
 for (int VAR_4 = 0; VAR_4 < 3; VAR_4++) {
  VAR_3->gamma[VAR_4] = (1.0-VAR_2)*VAR_0->gamma[VAR_4] +
   VAR_2*VAR_1->gamma[VAR_4];
 }
}
