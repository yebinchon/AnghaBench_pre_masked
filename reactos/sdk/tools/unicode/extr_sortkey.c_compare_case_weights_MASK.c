
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int const* VAR_3 ;
 int FUNC_0 (int const) ;

__attribute__((used)) static inline int FUNC_1(int VAR_4, const WCHAR *VAR_5, int VAR_6,
                                       const WCHAR *VAR_7, int VAR_8)
{
    unsigned int VAR_9, VAR_10;
    int VAR_11;





    while (VAR_6 > 0 && VAR_8 > 0)
    {
        if (VAR_4 & VAR_2)
        {
            int VAR_12 = 0;

            if (FUNC_0(*VAR_5) & (VAR_0 | VAR_1))
            {
                VAR_5++;
                VAR_6--;
                VAR_12 = 1;
            }
            if (FUNC_0(*VAR_7) & (VAR_0 | VAR_1))
            {
                VAR_7++;
                VAR_8--;
                VAR_12 = 1;
            }
            if (VAR_12) continue;
        }

        VAR_9 = VAR_3[VAR_3[*VAR_5 >> 8] + (*VAR_5 & 0xff)];
        VAR_10 = VAR_3[VAR_3[*VAR_7 >> 8] + (*VAR_7 & 0xff)];

        if (VAR_9 != (unsigned int)-1 && VAR_10 != (unsigned int)-1)
            VAR_11 = ((VAR_9 >> 4) & 0x0f) - ((VAR_10 >> 4) & 0x0f);
        else
            VAR_11 = *VAR_5 - *VAR_7;

        if (VAR_11) return VAR_11;

        VAR_5++;
        VAR_7++;
        VAR_6--;
        VAR_8--;
    }
    while (VAR_6 && !*VAR_5)
    {
        VAR_5++;
        VAR_6--;
    }
    while (VAR_8 && !*VAR_7)
    {
        VAR_7++;
        VAR_8--;
    }
    return VAR_6 - VAR_8;
}
