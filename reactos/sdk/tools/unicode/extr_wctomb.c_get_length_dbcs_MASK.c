
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
                            const char *VAR_7, int *VAR_8 )
{
    const unsigned short * const VAR_9 = VAR_3->uni2cp_low;
    const unsigned short * const VAR_10 = VAR_3->uni2cp_high;
    WCHAR VAR_11, VAR_12;
    int VAR_13, VAR_14;

    if (!VAR_7 && !VAR_8 && !(VAR_4 & VAR_0))
    {
        for (VAR_13 = 0; VAR_6; VAR_6--, VAR_5++, VAR_13++)
        {
            if (VAR_9[VAR_10[*VAR_5 >> 8] + (*VAR_5 & 0xff)] & 0xff00) VAR_13++;
        }
        return VAR_13;
    }

    VAR_11 = FUNC_0( VAR_3, VAR_7 );
    if (!VAR_8) VAR_8 = &VAR_14;
    *VAR_8 = 0;
    for (VAR_13 = 0; VAR_6; VAR_13++, VAR_6--, VAR_5++)
    {
        unsigned short VAR_15;
        WCHAR VAR_16 = *VAR_5;

        if ((VAR_4 & VAR_0) && (VAR_6 > 1) && (VAR_12 = FUNC_2(VAR_5)))
        {

            VAR_15 = VAR_9[VAR_10[VAR_12 >> 8] + (VAR_12 & 0xff)];

            if (FUNC_1( VAR_3, VAR_4, VAR_12, VAR_15 ))
            {

                if (VAR_15 & 0xff00) VAR_13++;
                VAR_5++;
                VAR_6--;
                continue;
            }

            if (VAR_4 & VAR_1)
            {
                if (VAR_11 & 0xff00) VAR_13++;
                *VAR_8 = 1;
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

        VAR_15 = VAR_9[VAR_10[VAR_16 >> 8] + (VAR_16 & 0xff)];
        if (!FUNC_1( VAR_3, VAR_4, VAR_16, VAR_15 ))
        {
            VAR_15 = VAR_11;
            *VAR_8 = 1;
        }
        if (VAR_15 & 0xff00) VAR_13++;
    }
    return VAR_13;
}
