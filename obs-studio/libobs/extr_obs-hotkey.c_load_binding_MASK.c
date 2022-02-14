
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {scalar_t__ key; int modifiers; int member_0; } ;
typedef TYPE_1__ obs_key_combination_t ;
typedef int obs_hotkey_t ;
typedef int obs_data_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *,TYPE_1__) ;
 int FUNC_1 (int *,int *,char*,int ) ;
 int FUNC_2 (int *,char*) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static inline void FUNC_4(obs_hotkey_t *VAR_6, obs_data_t *VAR_7)
{
 if (!VAR_6 || !VAR_7)
  return;

 obs_key_combination_t VAR_8 = {0};
 uint32_t *VAR_9 = &VAR_8.modifiers;
 FUNC_1(VAR_9, VAR_7, "shift", VAR_3);
 FUNC_1(VAR_9, VAR_7, "control", VAR_2);
 FUNC_1(VAR_9, VAR_7, "alt", VAR_0);
 FUNC_1(VAR_9, VAR_7, "command", VAR_1);

 VAR_8.key = FUNC_3(FUNC_2(VAR_7, "key"));
 if (!VAR_9 &&
     (VAR_8.key == VAR_5 || VAR_8.key >= VAR_4))
  return;

 FUNC_0(VAR_6, VAR_8);
}
