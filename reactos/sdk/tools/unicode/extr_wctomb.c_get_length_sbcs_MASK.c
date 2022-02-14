
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbcs_table {unsigned char* uni2cp_low; unsigned short* uni2cp_high; } ;
typedef int WCHAR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct sbcs_table const*,int,int,unsigned char) ;
 int FUNC_1 (int const*) ;

__attribute__((used)) static int FUNC_2( const struct sbcs_table *VAR_3, int VAR_4,
                            const WCHAR *VAR_5, unsigned int VAR_6, int *VAR_7 )
{
    const unsigned char * const VAR_8 = VAR_3->uni2cp_low;
    const unsigned short * const VAR_9 = VAR_3->uni2cp_high;
    int VAR_10, VAR_11;
    WCHAR VAR_12;

    if (!VAR_7) VAR_7 = &VAR_11;
    *VAR_7 = 0;

    for (VAR_10 = 0; VAR_6; VAR_10++, VAR_5++, VAR_6--)
    {
        WCHAR VAR_13 = *VAR_5;
        unsigned char VAR_14;

        if ((VAR_4 & VAR_0) && (VAR_6 > 1) && (VAR_12 = FUNC_1(VAR_5)))
        {

            VAR_14 = VAR_8[VAR_9[VAR_12 >> 8] + (VAR_12 & 0xff)];
            if (FUNC_0( VAR_3, VAR_4, VAR_12, VAR_14 ))
            {

                VAR_5++;
                VAR_6--;
                continue;
            }

            if (VAR_4 & VAR_1)
            {
                *VAR_7 = 1;
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
        if (!*VAR_7)
        {
            VAR_14 = VAR_8[VAR_9[VAR_13 >> 8] + (VAR_13 & 0xff)];
            *VAR_7 = !FUNC_0( VAR_3, VAR_4, VAR_13, VAR_14 );
        }
    }
    return VAR_10;
}
