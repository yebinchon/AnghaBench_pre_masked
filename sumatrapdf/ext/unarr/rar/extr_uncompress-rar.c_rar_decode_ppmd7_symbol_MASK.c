
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int super; } ;
struct ar_archive_rar_uncomp_v3 {TYPE_1__ range_dec; int ppmd7_context; } ;
typedef scalar_t__ Byte ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static inline bool FUNC_2(struct ar_archive_rar_uncomp_v3 *VAR_0, Byte *VAR_1)
{
    int VAR_2 = FUNC_0(&VAR_0->ppmd7_context, &VAR_0->range_dec.super);
    if (VAR_2 < 0) {
        FUNC_1("Invalid data in bitstream");
        return 0;
    }
    *VAR_1 = (Byte)VAR_2;
    return 1;
}
