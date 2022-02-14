
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct list_head {int dummy; } ;
struct buffer_head {unsigned long b_size; int b_link; int * b_data; scalar_t__ b_bcb; scalar_t__ b_blocknr; struct block_device* b_bdev; } ;
struct block_device {int bd_bh_lock; TYPE_1__* bd_priv; } ;
typedef scalar_t__ sector_t ;
typedef int s64 ;
struct TYPE_8__ {int bh_count; } ;
struct TYPE_7__ {int QuadPart; } ;
struct TYPE_6__ {int Volume; } ;
typedef int PVOID ;
typedef TYPE_1__* PEXT2_VCB ;
typedef TYPE_2__ LARGE_INTEGER ;
typedef int ERESOURCE_THREAD ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_2__*,unsigned long,int ,scalar_t__*,int *) ;
 int FUNC_1 (int ,TYPE_2__*,unsigned long,int ,int ,scalar_t__*,int *) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (int ,char*) ;
 int VAR_1 ;
 int FUNC_4 () ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int) ;
 int VAR_2 ;
 int FUNC_9 (int *) ;
 int VAR_3 ;
 int FUNC_10 (int *) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct block_device*,struct buffer_head*) ;
 struct buffer_head* FUNC_13 (struct block_device*,scalar_t__) ;
 int FUNC_14 (struct buffer_head*) ;
 TYPE_3__ VAR_6 ;
 int FUNC_15 (struct buffer_head*) ;
 struct buffer_head* FUNC_16 () ;
 int FUNC_17 (struct buffer_head*) ;

struct buffer_head *
FUNC_18(
    struct block_device * VAR_7,
    sector_t VAR_8,
    unsigned long VAR_9,
    int VAR_10
)
{
    PEXT2_VCB VAR_11 = VAR_7->bd_priv;
    LARGE_INTEGER VAR_12;

    struct list_head *VAR_13;


    struct buffer_head *VAR_14 = ((void*)0), *VAR_15 = ((void*)0);


    if (VAR_8 >= VAR_4) {
        FUNC_4();
        goto errorout;
    }


    FUNC_6(&VAR_7->bd_bh_lock, VAR_5);
    VAR_15 = FUNC_13(VAR_7, VAR_8);
    if (VAR_15) {
        VAR_14 = VAR_15;
        FUNC_15(VAR_14);
        FUNC_7(&VAR_7->bd_bh_lock);
        goto errorout;
    }
    FUNC_7(&VAR_7->bd_bh_lock);

    VAR_14 = FUNC_16();
    if (!VAR_14) {
        goto errorout;
    }
    VAR_14->b_bdev = VAR_7;
    VAR_14->b_blocknr = VAR_8;
    VAR_14->b_size = VAR_9;
    VAR_14->b_data = ((void*)0);




again:

    VAR_12.QuadPart = (s64) VAR_14->b_blocknr;
    VAR_12.QuadPart <<= VAR_0;

    if (VAR_10) {
        if (!FUNC_1(VAR_11->Volume,
                            &VAR_12,
                            VAR_14->b_size,
                            VAR_2,
                            VAR_3,
                            &VAR_14->b_bcb,
                            (PVOID *)&VAR_14->b_data)) {
            FUNC_8(100);
            goto again;
        }
    } else {
        if (!FUNC_0( VAR_11->Volume,
                        &VAR_12,
                        VAR_14->b_size,
                        VAR_3,
                        &VAR_14->b_bcb,
                        (PVOID *)&VAR_14->b_data)) {
            FUNC_8(100);
            goto again;
        }
        FUNC_17(VAR_14);
    }

    if (VAR_14->b_bcb)
        FUNC_2(VAR_14->b_bcb, (PVOID)((ERESOURCE_THREAD)VAR_14 | 0x3));

    if (!VAR_14->b_data) {
        FUNC_14(VAR_14);
        VAR_14 = ((void*)0);
        goto errorout;
    }
    FUNC_15(VAR_14);

    FUNC_3(VAR_1, ("getblk: Vcb=%p bhcount=%u block=%u bh=%p ptr=%p.\n",
                  VAR_11, FUNC_11(&VAR_6.bh_count), VAR_8, VAR_14, VAR_14->b_data));

    FUNC_5(&VAR_7->bd_bh_lock, VAR_5);

    VAR_15 = FUNC_13(VAR_7, VAR_8);
    if (VAR_15) {
        FUNC_15(VAR_15);
        FUNC_14(VAR_14);
        VAR_14 = VAR_15;
        FUNC_10(&VAR_14->b_link);
        FUNC_9(&VAR_14->b_link);
        FUNC_7(&VAR_7->bd_bh_lock);
        goto errorout;
    } else {
        FUNC_12(VAR_7, VAR_14);
    }
    FUNC_7(&VAR_7->bd_bh_lock);


errorout:

    return VAR_14;
}
