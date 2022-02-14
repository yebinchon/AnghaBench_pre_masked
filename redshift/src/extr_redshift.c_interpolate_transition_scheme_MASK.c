
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int night; int day; } ;
typedef TYPE_1__ transition_scheme_t ;
typedef int color_setting_t ;


 double FUNC_0 (double,double,double) ;
 int FUNC_1 (int const*,int const*,double,int *) ;

__attribute__((used)) static void
FUNC_2(
 const transition_scheme_t *VAR_0,
 double VAR_1,
 color_setting_t *VAR_2)
{
 const color_setting_t *VAR_3 = &VAR_0->day;
 const color_setting_t *VAR_4 = &VAR_0->night;

 VAR_1 = FUNC_0(0.0, VAR_1, 1.0);
 FUNC_1(VAR_4, VAR_3, VAR_1, VAR_2);
}
