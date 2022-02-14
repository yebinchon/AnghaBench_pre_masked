
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_data {scalar_t__ format; } ;
typedef int obs_property_t ;


 scalar_t__ VAR_0 ;
 size_t FUNC_0 (struct list_data*,char const*,char const*) ;
 struct list_data* FUNC_1 (int *) ;

size_t FUNC_2(obs_property_t *VAR_1, const char *VAR_2,
        const char *VAR_3)
{
 struct list_data *VAR_4 = FUNC_1(VAR_1);
 if (VAR_4 && VAR_4->format == VAR_0)
  return FUNC_0(VAR_4, VAR_2, VAR_3);
 return 0;
}
