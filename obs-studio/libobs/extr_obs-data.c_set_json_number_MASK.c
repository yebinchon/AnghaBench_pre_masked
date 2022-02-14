
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int obs_data_item_t ;
typedef int json_t ;
typedef enum obs_data_number_type { ____Placeholder_obs_data_number_type } obs_data_number_type ;


 int VAR_0 ;
 int FUNC_0 (long long) ;
 int FUNC_1 (int *,char const*,int ) ;
 int FUNC_2 (double) ;
 double FUNC_3 (int *) ;
 long long FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static inline void FUNC_6(json_t *VAR_1, const char *VAR_2,
       obs_data_item_t *VAR_3)
{
 enum obs_data_number_type VAR_4 = FUNC_5(VAR_3);

 if (VAR_4 == VAR_0) {
  long long VAR_5 = FUNC_4(VAR_3);
  FUNC_1(VAR_1, VAR_2, FUNC_0(VAR_5));
 } else {
  double VAR_6 = FUNC_3(VAR_3);
  FUNC_1(VAR_1, VAR_2, FUNC_2(VAR_6));
 }
}
