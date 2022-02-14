
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int extra; } ;
struct python_obs_callback {TYPE_1__ base; } ;
typedef scalar_t__ obs_hotkey_id ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ,void*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(void *VAR_2)
{
 struct python_obs_callback *VAR_3 = VAR_2;
 obs_hotkey_id VAR_4 = (obs_hotkey_id)FUNC_0(&VAR_3->base.extra, "id");

 if (VAR_4 != VAR_0)
  FUNC_1(VAR_1, (void *)(uintptr_t)VAR_4);
}
