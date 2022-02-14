
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char const* VAR_4 ;
 int FUNC_0 (char const) ;

__attribute__((used)) static inline int FUNC_1(int VAR_5, const WCHAR *VAR_6, int VAR_7,
                                          const WCHAR *VAR_8, int VAR_9)
{
    unsigned int VAR_10, VAR_11;
    int VAR_12;





    while (VAR_7 > 0 && VAR_9 > 0)
    {
        if (VAR_5 & VAR_2)
        {
            int VAR_13 = 0;

            if (FUNC_0(*VAR_6) & (VAR_0 | VAR_1))
            {
                VAR_6++;
                VAR_7--;
                VAR_13 = 1;
            }
            if (FUNC_0(*VAR_8) & (VAR_0 | VAR_1))
            {
                VAR_8++;
                VAR_9--;
                VAR_13 = 1;
            }
            if (VAR_13) continue;
        }




        if (!(VAR_5 & VAR_3))
        {
            if (*VAR_6 == '-' || *VAR_6 == '\'')
            {
                if (*VAR_8 != '-' && *VAR_8 != '\'')
                {
                    VAR_6++;
                    VAR_7--;
                    continue;
                }
            }
            else if (*VAR_8 == '-' || *VAR_8 == '\'')
            {
                VAR_8++;
                VAR_9--;
                continue;
            }
        }

        VAR_10 = VAR_4[VAR_4[*VAR_6 >> 8] + (*VAR_6 & 0xff)];
        VAR_11 = VAR_4[VAR_4[*VAR_8 >> 8] + (*VAR_8 & 0xff)];

        if (VAR_10 != (unsigned int)-1 && VAR_11 != (unsigned int)-1)
            VAR_12 = (VAR_10 >> 16) - (VAR_11 >> 16);
        else
            VAR_12 = *VAR_6 - *VAR_8;

        if (VAR_12) return VAR_12;

        VAR_6++;
        VAR_8++;
        VAR_7--;
        VAR_9--;
    }
    while (VAR_7 && !*VAR_6)
    {
        VAR_6++;
        VAR_7--;
    }
    while (VAR_9 && !*VAR_8)
    {
        VAR_8++;
        VAR_9--;
    }
    return VAR_7 - VAR_9;
}
