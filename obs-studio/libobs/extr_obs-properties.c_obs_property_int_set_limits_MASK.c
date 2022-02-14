
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct int_data {int min; int max; int step; } ;
typedef int obs_property_t ;


 int VAR_0 ;
 struct int_data* FUNC_0 (int *,int ) ;

void FUNC_1(obs_property_t *VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
 struct int_data *VAR_5 = FUNC_0(VAR_1, VAR_0);
 if (!VAR_5)
  return;

 VAR_5->min = VAR_2;
 VAR_5->max = VAR_3;
 VAR_5->step = VAR_4;
}
