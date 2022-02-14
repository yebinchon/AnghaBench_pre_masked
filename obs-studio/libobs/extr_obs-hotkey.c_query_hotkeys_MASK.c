
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct obs_query_hotkeys_helper {int member_2; int member_1; int member_0; } ;
struct TYPE_3__ {int strict_modifiers; int thread_disable_press; } ;
struct TYPE_4__ {TYPE_1__ hotkeys; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,struct obs_query_hotkeys_helper*) ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_2__* VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static inline void FUNC_2()
{
 uint32_t VAR_10 = 0;
 if (FUNC_1(VAR_7))
  VAR_10 |= VAR_3;
 if (FUNC_1(VAR_5))
  VAR_10 |= VAR_2;
 if (FUNC_1(VAR_4))
  VAR_10 |= VAR_0;
 if (FUNC_1(VAR_6))
  VAR_10 |= VAR_1;

 struct obs_query_hotkeys_helper VAR_11 = {
  VAR_10,
  VAR_8->hotkeys.thread_disable_press,
  VAR_8->hotkeys.strict_modifiers,
 };
 FUNC_0(VAR_9, &VAR_11);
}
