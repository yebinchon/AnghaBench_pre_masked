
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int obs_property_t ;
typedef int obs_properties_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,char const*) ;
 int * FUNC_1 (int *,char const*,char const*,int ) ;

obs_property_t *FUNC_2(obs_properties_t *VAR_1,
     const char *VAR_2, const char *VAR_3)
{
 if (!VAR_1 || FUNC_0(VAR_1, VAR_2))
  return ((void*)0);
 return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_0);
}
