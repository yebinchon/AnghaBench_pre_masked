
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct list_head {int dummy; } ;
struct buffer_head {unsigned long b_size; int b_link; int * b_data; TYPE_4__* b_mdl; scalar_t__ b_blocknr; struct block_device* b_bdev; } ;
struct block_device {int bd_bh_lock; TYPE_1__* bd_priv; } ;
typedef scalar_t__ sector_t ;
typedef int s64 ;
struct TYPE_11__ {int MdlFlags; } ;
struct TYPE_10__ {int bh_count; } ;
struct TYPE_9__ {int QuadPart; } ;
struct TYPE_8__ {int Volume; } ;
typedef int * PVOID ;
typedef TYPE_1__* PEXT2_VCB ;
typedef TYPE_2__ LARGE_INTEGER ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_2__*,unsigned long,int ,int **,int **) ;
 int FUNC_1 (int ,TYPE_2__*,unsigned long,int ,int ,int **,int **) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*) ;
 int VAR_1 ;
 int FUNC_4 () ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 TYPE_4__* FUNC_8 (int *,unsigned long,int ) ;
 int FUNC_9 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_10 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_11 (TYPE_4__*,int ,int ,int *,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_12 (int *) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct block_device*,struct buffer_head*) ;
 struct buffer_head* FUNC_15 (struct block_device*,scalar_t__) ;
 int FUNC_16 (struct buffer_head*) ;
 TYPE_3__ VAR_10 ;
 int FUNC_17 (struct buffer_head*) ;
 struct buffer_head* FUNC_18 () ;
 int FUNC_19 (struct buffer_head*) ;

struct buffer_head *
FUNC_20(
    struct block_device * VAR_11,
    sector_t VAR_12,
    unsigned long VAR_13,
    int VAR_14
)
{
    PEXT2_VCB VAR_15 = VAR_11->bd_priv;
    LARGE_INTEGER VAR_16;
    PVOID VAR_17 = ((void*)0);
    PVOID VAR_18 = ((void*)0);

    struct list_head *VAR_19;


    struct buffer_head *VAR_20 = ((void*)0), *VAR_21 = ((void*)0);


    if (VAR_12 >= VAR_8) {
        FUNC_4();
        goto errorout;
    }


    FUNC_6(&VAR_11->bd_bh_lock, VAR_9);
    VAR_21 = FUNC_15(VAR_11, VAR_12);
    if (VAR_21) {
        VAR_20 = VAR_21;
        FUNC_17(VAR_20);
        FUNC_7(&VAR_11->bd_bh_lock);
        goto errorout;
    }
    FUNC_7(&VAR_11->bd_bh_lock);

    VAR_20 = FUNC_18();
    if (!VAR_20) {
        goto errorout;
    }
    VAR_20->b_bdev = VAR_11;
    VAR_20->b_blocknr = VAR_12;
    VAR_20->b_size = VAR_13;
    VAR_20->b_data = ((void*)0);




again:

    VAR_16.QuadPart = (s64) VAR_20->b_blocknr;
    VAR_16.QuadPart <<= VAR_0;

    if (VAR_14) {

        if (!FUNC_1(VAR_15->Volume,
                            &VAR_16,
                            VAR_20->b_size,
                            VAR_2,
                            VAR_7 ,
                            &VAR_17,
                            &VAR_18)) {
            FUNC_9(100);
            goto again;
        }
    } else {
        if (!FUNC_0( VAR_15->Volume,
                        &VAR_16,
                        VAR_20->b_size,
                        VAR_7,
                        &VAR_17,
                        &VAR_18)) {
            FUNC_9(100);
            goto again;
        }
        FUNC_19(VAR_20);
    }

    VAR_20->b_mdl = FUNC_8(VAR_18, VAR_20->b_size, VAR_4);
    if (VAR_20->b_mdl) {


        VAR_20->b_data = FUNC_11(
                         VAR_20->b_mdl, VAR_5, VAR_6,
                         ((void*)0),VAR_2, VAR_3);

    }
    if (!VAR_20->b_mdl || !VAR_20->b_data) {
        FUNC_16(VAR_20);
        VAR_20 = ((void*)0);
        goto errorout;
    }

    FUNC_17(VAR_20);

    FUNC_3(VAR_1, ("getblk: Vcb=%p bhcount=%u block=%u bh=%p mdl=%p (Flags:%xh VA:%p)\n",
                  VAR_15, FUNC_13(&VAR_10.bh_count), VAR_12, VAR_20, VAR_20->b_mdl, VAR_20->b_mdl->MdlFlags, VAR_20->b_data));

    FUNC_5(&VAR_11->bd_bh_lock, VAR_9);

    VAR_21 = FUNC_15(VAR_11, VAR_12);
    if (VAR_21) {
        FUNC_16(VAR_20);
        VAR_20 = VAR_21;
        FUNC_17(VAR_20);
        FUNC_12(&VAR_20->b_link);
        FUNC_10(&VAR_20->b_link);
        FUNC_7(&VAR_11->bd_bh_lock);
        goto errorout;
    } else {
        FUNC_14(VAR_11, VAR_20);
    }
    FUNC_7(&VAR_11->bd_bh_lock);


errorout:

    if (VAR_17)
        FUNC_2(VAR_17);

    return VAR_20;
}
