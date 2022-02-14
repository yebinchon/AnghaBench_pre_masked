
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int filterstart; } ;
struct TYPE_5__ {int ppmd_escape; TYPE_1__ filters; } ;
struct TYPE_6__ {TYPE_2__ v3; } ;
struct ar_archive_rar_uncomp {int version; int start_new_table; TYPE_3__ state; int lzss; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct ar_archive_rar_uncomp*,int ,int) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static bool FUNC_3(struct ar_archive_rar_uncomp *VAR_2, uint8_t VAR_3)
{

    if (VAR_3 == 29 || VAR_3 == 36)
        VAR_3 = 3;
    else if (VAR_3 == 20 || VAR_3 == 26)
        VAR_3 = 2;
    else {
        FUNC_2("Unsupported compression version: %d", VAR_3);
        return 0;
    }
    if (VAR_2->version) {
        if (VAR_2->version != VAR_3) {
            FUNC_2("Compression version mismatch: %d != %d", VAR_3, VAR_2->version);
            return 0;
        }
        return 1;
    }
    FUNC_1(VAR_2, 0, sizeof(*VAR_2));
    VAR_2->start_new_table = 1;
    if (!FUNC_0(&VAR_2->lzss, VAR_0)) {
        FUNC_2("OOM during decompression");
        return 0;
    }
    if (VAR_3 == 3) {
        VAR_2->state.v3.ppmd_escape = 2;
        VAR_2->state.v3.filters.filterstart = VAR_1;
    }
    VAR_2->version = VAR_3;
    return 1;
}
