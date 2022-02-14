
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int obs_property_t ;
typedef int obs_properties_t ;
typedef int obs_data_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (char const*,int ) ;
 char* FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static bool FUNC_5(obs_properties_t *VAR_6, obs_property_t *VAR_7,
         obs_data_t *VAR_8)
{
 const char *VAR_9 = FUNC_2(VAR_8, VAR_0);

 bool VAR_10;
 if (FUNC_1(VAR_9, VAR_4) == 0) {
  VAR_10 = 0;
 } else if (FUNC_1(VAR_9, VAR_2) == 0) {
  VAR_10 = 0;
 } else if (FUNC_1(VAR_9, VAR_3) == 0) {
  VAR_10 = 1;
 } else if (FUNC_1(VAR_9, VAR_1) == 0) {
  VAR_10 = 0;
 } else {
  VAR_10 = 1;
 }

 FUNC_4(FUNC_3(VAR_6, VAR_5),
     VAR_10);

 FUNC_0(VAR_7);
 return 1;
}
