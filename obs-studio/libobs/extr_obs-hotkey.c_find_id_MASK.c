
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_hotkey_internal_find_forward {int member_1; size_t idx; int found; int member_2; int member_0; } ;
typedef int obs_hotkey_id ;


 int FUNC_0 (int ,struct obs_hotkey_internal_find_forward*) ;
 int VAR_0 ;

__attribute__((used)) static inline bool FUNC_1(obs_hotkey_id VAR_1, size_t *VAR_2)
{
 struct obs_hotkey_internal_find_forward VAR_3 = {VAR_1, 0, 0};
 FUNC_0(VAR_0, &VAR_3);
 *VAR_2 = VAR_3.idx;
 return VAR_3.found;
}
