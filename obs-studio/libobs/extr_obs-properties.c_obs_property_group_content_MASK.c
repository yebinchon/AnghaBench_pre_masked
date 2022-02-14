
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct group_data {int * content; } ;
typedef int obs_property_t ;
typedef int obs_properties_t ;


 int VAR_0 ;
 struct group_data* FUNC_0 (int *,int ) ;

obs_properties_t *FUNC_1(obs_property_t *VAR_1)
{
 struct group_data *VAR_2 = FUNC_0(VAR_1, VAR_0);
 return VAR_2 ? VAR_2->content : ((void*)0);
}
