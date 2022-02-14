
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct buffer_head {int b_data; int b_size; scalar_t__ b_blocknr; struct block_device* b_bdev; } ;
struct block_device {TYPE_2__* bd_priv; } ;
typedef int ULONG ;
struct TYPE_11__ {int Flags; } ;
struct TYPE_10__ {int QuadPart; } ;
struct TYPE_8__ {scalar_t__ Type; } ;
struct TYPE_9__ {TYPE_6__* Volume; TYPE_1__ Identifier; } ;
typedef int PVOID ;
typedef TYPE_2__* PEXT2_VCB ;
typedef int PBCB ;
typedef int LONGLONG ;
typedef TYPE_3__ LARGE_INTEGER ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_6__*,TYPE_3__*,int ,int ,int ,int *,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (TYPE_2__*,int *,int ,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 int VAR_5 ;
 int FUNC_7 (int ,int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_8 (int ,int,int ) ;
 int FUNC_9 (int ,int,int ) ;
 int FUNC_10 (struct buffer_head*) ;
 int FUNC_11 (struct buffer_head*) ;

int FUNC_12(int VAR_7, struct buffer_head *VAR_8)
{
    struct block_device *VAR_9 = VAR_8->b_bdev;
    PEXT2_VCB VAR_10 = VAR_9->bd_priv;
    PBCB VAR_11;
    PVOID VAR_12;
    LARGE_INTEGER VAR_13;

    FUNC_0(VAR_10->Identifier.Type == VAR_2);
    FUNC_0(VAR_8->b_data);

    if (VAR_7 == VAR_6) {

        if (FUNC_6(VAR_10)) {
            goto errorout;
        }

        FUNC_7(VAR_10->Volume->Flags, VAR_4);
        VAR_13.QuadPart = ((LONGLONG)VAR_8->b_blocknr) << VAR_0;


        if (FUNC_1(
                    VAR_10->Volume,
                    &VAR_13,
                    VAR_1,
                    VAR_3,
                    VAR_5 ,
                    &VAR_11,
                    &VAR_12 )) {






            FUNC_2(VAR_11, ((void*)0));
            FUNC_5( VAR_10, ((void*)0),
                                (ULONG)VAR_8->b_blocknr,
                                (ULONG)VAR_8->b_blocknr,
                                (VAR_8->b_size >> VAR_0));
            FUNC_3(VAR_11);
        } else {

            FUNC_5( VAR_10, ((void*)0),
                                (ULONG)VAR_8->b_blocknr,
                                (ULONG)VAR_8->b_blocknr,
                                (VAR_8->b_size >> VAR_0));
        }

    } else {
    }

errorout:

    FUNC_11(VAR_8);
    FUNC_10(VAR_8);
    return 0;
}
