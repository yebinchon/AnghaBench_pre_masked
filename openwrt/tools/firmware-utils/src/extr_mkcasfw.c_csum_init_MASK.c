
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csum_state {int size; scalar_t__ odd; scalar_t__ tmp; scalar_t__ val; } ;



void
FUNC_0(struct csum_state *VAR_0, int VAR_1)
{
 VAR_0->val = 0;
 VAR_0->tmp = 0;
 VAR_0->odd = 0;
 VAR_0->size = VAR_1;
}
