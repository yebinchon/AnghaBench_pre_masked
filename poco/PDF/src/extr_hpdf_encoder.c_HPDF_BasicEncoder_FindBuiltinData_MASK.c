
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ encoding_name; } ;
typedef size_t HPDF_UINT ;
typedef TYPE_1__ HPDF_BuiltinEncodingData ;


 TYPE_1__ const* VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (scalar_t__,char const*) ;

const HPDF_BuiltinEncodingData*
FUNC_2 (const char *VAR_1)
{
    HPDF_UINT VAR_2 = 0;

    FUNC_0((" HPDF_BasicEncoder_FindBuiltinData\n"));

    while (VAR_0[VAR_2].encoding_name) {
        if (FUNC_1 (VAR_0[VAR_2].encoding_name,
                VAR_1) == 0)
            break;

        VAR_2++;
    }

    return &VAR_0[VAR_2];
}
