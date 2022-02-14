
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct journal_head {struct journal_head* b_tprev; struct journal_head* b_tnext; } ;



__attribute__((used)) static inline void
FUNC_0(struct journal_head **VAR_0, struct journal_head *VAR_1)
{
    if (!*VAR_0) {
        VAR_1->b_tnext = VAR_1->b_tprev = VAR_1;
        *VAR_0 = VAR_1;
    } else {

        struct journal_head *VAR_2 = *VAR_0, *VAR_3 = VAR_2->b_tprev;
        VAR_1->b_tprev = VAR_3;
        VAR_1->b_tnext = VAR_2;
        VAR_3->b_tnext = VAR_2->b_tprev = VAR_1;
    }
}
