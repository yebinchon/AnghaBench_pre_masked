
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct int_data {int min; } ;
typedef int obs_property_t ;


 int VAR_0 ;
 struct int_data* FUNC_0 (int *,int ) ;

int FUNC_1(obs_property_t *VAR_1)
{
 struct int_data *VAR_2 = FUNC_0(VAR_1, VAR_0);
 return VAR_2 ? VAR_2->min : 0;
}
