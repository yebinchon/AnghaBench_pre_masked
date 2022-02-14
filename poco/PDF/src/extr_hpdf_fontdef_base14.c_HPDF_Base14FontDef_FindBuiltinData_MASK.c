
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ font_name; } ;
typedef size_t HPDF_UINT ;
typedef TYPE_1__ HPDF_Base14FontDefData ;


 TYPE_1__ const* VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,char const*) ;

const HPDF_Base14FontDefData*
FUNC_1 (const char *VAR_1)
{
    HPDF_UINT VAR_2 = 0;

    while (VAR_0[VAR_2].font_name) {
        if (FUNC_0 (VAR_0[VAR_2].font_name, VAR_1) == 0)
            break;

        VAR_2++;
    }

    return &VAR_0[VAR_2];
}
