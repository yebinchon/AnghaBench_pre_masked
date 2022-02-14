
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct futex_pi_state {int dummy; } ;
struct TYPE_2__ {struct futex_pi_state* pi_state_cache; } ;


 int FUNC_0 (int) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static struct futex_pi_state *FUNC_1(void)
{
 struct futex_pi_state *VAR_1 = VAR_0->pi_state_cache;

 FUNC_0(!VAR_1);
 VAR_0->pi_state_cache = ((void*)0);

 return VAR_1;
}
