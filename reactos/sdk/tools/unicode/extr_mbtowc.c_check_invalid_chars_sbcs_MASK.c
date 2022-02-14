
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int def_unicode_char; } ;
struct sbcs_table {int* cp2uni_glyphs; int* cp2uni; unsigned char* uni2cp_low; int const* uni2cp_high; TYPE_1__ info; } ;
typedef int WCHAR ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int const) ;

__attribute__((used)) static inline int FUNC_1( const struct sbcs_table *VAR_1, int VAR_2,
                                            const unsigned char *VAR_3, unsigned int VAR_4 )
{
    const WCHAR * const VAR_5 = (VAR_2 & VAR_0) ? VAR_1->cp2uni_glyphs : VAR_1->cp2uni;
    const WCHAR VAR_6 = VAR_1->info.def_unicode_char;
    const unsigned char VAR_7 = VAR_1->uni2cp_low[VAR_1->uni2cp_high[VAR_6 >> 8]
                                                     + (VAR_6 & 0xff)];
    while (VAR_4)
    {
        if ((VAR_5[*VAR_3] == VAR_6 && *VAR_3 != VAR_7) ||
            FUNC_0(VAR_5[*VAR_3])) break;
        VAR_3++;
        VAR_4--;
    }
    return VAR_4;
}
