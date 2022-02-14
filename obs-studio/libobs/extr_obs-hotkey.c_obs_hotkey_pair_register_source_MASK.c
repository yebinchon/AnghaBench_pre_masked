
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int context; } ;
typedef TYPE_1__ obs_source_t ;
typedef int obs_hotkey_pair_id ;
typedef int obs_hotkey_active_func ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_1__*,int ,int *,char const*,char const*,char const*,char const*,int ,int ,void*,void*) ;
 int VAR_2 ;

obs_hotkey_pair_id FUNC_1(
 obs_source_t *VAR_3, const char *VAR_4, const char *VAR_5,
 const char *VAR_6, const char *VAR_7,
 obs_hotkey_active_func VAR_8, obs_hotkey_active_func VAR_9, void *VAR_10,
 void *VAR_11)
{
 if (!VAR_3)
  return VAR_1;
 return FUNC_0(VAR_0,
          VAR_3, VAR_2,
          &VAR_3->context, VAR_4,
          VAR_5, VAR_6, VAR_7,
          VAR_8, VAR_9, VAR_10, VAR_11);
}
