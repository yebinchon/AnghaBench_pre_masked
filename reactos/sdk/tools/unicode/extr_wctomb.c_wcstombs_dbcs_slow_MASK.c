
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dbcs_table {unsigned short* uni2cp_low; unsigned short* uni2cp_high; } ;
typedef int WCHAR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dbcs_table const*,char const*) ;
 scalar_t__ FUNC_1 (struct dbcs_table const*,int,int,unsigned short) ;
 int FUNC_2 (int const*) ;

__attribute__((used)) static int FUNC_3( const struct dbcs_table *VAR_3, int VAR_4,
                               const WCHAR *VAR_5, unsigned int VAR_6,
                               char *VAR_7, unsigned int VAR_8,
                               const char *VAR_9, int *VAR_10 )
{
    const unsigned short * const VAR_11 = VAR_3->uni2cp_low;
    const unsigned short * const VAR_12 = VAR_3->uni2cp_high;
    WCHAR VAR_13 = FUNC_0( VAR_3, VAR_9 );
    WCHAR VAR_14;
    int VAR_15, VAR_16;

    if (!VAR_10) VAR_10 = &VAR_16;
    *VAR_10 = 0;

    for (VAR_15 = VAR_8; VAR_6 && VAR_15; VAR_15--, VAR_6--, VAR_5++)
    {
        unsigned short VAR_17;
        WCHAR VAR_18 = *VAR_5;

        if ((VAR_4 & VAR_0) && (VAR_6 > 1) && (VAR_14 = FUNC_2(VAR_5)))
        {

            VAR_17 = VAR_11[VAR_12[VAR_14 >> 8] + (VAR_14 & 0xff)];

            if (FUNC_1( VAR_3, VAR_4, VAR_14, VAR_17 ))
            {

                VAR_5++;
                VAR_6--;
                goto output_char;
            }

            if (VAR_4 & VAR_1)
            {
                VAR_17 = VAR_13;
                *VAR_10 = 1;
                VAR_5++;
                VAR_6--;
                goto output_char;
            }
            if (VAR_4 & VAR_2)
            {
                VAR_5++;
                VAR_6--;
            }

        }

        VAR_17 = VAR_11[VAR_12[VAR_18 >> 8] + (VAR_18 & 0xff)];
        if (!FUNC_1( VAR_3, VAR_4, VAR_18, VAR_17 ))
        {
            VAR_17 = VAR_13;
            *VAR_10 = 1;
        }

    output_char:
        if (VAR_17 & 0xff00)
        {
            if (VAR_15 == 1) break;
            VAR_15--;
            *VAR_7++ = VAR_17 >> 8;
        }
        *VAR_7++ = (char)VAR_17;
    }
    if (VAR_6) return -1;
    return VAR_8 - VAR_15;
}
