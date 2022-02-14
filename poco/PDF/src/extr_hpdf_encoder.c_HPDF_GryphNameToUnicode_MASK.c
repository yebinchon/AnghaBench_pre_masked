
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int unicode; int gryph_name; } ;
typedef TYPE_1__ HPDF_UnicodeGryphPair ;
typedef int HPDF_UNICODE ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char const*,int ) ;
 TYPE_1__* VAR_0 ;

HPDF_UNICODE
FUNC_2 (const char *VAR_1)
{
    const HPDF_UnicodeGryphPair* VAR_2 = VAR_0;

    FUNC_0 ((" HPDF_GryphNameToUnicode\n"));

    while (VAR_2->unicode != 0xFFFF) {
        if (FUNC_1 (VAR_1, VAR_2->gryph_name) == 0)
            return VAR_2->unicode;
        VAR_2++;
    }

    return 0x0000;
}
