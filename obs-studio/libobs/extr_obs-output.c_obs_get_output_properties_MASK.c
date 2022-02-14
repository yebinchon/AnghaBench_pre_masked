
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_output_info {int * (* get_properties ) (int *) ;} ;
typedef int obs_properties_t ;
typedef int obs_data_t ;


 struct obs_output_info* FUNC_0 (char const*) ;
 int * FUNC_1 (struct obs_output_info const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int * FUNC_4 (int *) ;

obs_properties_t *FUNC_5(const char *VAR_0)
{
 const struct obs_output_info *VAR_1 = FUNC_0(VAR_0);
 if (VAR_1 && VAR_1->get_properties) {
  obs_data_t *VAR_2 = FUNC_1(VAR_1);
  obs_properties_t *VAR_3;

  VAR_3 = VAR_1->get_properties(((void*)0));
  FUNC_3(VAR_3, VAR_2);
  FUNC_2(VAR_2);
  return VAR_3;
 }
 return ((void*)0);
}
