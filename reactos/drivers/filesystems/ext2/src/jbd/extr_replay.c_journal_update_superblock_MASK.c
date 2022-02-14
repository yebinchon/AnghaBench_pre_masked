
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct buffer_head {int dummy; } ;
struct TYPE_4__ {scalar_t__ j_tail_sequence; scalar_t__ j_transaction_sequence; scalar_t__ j_tail; scalar_t__ j_errno; int j_state_lock; int j_flags; struct buffer_head* j_sb_buffer; TYPE_2__* j_superblock; } ;
typedef TYPE_1__ journal_t ;
struct TYPE_5__ {scalar_t__ s_start; void* s_errno; void* s_sequence; } ;
typedef TYPE_2__ journal_superblock_t ;


 int FUNC_0 (struct buffer_head*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,char*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int,struct buffer_head**) ;
 int FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (struct buffer_head*) ;

void FUNC_8(journal_t *VAR_2, int VAR_3)
{
    journal_superblock_t *VAR_4 = VAR_2->j_superblock;
    struct buffer_head *VAR_5 = VAR_2->j_sb_buffer;
    if (VAR_4->s_start == 0 && VAR_2->j_tail_sequence ==
            VAR_2->j_transaction_sequence) {
        FUNC_2(1,"JBD: Skipping superblock update on recovered sb "
                  "(start %ld, seq %d, errno %d)\n",
                  VAR_2->j_tail, VAR_2->j_tail_sequence,
                  VAR_2->j_errno);
        goto out;
    }

    FUNC_3(&VAR_2->j_state_lock);
    FUNC_2(1,"JBD: updating superblock (start %ld, seq %d, errno %d)\n",
              VAR_2->j_tail, VAR_2->j_tail_sequence, VAR_2->j_errno);

    VAR_4->s_sequence = FUNC_1(VAR_2->j_tail_sequence);
    VAR_4->s_start = FUNC_1(VAR_2->j_tail);
    VAR_4->s_errno = FUNC_1(VAR_2->j_errno);
    FUNC_4(&VAR_2->j_state_lock);

    FUNC_0(VAR_5, "marking dirty");
    FUNC_6(VAR_5);
    if (VAR_3)
        FUNC_7(VAR_5);
    else
        FUNC_5(VAR_1, 1, &VAR_5);

out:




    FUNC_3(&VAR_2->j_state_lock);
    if (VAR_4->s_start)
        VAR_2->j_flags &= ~VAR_0;
    else
        VAR_2->j_flags |= VAR_0;
    FUNC_4(&VAR_2->j_state_lock);
}
