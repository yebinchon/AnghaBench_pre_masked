
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_data {scalar_t__ format; } ;
typedef int obs_property_t ;


 scalar_t__ VAR_0 ;
 struct list_data* FUNC_0 (int *) ;
 int FUNC_1 (struct list_data*,size_t,char const*,double*) ;

void FUNC_2(obs_property_t *VAR_1, size_t VAR_2,
        const char *VAR_3, double VAR_4)
{
 struct list_data *VAR_5 = FUNC_0(VAR_1);
 if (VAR_5 && VAR_5->format == VAR_0)
  FUNC_1(VAR_5, VAR_2, VAR_3, &VAR_4);
}
