
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__* gamma; scalar_t__ brightness; scalar_t__ temperature; } ;
typedef TYPE_1__ color_setting_t ;


 int FUNC_0 (scalar_t__) ;
 double FUNC_1 (scalar_t__) ;

__attribute__((used)) static int
FUNC_2(
 const color_setting_t *VAR_0,
 const color_setting_t *VAR_1)
{
 return (FUNC_0(VAR_0->temperature - VAR_1->temperature) > 25 ||
  FUNC_1(VAR_0->brightness - VAR_1->brightness) > 0.1 ||
  FUNC_1(VAR_0->gamma[0] - VAR_1->gamma[0]) > 0.1 ||
  FUNC_1(VAR_0->gamma[1] - VAR_1->gamma[1]) > 0.1 ||
  FUNC_1(VAR_0->gamma[2] - VAR_1->gamma[2]) > 0.1);
}
