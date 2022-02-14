
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct ar_archive_rar_uncomp_v3 {scalar_t__ ppmd_escape; } ;
typedef int int64_t ;
struct TYPE_7__ {struct ar_archive_rar_uncomp_v3 v3; } ;
struct TYPE_8__ {int start_new_table; int lzss; TYPE_1__ state; } ;
struct TYPE_9__ {TYPE_2__ uncomp; } ;
typedef TYPE_3__ ar_archive_rar ;
typedef int LZSS ;
typedef scalar_t__ Byte ;


 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *,int,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct ar_archive_rar_uncomp_v3*,scalar_t__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,int ,int *) ;

__attribute__((used)) static bool FUNC_5(ar_archive_rar *VAR_1, int64_t *VAR_2)
{
    struct ar_archive_rar_uncomp_v3 *VAR_3 = &VAR_1->uncomp.state.v3;
    LZSS *VAR_4 = &VAR_1->uncomp.lzss;
    Byte VAR_5, VAR_6, VAR_7;
    int VAR_8;

    if (!FUNC_2(VAR_3, &VAR_5))
        return 0;
    if (VAR_5 != VAR_3->ppmd_escape) {
        FUNC_0(VAR_4, VAR_5);
        return 1;
    }

    if (!FUNC_2(VAR_3, &VAR_6))
        return 0;
    switch (VAR_6) {
    case 0:
        return FUNC_3(VAR_1);

    case 2:
        VAR_1->uncomp.start_new_table = 1;
        return 1;

    case 3:
        return FUNC_4(VAR_1, VAR_0, VAR_2);

    case 4:
        if (!FUNC_2(VAR_3, &VAR_6))
            return 0;
        VAR_8 = VAR_6 << 16;
        if (!FUNC_2(VAR_3, &VAR_6))
            return 0;
        VAR_8 |= VAR_6 << 8;
        if (!FUNC_2(VAR_3, &VAR_6))
            return 0;
        VAR_8 |= VAR_6;
        if (!FUNC_2(VAR_3, &VAR_7))
            return 0;
        FUNC_1(VAR_4, VAR_8 + 2, VAR_7 + 32);
        return 1;

    case 5:
        if (!FUNC_2(VAR_3, &VAR_7))
            return 0;
        FUNC_1(VAR_4, 1, VAR_7 + 4);
        return 1;

    default:
        FUNC_0(VAR_4, VAR_5);
        return 1;
    }
}
