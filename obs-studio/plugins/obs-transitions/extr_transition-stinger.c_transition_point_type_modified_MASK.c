
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int obs_property_t ;
typedef int obs_properties_t ;
typedef int obs_data_t ;
typedef scalar_t__ int64_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,char*) ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static bool FUNC_5(obs_properties_t *VAR_1,
        obs_property_t *VAR_2, obs_data_t *VAR_3)
{
 int64_t VAR_4 = FUNC_0(VAR_3, "tp_type");
 VAR_2 = FUNC_2(VAR_1, "transition_point");

 if (VAR_4 == VAR_0) {
  FUNC_4(
   VAR_2, FUNC_1("TransitionPoint"));
  FUNC_3(VAR_2, " ms");
 } else {
  FUNC_4(
   VAR_2, FUNC_1("TransitionPointFrame"));
  FUNC_3(VAR_2, "");
 }
 return 1;
}
