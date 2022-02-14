
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct buffer_head {int b_size; scalar_t__ b_blocknr; scalar_t__ b_bcb; scalar_t__ b_data; struct block_device* b_bdev; } ;
struct block_device {TYPE_3__* bd_priv; } ;
typedef int ULONG ;
struct TYPE_10__ {int QuadPart; } ;
struct TYPE_7__ {scalar_t__ Type; } ;
struct TYPE_9__ {TYPE_2__* Volume; TYPE_1__ Identifier; } ;
struct TYPE_8__ {int Flags; } ;
typedef int PVOID ;
typedef TYPE_3__* PEXT2_VCB ;
typedef int LONGLONG ;
typedef TYPE_4__ LARGE_INTEGER ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__,int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (TYPE_3__*,int *,int ,int ,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int ,int ) ;
 int VAR_3 ;
 int FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (struct buffer_head*) ;

int FUNC_7(int VAR_4, struct buffer_head *VAR_5)
{
    struct block_device *VAR_6 = VAR_5->b_bdev;
    PEXT2_VCB VAR_7 = VAR_6->bd_priv;
    PVOID VAR_8;
    LARGE_INTEGER VAR_9;

    FUNC_0(VAR_7->Identifier.Type == VAR_1);
    FUNC_0(VAR_5->b_data && VAR_5->b_bcb);

    if (VAR_4 == VAR_3) {

        if (FUNC_3(VAR_7)) {
            goto errorout;
        }

        FUNC_4(VAR_7->Volume->Flags, VAR_2);
        VAR_9.QuadPart = ((LONGLONG)VAR_5->b_blocknr) << VAR_0;

        FUNC_1(VAR_5->b_bcb, ((void*)0));
        FUNC_2( VAR_7, ((void*)0),
                            (ULONG)VAR_5->b_blocknr,
                            (ULONG)VAR_5->b_blocknr,
                            (VAR_5->b_size >> VAR_0));
    } else {
    }

errorout:

    FUNC_6(VAR_5);
    FUNC_5(VAR_5);
    return 0;
}
