
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int ULONG ;
struct TYPE_6__ {int* uuid; } ;
struct TYPE_5__ {int LowPart; } ;
typedef TYPE_1__ LARGE_INTEGER ;
typedef TYPE_2__ BTRFS_UUID ;


 TYPE_1__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(BTRFS_UUID* VAR_0) {
    LARGE_INTEGER VAR_1;
    uint8_t VAR_2;

    VAR_1 = FUNC_0(((void*)0));

    for (VAR_2 = 0; VAR_2 < 16; VAR_2+=2) {
        ULONG VAR_3 = FUNC_1(&VAR_1.LowPart);

        VAR_0->uuid[VAR_2] = (VAR_3 & 0xff00) >> 8;
        VAR_0->uuid[VAR_2+1] = VAR_3 & 0xff;
    }
}
