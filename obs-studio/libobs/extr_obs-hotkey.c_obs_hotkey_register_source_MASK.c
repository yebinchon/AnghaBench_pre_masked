
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ private; } ;
struct TYPE_5__ {TYPE_4__ context; } ;
typedef TYPE_1__ obs_source_t ;
typedef int obs_hotkey_id ;
typedef int obs_hotkey_func ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,TYPE_4__*,char const*,char const*,int ,void*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 () ;

obs_hotkey_id FUNC_4(obs_source_t *VAR_2, const char *VAR_3,
      const char *VAR_4,
      obs_hotkey_func VAR_5, void *VAR_6)
{
 if (!VAR_2 || VAR_2->context.private || !FUNC_0())
  return VAR_1;

 obs_hotkey_id VAR_7 = FUNC_1(
  VAR_0,
  FUNC_2(VAR_2), &VAR_2->context, VAR_3,
  VAR_4, VAR_5, VAR_6);

 FUNC_3();
 return VAR_7;
}
