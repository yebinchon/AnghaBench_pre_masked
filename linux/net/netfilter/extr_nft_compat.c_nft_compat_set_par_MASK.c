
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_action_param {int hotdrop; void const* targinfo; void* target; } ;



__attribute__((used)) static inline void
FUNC_0(struct xt_action_param *VAR_0, void *VAR_1, const void *VAR_2)
{
 VAR_0->target = VAR_1;
 VAR_0->targinfo = VAR_2;
 VAR_0->hotdrop = 0;
}
