
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned short def_char; } ;
struct dbcs_table {unsigned char* cp2uni_leadbytes; scalar_t__* cp2uni; TYPE_1__ info; } ;
typedef scalar_t__ WCHAR ;


 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0( const struct dbcs_table *VAR_1, int VAR_2,
                                         WCHAR VAR_3, unsigned short VAR_4 )
{
    if ((VAR_2 & VAR_0) || VAR_4 == VAR_1->info.def_char)
    {

        if (VAR_4 & 0xff00)
        {
            unsigned char VAR_5 = VAR_1->cp2uni_leadbytes[VAR_4 >> 8];
            return (VAR_1->cp2uni[(VAR_5 << 8) + (VAR_4 & 0xff)] == VAR_3);
        }
        return (VAR_1->cp2uni[VAR_4 & 0xff] == VAR_3);
    }
    return 1;
}
