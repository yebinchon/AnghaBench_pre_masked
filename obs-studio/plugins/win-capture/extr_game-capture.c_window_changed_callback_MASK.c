
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int obs_property_t ;
typedef int obs_properties_t ;
typedef int obs_data_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char const*) ;
 char* FUNC_2 (int *,int ) ;
 char* FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (char const*,char const*) ;

__attribute__((used)) static bool FUNC_5(obs_properties_t *VAR_1, obs_property_t *VAR_2,
        obs_data_t *VAR_3)
{
 const char *VAR_4;
 bool VAR_5 = 0;
 size_t VAR_6 = 0;

 VAR_4 = FUNC_2(VAR_3, VAR_0);
 if (!VAR_4) {
  return 0;
 }

 for (;;) {
  const char *VAR_7 = FUNC_3(VAR_2, VAR_6++);
  if (!VAR_7)
   break;

  if (FUNC_4(VAR_7, VAR_4) == 0) {
   VAR_5 = 1;
   break;
  }
 }

 if (VAR_4 && *VAR_4 && !VAR_5) {
  FUNC_1(VAR_2, VAR_4);
  return 1;
 }

 FUNC_0(VAR_1);
 return 0;
}
