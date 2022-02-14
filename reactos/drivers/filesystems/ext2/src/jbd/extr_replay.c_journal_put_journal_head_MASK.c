
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct journal_head {scalar_t__ b_jcount; int b_transaction; } ;
struct buffer_head {int dummy; } ;


 int FUNC_0 (struct journal_head*,int) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct buffer_head*) ;
 struct buffer_head* FUNC_5 (struct journal_head*) ;

void FUNC_6(struct journal_head *VAR_0)
{
    struct buffer_head *VAR_1 = FUNC_5(VAR_0);

    FUNC_3(VAR_1);
    FUNC_0(VAR_0, VAR_0->b_jcount > 0);
    --VAR_0->b_jcount;
    if (!VAR_0->b_jcount && !VAR_0->b_transaction) {
        FUNC_2(VAR_1);
        FUNC_1(VAR_1);
    }
    FUNC_4(VAR_1);
}
