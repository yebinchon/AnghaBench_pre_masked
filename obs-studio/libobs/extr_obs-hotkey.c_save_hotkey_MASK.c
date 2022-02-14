
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct save_bindings_helper_t {int * member_1; int * member_0; } ;
typedef int obs_hotkey_t ;
typedef int obs_data_array_t ;


 int FUNC_0 (int ,struct save_bindings_helper_t*) ;
 int * FUNC_1 () ;
 int VAR_0 ;

__attribute__((used)) static inline obs_data_array_t *FUNC_2(obs_hotkey_t *VAR_1)
{
 obs_data_array_t *VAR_2 = FUNC_1();

 struct save_bindings_helper_t VAR_3 = {VAR_2, VAR_1};
 FUNC_0(VAR_0, &VAR_3);

 return VAR_2;
}
