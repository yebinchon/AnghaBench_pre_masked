
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_source {int dummy; } ;
typedef int obs_hotkey_t ;
typedef int * obs_hotkey_pair_id ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct obs_source*) ;
 int FUNC_2 (struct obs_source*,int) ;

__attribute__((used)) static bool FUNC_3(void *VAR_0, obs_hotkey_pair_id VAR_1,
       obs_hotkey_t *VAR_2, bool VAR_3)
{
 FUNC_0(VAR_1);
 FUNC_0(VAR_2);

 struct obs_source *VAR_4 = VAR_0;

 if (!VAR_3 || FUNC_1(VAR_4))
  return 0;

 FUNC_2(VAR_4, 1);
 return 1;
}
