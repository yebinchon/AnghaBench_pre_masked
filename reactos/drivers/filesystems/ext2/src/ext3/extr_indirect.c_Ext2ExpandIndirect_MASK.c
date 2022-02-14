
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ ULONG ;
struct TYPE_14__ {scalar_t__* i_block; } ;
struct TYPE_13__ {TYPE_5__ Inode; } ;
struct TYPE_12__ {scalar_t__ max_data_blocks; scalar_t__* max_blocks_per_layer; } ;
struct TYPE_11__ {int QuadPart; } ;
typedef int PULONG ;
typedef TYPE_1__* PLARGE_INTEGER ;
typedef TYPE_2__* PEXT2_VCB ;
typedef TYPE_3__* PEXT2_MCB ;
typedef int PEXT2_IRP_CONTEXT ;
typedef int NTSTATUS ;
typedef int LONGLONG ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,TYPE_2__*,TYPE_3__*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ,scalar_t__*,scalar_t__*) ;
 int FUNC_1 (int ,TYPE_2__*,TYPE_5__*) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;

NTSTATUS
FUNC_3(
    PEXT2_IRP_CONTEXT VAR_5,
    PEXT2_VCB VAR_6,
    PEXT2_MCB VAR_7,
    ULONG VAR_8,
    ULONG VAR_9,
    PLARGE_INTEGER VAR_10
)
{
    NTSTATUS VAR_11 = VAR_4;

    ULONG VAR_12 = 0;
    ULONG VAR_13 = 0;
    ULONG VAR_14 = 0;
    ULONG VAR_15 = 0;
    ULONG VAR_16 = 0;

    VAR_13 = VAR_9 - VAR_8;


    if (VAR_9 > VAR_6->max_data_blocks) {
        return VAR_3;
    }

    for (VAR_12 = 0; VAR_12 < VAR_1 && VAR_13; VAR_12++) {

        if (VAR_8 >= VAR_6->max_blocks_per_layer[VAR_12]) {

            VAR_16 += VAR_6->max_blocks_per_layer[VAR_12];
            VAR_8 -= VAR_6->max_blocks_per_layer[VAR_12];

        } else {


            if (VAR_12 == 0) {
                VAR_16 = VAR_15 = VAR_8;
            } else {
                VAR_15 = VAR_12 + VAR_2 - 1;
            }


            if (VAR_14 == 0) {
                if (VAR_7->Inode.i_block[VAR_15] != 0) {
                    VAR_14 = VAR_7->Inode.i_block[VAR_15];
                } else if (VAR_15 > 1) {
                    VAR_14 = VAR_7->Inode.i_block[VAR_15-1];
                }
            }


            VAR_11 = FUNC_0(
                         VAR_5,
                         VAR_6,
                         VAR_7,
                         VAR_16,
                         VAR_12,
                         VAR_8,
                         (VAR_12 == 0) ? (VAR_6->max_blocks_per_layer[VAR_12] - VAR_8) : 1,
                         (PULONG)&VAR_7->Inode.i_block[VAR_15],
                         &VAR_14,
                         &VAR_13
                     );
            if (!FUNC_2(VAR_11)) {
                break;
            }

            VAR_8 = 0;
            if (VAR_12 == 0) {
                VAR_16 = 0;
            }
            VAR_16 += VAR_6->max_blocks_per_layer[VAR_12];
        }
    }

    VAR_10->QuadPart = ((LONGLONG)(VAR_9 - VAR_13)) << VAR_0;


    FUNC_1(VAR_5, VAR_6, &VAR_7->Inode);

    return VAR_11;
}
