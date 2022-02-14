
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int obs_hotkey_t ;
typedef int obs_data_t ;
typedef int obs_data_array_t ;


 int FUNC_0 (char*,int *) ;
 int FUNC_1 (int *,int *) ;
 size_t FUNC_2 (int *) ;
 int * FUNC_3 (int *,size_t) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static inline void FUNC_5(obs_hotkey_t *VAR_0, obs_data_array_t *VAR_1)
{
 const size_t VAR_2 = FUNC_2(VAR_1);
 for (size_t VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  obs_data_t *VAR_4 = FUNC_3(VAR_1, VAR_3);
  FUNC_1(VAR_0, VAR_4);
  FUNC_4(VAR_4);
 }

 FUNC_0("hotkey_bindings_changed", VAR_0);
}
