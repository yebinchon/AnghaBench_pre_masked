
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int superblock ;
struct TYPE_4__ {int sector_size; } ;
struct TYPE_5__ {TYPE_1__ superblock; } ;
typedef TYPE_2__ device_extension ;
typedef int device ;
typedef scalar_t__ ULONG ;


 int FUNC_0 (int *,scalar_t__,scalar_t__) ;
 int FUNC_1 (int,int ) ;
 scalar_t__* VAR_0 ;

void FUNC_2(device_extension* VAR_1, device* VAR_2, uint64_t VAR_3, uint64_t VAR_4) {
    int VAR_5;
    ULONG VAR_6 = (ULONG)FUNC_1(sizeof(superblock), VAR_1->superblock.sector_size);

    VAR_5 = 0;
    while (VAR_0[VAR_5] != 0) {
        if (VAR_0[VAR_5] + VAR_6 >= VAR_3 && VAR_0[VAR_5] < VAR_3 + VAR_4) {
            if (VAR_0[VAR_5] > VAR_3)
                FUNC_0(VAR_2, VAR_3, VAR_0[VAR_5] - VAR_3);

            if (VAR_4 <= VAR_0[VAR_5] + VAR_6 - VAR_3)
                return;

            VAR_4 -= VAR_0[VAR_5] + VAR_6 - VAR_3;
            VAR_3 = VAR_0[VAR_5] + VAR_6;
        } else if (VAR_0[VAR_5] > VAR_3 + VAR_4)
            break;

        VAR_5++;
    }

    FUNC_0(VAR_2, VAR_3, VAR_4);
}
