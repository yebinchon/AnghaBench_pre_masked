
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct buffer_head {int b_data; int b_blocknr; int b_size; int b_link; int b_ts_drop; int b_count; struct block_device* b_bdev; } ;
struct block_device {int bd_bh_lock; int bd_priv; } ;
struct TYPE_9__ {int Wait; } ;
struct TYPE_12__ {TYPE_3__ bhReaper; } ;
struct TYPE_11__ {int bh_count; } ;
struct TYPE_8__ {int bd_bh_notify; int bd_bh_free; } ;
struct TYPE_7__ {scalar_t__ Type; } ;
struct TYPE_10__ {TYPE_2__ bd; TYPE_1__ Identifier; } ;
typedef TYPE_4__* PEXT2_VCB ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 TYPE_6__* VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,int ) ;
 int FUNC_9 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (struct buffer_head*) ;
 TYPE_5__ VAR_6 ;
 int FUNC_13 (int ,int,struct buffer_head**) ;

void FUNC_14(struct buffer_head *VAR_7)
{
    struct block_device *VAR_8 = VAR_7->b_bdev;
    PEXT2_VCB VAR_9 = (PEXT2_VCB)VAR_8->bd_priv;

    FUNC_0(VAR_9->Identifier.Type == VAR_1);


    while (FUNC_12(VAR_7)) {
        FUNC_13(VAR_5, 1, &VAR_7);
    }

    FUNC_2(&VAR_8->bd_bh_lock, VAR_4);
    if (FUNC_10(&VAR_7->b_count)) {
        FUNC_0(0 == FUNC_11(&VAR_7->b_count));
    } else {
        FUNC_3(&VAR_8->bd_bh_lock);
        return;
    }
    FUNC_7(&VAR_7->b_ts_drop);



    FUNC_9(&VAR_7->b_link);
    FUNC_4(&VAR_9->bd.bd_bh_free, &VAR_7->b_link);
    FUNC_6(&VAR_9->bd.bd_bh_notify);
    FUNC_3(&VAR_8->bd_bh_lock);
    FUNC_8(&VAR_2->bhReaper.Wait, 0, VAR_3);

    FUNC_1(VAR_0, ("brelse: cnt=%u size=%u blk=%10.10xh bh=%p ptr=%p\n",
                  FUNC_11(&VAR_6.bh_count) - 1, VAR_7->b_size,
                  VAR_7->b_blocknr, VAR_7, VAR_7->b_data ));
}
