
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {struct TYPE_9__* j_wbuf; scalar_t__ j_revoke; scalar_t__ j_inode; scalar_t__ j_sb_buffer; scalar_t__ j_transaction_sequence; scalar_t__ j_tail_sequence; scalar_t__ j_tail; int j_list_lock; int * j_checkpoint_transactions; int * j_committing_transaction; int * j_running_transaction; } ;
typedef TYPE_1__ journal_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,int) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;

void FUNC_11(journal_t *VAR_0)
{
    if (VAR_0->j_sb_buffer) {
        FUNC_1(VAR_0->j_sb_buffer);
    }
    if (VAR_0->j_inode)
        FUNC_2(VAR_0->j_inode);
    if (VAR_0->j_revoke)
        FUNC_6(VAR_0);
    FUNC_9(VAR_0->j_wbuf);
    FUNC_9(VAR_0);
}
