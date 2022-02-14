
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ key; int modifiers; } ;
typedef TYPE_1__ obs_key_combination_t ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline bool FUNC_0(obs_key_combination_t VAR_1)
{
 return !VAR_1.modifiers && VAR_1.key == VAR_0;
}
