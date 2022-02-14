
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct TYPE_5__ {scalar_t__ sector_size; } ;
struct TYPE_6__ {TYPE_1__ superblock; } ;
typedef TYPE_2__ device_extension ;
typedef int chunk ;
typedef scalar_t__ ULONG ;
typedef int RTL_BITMAP ;
typedef int NTSTATUS ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,scalar_t__*) ;
 scalar_t__ FUNC_3 (int *,scalar_t__,scalar_t__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;
 int FUNC_5 (TYPE_2__*,int *,scalar_t__,scalar_t__,scalar_t__,int *) ;

__attribute__((used)) static NTSTATUS FUNC_6(device_extension* VAR_2, chunk* VAR_3, uint64_t VAR_4, ULONG VAR_5, uint32_t* VAR_6, RTL_BITMAP* VAR_7, ULONG VAR_8) {
    NTSTATUS VAR_9;
    ULONG VAR_10, VAR_11;

    VAR_10 = FUNC_2(VAR_7, &VAR_11);

    while (VAR_10 != 0) {
        if (VAR_11 >= VAR_8)
            break;

        if (VAR_11 + VAR_10 >= VAR_8) {
            VAR_10 = VAR_8 - VAR_11;

            if (VAR_10 == 0)
                break;
        }

        do {
            ULONG VAR_12;

            if (VAR_10 * VAR_2->superblock.sector_size > VAR_0)
                VAR_12 = VAR_0 / VAR_2->superblock.sector_size;
            else
                VAR_12 = VAR_10;

            VAR_9 = FUNC_5(VAR_2, VAR_3, VAR_5, VAR_4 + FUNC_4(VAR_11, VAR_2->superblock.sector_size), VAR_12 * VAR_2->superblock.sector_size, &VAR_6[VAR_11]);
            if (!FUNC_1(VAR_9)) {
                FUNC_0("scrub_data_extent_dup returned %08x\n", VAR_9);
                return VAR_9;
            }

            VAR_10 -= VAR_12;
            VAR_11 += VAR_12;
        } while (VAR_10 > 0);

        VAR_10 = FUNC_3(VAR_7, VAR_11, &VAR_11);
    }

    return VAR_1;
}
