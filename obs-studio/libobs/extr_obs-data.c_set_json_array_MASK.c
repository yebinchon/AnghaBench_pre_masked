
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int obs_data_t ;
typedef int obs_data_item_t ;
typedef int obs_data_array_t ;
typedef int json_t ;


 int * FUNC_0 () ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,char const*,int *) ;
 size_t FUNC_3 (int *) ;
 int * FUNC_4 (int *,size_t) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;

__attribute__((used)) static inline void FUNC_9(json_t *VAR_0, const char *VAR_1,
      obs_data_item_t *VAR_2)
{
 json_t *VAR_3 = FUNC_0();
 obs_data_array_t *VAR_4 = FUNC_6(VAR_2);
 size_t VAR_5 = FUNC_3(VAR_4);

 for (size_t VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  obs_data_t *VAR_7 = FUNC_4(VAR_4, VAR_6);
  json_t *VAR_8 = FUNC_8(VAR_7);
  FUNC_1(VAR_3, VAR_8);
  FUNC_7(VAR_7);
 }

 FUNC_2(VAR_0, VAR_1, VAR_3);
 FUNC_5(VAR_4);
}
