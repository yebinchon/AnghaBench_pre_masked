
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_6__ {int sector_size; } ;
struct TYPE_7__ {TYPE_1__ superblock; } ;
typedef TYPE_2__ device_extension ;
struct TYPE_8__ {int space_size; int space; } ;
typedef TYPE_3__ chunk ;
typedef int ULONG ;
typedef int RTL_BITMAP ;


 int FUNC_0 (int *,int*) ;
 int FUNC_1 (int *,int,int*) ;
 int FUNC_2 (int *,void*,int) ;
 int FUNC_3 (int *,int *,int,int) ;

__attribute__((used)) static void FUNC_4(device_extension* VAR_0, chunk* VAR_1, uint64_t VAR_2, void* VAR_3, uint64_t* VAR_4) {
    RTL_BITMAP VAR_5;
    uint32_t VAR_6, VAR_7, *VAR_8 = VAR_3;
    ULONG VAR_9, VAR_10;


    for (VAR_6 = 0; VAR_6 < VAR_0->superblock.sector_size / sizeof(uint32_t); VAR_6++) {
        VAR_8[VAR_6] = ~VAR_8[VAR_6];
    }

    VAR_7 = VAR_0->superblock.sector_size * 8;

    FUNC_2(&VAR_5, VAR_3, VAR_7);

    VAR_10 = 0;
    VAR_9 = FUNC_0(&VAR_5, &VAR_10);

    while (VAR_9 != 0) {
        uint64_t VAR_11, VAR_12;

        if (VAR_10 >= VAR_7)
            break;

        if (VAR_10 + VAR_9 >= VAR_7) {
            VAR_9 = VAR_7 - VAR_10;

            if (VAR_9 == 0)
                break;
        }

        VAR_11 = VAR_2 + (VAR_10 * VAR_0->superblock.sector_size);
        VAR_12 = VAR_0->superblock.sector_size * VAR_9;

        FUNC_3(&VAR_1->space, &VAR_1->space_size, VAR_11, VAR_12);
        VAR_10 += VAR_9;
        *VAR_4 += VAR_12;

        VAR_9 = FUNC_1(&VAR_5, VAR_10, &VAR_10);
    }
}
