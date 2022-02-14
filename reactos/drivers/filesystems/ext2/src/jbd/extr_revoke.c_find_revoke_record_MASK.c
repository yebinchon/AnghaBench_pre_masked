
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct list_head {scalar_t__ next; } ;
struct jbd_revoke_record_s {unsigned long blocknr; struct list_head hash; } ;
struct TYPE_6__ {int j_revoke_lock; TYPE_1__* j_revoke; } ;
typedef TYPE_2__ journal_t ;
struct TYPE_5__ {struct list_head* hash_table; } ;


 size_t FUNC_0 (TYPE_2__*,unsigned long) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static struct jbd_revoke_record_s *FUNC_3(journal_t *VAR_0,
                    unsigned long VAR_1)
{
    struct list_head *VAR_2;
    struct jbd_revoke_record_s *VAR_3;

    VAR_2 = &VAR_0->j_revoke->hash_table[FUNC_0(VAR_0, VAR_1)];

    FUNC_1(&VAR_0->j_revoke_lock);
    VAR_3 = (struct jbd_revoke_record_s *) VAR_2->next;
    while (&(VAR_3->hash) != VAR_2) {
        if (VAR_3->blocknr == VAR_1) {
            FUNC_2(&VAR_0->j_revoke_lock);
            return VAR_3;
        }
        VAR_3 = (struct jbd_revoke_record_s *) VAR_3->hash.next;
    }
    FUNC_2(&VAR_0->j_revoke_lock);
    return ((void*)0);
}
