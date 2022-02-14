
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct binding_find_data {size_t* member_1; int member_2; int found; int member_0; } ;
typedef int obs_hotkey_id ;


 int VAR_0 ;
 int FUNC_0 (int ,struct binding_find_data*) ;

__attribute__((used)) static inline bool FUNC_1(obs_hotkey_id VAR_1, size_t *VAR_2)
{
 struct binding_find_data VAR_3 = {VAR_1, VAR_2, 0};
 FUNC_0(VAR_0, &VAR_3);
 return VAR_3.found;
}
