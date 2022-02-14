
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int transaction_t ;
struct journal_head {scalar_t__ b_cp_transaction; } ;
struct buffer_head {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct journal_head*,char*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct journal_head*,int *,int ) ;
 int FUNC_3 (struct journal_head*) ;
 int FUNC_4 (struct buffer_head*) ;
 struct buffer_head* FUNC_5 (struct journal_head*) ;
 int FUNC_6 (struct buffer_head*) ;

__attribute__((used)) static int FUNC_7(struct journal_head *VAR_1, transaction_t *VAR_2)
{
    int VAR_3 = 1;
    struct buffer_head *VAR_4 = FUNC_5(VAR_1);

    FUNC_3(VAR_1);

    if (VAR_1->b_cp_transaction) {
        FUNC_0(VAR_1, "on running+cp transaction");
        FUNC_2(VAR_1, VAR_2, VAR_0);
        FUNC_4(VAR_4);
        VAR_3 = 0;
    } else {
        FUNC_0(VAR_1, "on running transaction");
        FUNC_6(VAR_4);
        FUNC_1(VAR_4);
    }
    return VAR_3;
}
