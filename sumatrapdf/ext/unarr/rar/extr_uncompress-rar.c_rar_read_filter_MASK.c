
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef size_t int64_t ;
struct TYPE_10__ {size_t filterstart; } ;
struct TYPE_11__ {TYPE_1__ filters; } ;
struct TYPE_12__ {TYPE_2__ v3; } ;
struct TYPE_13__ {TYPE_3__ state; } ;
struct TYPE_14__ {TYPE_4__ uncomp; } ;
typedef TYPE_5__ ar_archive_rar ;


 int FUNC_0 (int*) ;
 int* FUNC_1 (int) ;
 int FUNC_2 (TYPE_5__*,int*,int,int) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static bool FUNC_4(ar_archive_rar *VAR_0, bool (* VAR_1)(ar_archive_rar *VAR_2, uint8_t *VAR_3), int64_t *VAR_4)
{
    uint8_t VAR_5, VAR_6, *VAR_7;
    uint16_t VAR_8, VAR_9;

    if (!VAR_1(VAR_0, &VAR_5))
        return 0;
    VAR_8 = (VAR_5 & 0x07) + 1;
    if (VAR_8 == 7) {
        if (!VAR_1(VAR_0, &VAR_6))
            return 0;
        VAR_8 = VAR_6 + 7;
    }
    else if (VAR_8 == 8) {
        if (!VAR_1(VAR_0, &VAR_6))
            return 0;
        VAR_8 = VAR_6 << 8;
        if (!VAR_1(VAR_0, &VAR_6))
            return 0;
        VAR_8 |= VAR_6;
    }

    VAR_7 = FUNC_1(VAR_8);
    if (!VAR_7) {
        FUNC_3("OOM during decompression");
        return 0;
    }
    for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
        if (!VAR_1(VAR_0, &VAR_7[VAR_9])) {
            FUNC_0(VAR_7);
            return 0;
        }
    }
    if (!FUNC_2(VAR_0, VAR_7, VAR_8, VAR_5)) {
        FUNC_0(VAR_7);
        return 0;
    }
    FUNC_0(VAR_7);

    if (VAR_0->uncomp.state.v3.filters.filterstart < (size_t)*VAR_4)
        *VAR_4 = VAR_0->uncomp.state.v3.filters.filterstart;

    return 1;
}
