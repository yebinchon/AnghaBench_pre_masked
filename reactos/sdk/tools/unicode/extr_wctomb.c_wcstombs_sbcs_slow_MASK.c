
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int def_char; } ;
struct sbcs_table {unsigned char* uni2cp_low; unsigned short* uni2cp_high; TYPE_1__ info; } ;
typedef int WCHAR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct sbcs_table const*,int,int,char) ;
 int FUNC_1 (int const*) ;

__attribute__((used)) static int FUNC_2( const struct sbcs_table *VAR_3, int VAR_4,
                               const WCHAR *VAR_5, unsigned int VAR_6,
                               char *VAR_7, unsigned int VAR_8,
                               const char *VAR_9, int *VAR_10 )
{
    const unsigned char * const VAR_11 = VAR_3->uni2cp_low;
    const unsigned short * const VAR_12 = VAR_3->uni2cp_high;
    unsigned char VAR_13;
    unsigned int VAR_14;
    int VAR_15;
    WCHAR VAR_16;

    if (!VAR_9)
        VAR_13 = VAR_3->info.def_char & 0xff;
    else
        VAR_13 = *VAR_9;

    if (!VAR_10) VAR_10 = &VAR_15;
    *VAR_10 = 0;

    for (VAR_14 = VAR_8; VAR_6 && VAR_14; VAR_7++, VAR_14--, VAR_5++, VAR_6--)
    {
        WCHAR VAR_17 = *VAR_5;

        if ((VAR_4 & VAR_0) && (VAR_6 > 1) && (VAR_16 = FUNC_1(VAR_5)))
        {

            *VAR_7 = VAR_11[VAR_12[VAR_16 >> 8] + (VAR_16 & 0xff)];
            if (FUNC_0( VAR_3, VAR_4, VAR_16, *VAR_7 ))
            {

                VAR_5++;
                VAR_6--;
                continue;
            }

            if (VAR_4 & VAR_1)
            {
                *VAR_7 = VAR_13;
                *VAR_10 = 1;
                VAR_5++;
                VAR_6--;
                continue;
            }
            if (VAR_4 & VAR_2)
            {
                VAR_5++;
                VAR_6--;
            }

        }

        *VAR_7 = VAR_11[VAR_12[VAR_17 >> 8] + (VAR_17 & 0xff)];
        if (!FUNC_0( VAR_3, VAR_4, VAR_17, *VAR_7 ))
        {
            *VAR_7 = VAR_13;
            *VAR_10 = 1;
        }
    }
    if (VAR_6) return -1;
    return VAR_8 - VAR_14;
}
