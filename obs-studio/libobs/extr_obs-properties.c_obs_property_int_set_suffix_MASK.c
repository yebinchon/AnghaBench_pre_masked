
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct int_data {int suffix; } ;
typedef int obs_property_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char const*) ;
 struct int_data* FUNC_2 (int *,int ) ;

void FUNC_3(obs_property_t *VAR_1, const char *VAR_2)
{
 struct int_data *VAR_3 = FUNC_2(VAR_1, VAR_0);
 if (!VAR_3)
  return;

 FUNC_0(VAR_3->suffix);
 VAR_3->suffix = FUNC_1(VAR_2);
}
