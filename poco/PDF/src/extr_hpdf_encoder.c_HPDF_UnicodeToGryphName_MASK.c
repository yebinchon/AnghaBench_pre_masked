
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ unicode; char const* gryph_name; } ;
typedef TYPE_1__ HPDF_UnicodeGryphPair ;
typedef scalar_t__ HPDF_UNICODE ;


 int FUNC_0 (char*) ;
 TYPE_1__* VAR_0 ;

const char*
FUNC_1 (HPDF_UNICODE VAR_1)
{
    const HPDF_UnicodeGryphPair* VAR_2 = VAR_0;

    FUNC_0 ((" HPDF_UnicodeToGryphName\n"));

    while (VAR_2->unicode <= VAR_1) {
        if (VAR_2->unicode == VAR_1)
            return VAR_2->gryph_name;
        VAR_2++;
    }

    return VAR_0[0].gryph_name;
}
