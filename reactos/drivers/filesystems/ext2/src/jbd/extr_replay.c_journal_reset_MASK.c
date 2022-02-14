
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned long j_first; unsigned long j_last; unsigned long j_head; unsigned long j_tail; unsigned long j_free; int j_max_transaction_buffers; int j_maxlen; scalar_t__ j_commit_sequence; scalar_t__ j_commit_request; scalar_t__ j_transaction_sequence; scalar_t__ j_tail_sequence; TYPE_2__* j_superblock; } ;
typedef TYPE_1__ journal_t ;
struct TYPE_6__ {int s_maxlen; int s_first; } ;
typedef TYPE_2__ journal_superblock_t ;


 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_2(journal_t *VAR_0)
{
    journal_superblock_t *VAR_1 = VAR_0->j_superblock;
    unsigned long VAR_2, VAR_3;

    VAR_2 = FUNC_0(VAR_1->s_first);
    VAR_3 = FUNC_0(VAR_1->s_maxlen);

    VAR_0->j_first = VAR_2;
    VAR_0->j_last = VAR_3;

    VAR_0->j_head = VAR_2;
    VAR_0->j_tail = VAR_2;
    VAR_0->j_free = VAR_3 - VAR_2;

    VAR_0->j_tail_sequence = VAR_0->j_transaction_sequence;
    VAR_0->j_commit_sequence = VAR_0->j_transaction_sequence - 1;
    VAR_0->j_commit_request = VAR_0->j_commit_sequence;

    VAR_0->j_max_transaction_buffers = VAR_0->j_maxlen / 4;


    FUNC_1(VAR_0, 1);
    return 0;
}
