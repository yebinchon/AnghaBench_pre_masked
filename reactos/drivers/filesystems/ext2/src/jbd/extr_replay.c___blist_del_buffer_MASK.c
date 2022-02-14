
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct journal_head {TYPE_1__* b_tprev; struct journal_head* b_tnext; } ;
struct TYPE_2__ {struct journal_head* b_tnext; } ;



__attribute__((used)) static inline void
FUNC_0(struct journal_head **VAR_0, struct journal_head *VAR_1)
{
    if (*VAR_0 == VAR_1) {
        *VAR_0 = VAR_1->b_tnext;
        if (*VAR_0 == VAR_1)
            *VAR_0 = ((void*)0);
    }
    VAR_1->b_tprev->b_tnext = VAR_1->b_tnext;
    VAR_1->b_tnext->b_tprev = VAR_1->b_tprev;
}
