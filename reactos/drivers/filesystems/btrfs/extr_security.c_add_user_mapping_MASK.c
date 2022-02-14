
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef void* uint32_t ;
struct TYPE_4__ {int listentry; void* uid; TYPE_2__* sid; } ;
typedef TYPE_1__ uid_map ;
struct TYPE_5__ {int revision; int elements; int* auth; void** nums; } ;
typedef TYPE_2__ sid_header ;
typedef char WCHAR ;
typedef int ULONG ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 void* FUNC_1 (int ,int,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *,int *) ;
 int VAR_1 ;
 int FUNC_4 (char*,void*,unsigned int,int) ;
 int VAR_2 ;

void FUNC_5(WCHAR* VAR_3, ULONG VAR_4, uint32_t VAR_5) {
    unsigned int VAR_6, VAR_7;
    uint8_t VAR_8;
    uint64_t VAR_9;
    ULONG VAR_10;
    sid_header* VAR_11;
    uid_map* VAR_12;

    if (VAR_4 < 4 ||
        VAR_3[0] != 'S' ||
        VAR_3[1] != '-' ||
        VAR_3[2] != '1' ||
        VAR_3[3] != '-') {
        FUNC_0("invalid SID\n");
        return;
    }

    VAR_3 = &VAR_3[4];
    VAR_4 -= 4;

    VAR_8 = 0;
    for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
        if (VAR_3[VAR_6] == '-') {
            VAR_8++;
            VAR_3[VAR_6] = 0;
        }
    }

    VAR_10 = 8 + (VAR_8 * 4);
    VAR_11 = FUNC_1(VAR_1, VAR_10, VAR_0);
    if (!VAR_11) {
        FUNC_0("out of memory\n");
        return;
    }

    VAR_11->revision = 0x01;
    VAR_11->elements = VAR_8;

    VAR_7 = 0;
    while (VAR_4 > 0) {
        VAR_9 = 0;
        VAR_6 = 0;
        while (VAR_3[VAR_6] != '-' && VAR_6 < VAR_4) {
            if (VAR_3[VAR_6] >= '0' && VAR_3[VAR_6] <= '9') {
                VAR_9 *= 10;
                VAR_9 += VAR_3[VAR_6] - '0';
            } else
                break;

            VAR_6++;
        }

        VAR_6++;
        FUNC_4("val = %u, i = %u, ssl = %u\n", (uint32_t)VAR_9, VAR_6, VAR_4);

        if (VAR_7 == 0) {
            VAR_11->auth[0] = (uint8_t)((VAR_9 & 0xff0000000000) >> 40);
            VAR_11->auth[1] = (uint8_t)((VAR_9 & 0xff00000000) >> 32);
            VAR_11->auth[2] = (uint8_t)((VAR_9 & 0xff000000) >> 24);
            VAR_11->auth[3] = (uint8_t)((VAR_9 & 0xff0000) >> 16);
            VAR_11->auth[4] = (uint8_t)((VAR_9 & 0xff00) >> 8);
            VAR_11->auth[5] = VAR_9 & 0xff;
        } else {
            VAR_11->nums[VAR_7-1] = (uint32_t)VAR_9;
        }

        VAR_7++;

        if (VAR_4 > VAR_6) {
            VAR_4 -= VAR_6;

            VAR_3 = &VAR_3[VAR_6];
        } else
            break;
    }

    VAR_12 = FUNC_1(VAR_1, sizeof(uid_map), VAR_0);
    if (!VAR_12) {
        FUNC_0("out of memory\n");
        FUNC_2(VAR_11);
        return;
    }

    VAR_12->sid = VAR_11;
    VAR_12->uid = VAR_5;

    FUNC_3(&VAR_2, &VAR_12->listentry);
}
