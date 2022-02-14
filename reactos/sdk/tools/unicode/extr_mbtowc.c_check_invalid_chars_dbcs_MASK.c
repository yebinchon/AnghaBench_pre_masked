
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int def_unicode_char; } ;
struct dbcs_table {int* cp2uni; unsigned char* cp2uni_leadbytes; unsigned short* uni2cp_low; int const* uni2cp_high; TYPE_1__ info; } ;
typedef int WCHAR ;


 scalar_t__ FUNC_0 (int const) ;

__attribute__((used)) static inline int FUNC_1( const struct dbcs_table *VAR_0,
                                            const unsigned char *VAR_1, unsigned int VAR_2 )
{
    const WCHAR * const VAR_3 = VAR_0->cp2uni;
    const unsigned char * const VAR_4 = VAR_0->cp2uni_leadbytes;
    const WCHAR VAR_5 = VAR_0->info.def_unicode_char;
    const unsigned short VAR_6 = VAR_0->uni2cp_low[VAR_0->uni2cp_high[VAR_5 >> 8]
                                                      + (VAR_5 & 0xff)];
    while (VAR_2)
    {
        unsigned char VAR_7 = VAR_4[*VAR_1];
        if (VAR_7)
        {
            if (VAR_2 == 1) break;
            if (VAR_3[(VAR_7 << 8) + VAR_1[1]] == VAR_5 &&
                ((VAR_1[0] << 8) | VAR_1[1]) != VAR_6) break;
            VAR_1++;
            VAR_2--;
        }
        else if ((VAR_3[*VAR_1] == VAR_5 && *VAR_1 != VAR_6) ||
                 FUNC_0(VAR_3[*VAR_1])) break;
        VAR_1++;
        VAR_2--;
    }
    return VAR_2;
}
