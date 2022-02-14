
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int* VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

int FUNC_2(int VAR_5, const WCHAR *VAR_6, int VAR_7, char *VAR_8, int VAR_9)
{
    WCHAR VAR_10[4];
    int VAR_11[4];
    char *VAR_12[4];
    const WCHAR *VAR_13 = VAR_6;
    int VAR_14 = VAR_7;

    VAR_11[0] = VAR_11[1] = VAR_11[2] = VAR_11[3] = 0;
    for (; VAR_7; VAR_7--, VAR_6++)
    {
        unsigned int VAR_15, VAR_16 = 1;
        VAR_10[0] = *VAR_6;
        if (VAR_16)
        {
            for (VAR_15 = 0; VAR_15 < VAR_16; VAR_15++)
            {
                WCHAR VAR_17 = VAR_10[VAR_15];
                unsigned int VAR_18;





                if ((VAR_5 & VAR_3) && (FUNC_0(VAR_17) & (VAR_0 | VAR_1)))
                    continue;

                if (VAR_5 & VAR_2) VAR_17 = FUNC_1(VAR_17);

                VAR_18 = VAR_4[VAR_4[VAR_17 >> 8] + (VAR_17 & 0xff)];
                if (VAR_18 != (unsigned int)-1)
                {
                    if (VAR_18 >> 16) VAR_11[0] += 2;
                    if ((VAR_18 >> 8) & 0xff) VAR_11[1]++;
                    if ((VAR_18 >> 4) & 0x0f) VAR_11[2]++;
                    if (VAR_18 & 1)
                    {
                        if (VAR_17 >> 8) VAR_11[3]++;
                        VAR_11[3]++;
                    }
                }
                else
                {
                    VAR_11[0] += 2;
                    if (VAR_17 >> 8) VAR_11[0]++;
                    if (VAR_17 & 0xff) VAR_11[0]++;
  }
            }
        }
    }

    if (!VAR_9)

        return VAR_11[0] + VAR_11[1] + VAR_11[2] + VAR_11[3] + 4 + 1;

    if (VAR_9 < VAR_11[0] + VAR_11[1] + VAR_11[2] + VAR_11[3] + 4 + 1)
        return 0;

    VAR_6 = VAR_13;
    VAR_7 = VAR_14;

    VAR_12[0] = VAR_8;
    VAR_12[1] = VAR_12[0] + VAR_11[0] + 1;
    VAR_12[2] = VAR_12[1] + VAR_11[1] + 1;
    VAR_12[3] = VAR_12[2] + VAR_11[2] + 1;

    for (; VAR_7; VAR_7--, VAR_6++)
    {
        unsigned int VAR_19, VAR_20 = 1;
        VAR_10[0] = *VAR_6;
        if (VAR_20)
        {
            for (VAR_19 = 0; VAR_19 < VAR_20; VAR_19++)
            {
                WCHAR VAR_21 = VAR_10[VAR_19];
                unsigned int VAR_22;





                if ((VAR_5 & VAR_3) && (FUNC_0(VAR_21) & (VAR_0 | VAR_1)))
                    continue;

                if (VAR_5 & VAR_2) VAR_21 = FUNC_1(VAR_21);

                VAR_22 = VAR_4[VAR_4[VAR_21 >> 8] + (VAR_21 & 0xff)];
                if (VAR_22 != (unsigned int)-1)
                {
                    WCHAR VAR_23;
                    if ((VAR_23 = VAR_22 >> 16))
                    {
                        *VAR_12[0]++ = VAR_23 >> 8;
                        *VAR_12[0]++ = VAR_23 & 0xff;
                    }

                    if ((VAR_23 = (VAR_22 >> 8) & 0xff)) *VAR_12[1]++ = VAR_23 + 1;

                    if ((VAR_23 = (VAR_22 >> 4) & 0x0f)) *VAR_12[2]++ = VAR_23 + 1;

                    if (VAR_22 & 1)
                    {
                        if (VAR_21 >> 8) *VAR_12[3]++ = VAR_21 >> 8;
                        if (VAR_21 & 0xff) *VAR_12[3]++ = VAR_21 & 0xff;
                    }
                }
                else
                {
                    *VAR_12[0]++ = 0xff;
                    *VAR_12[0]++ = 0xfe;
                    if (VAR_21 >> 8) *VAR_12[0]++ = VAR_21 >> 8;
                    if (VAR_21 & 0xff) *VAR_12[0]++ = VAR_21 & 0xff;
                }
            }
        }
    }

    *VAR_12[0] = '\1';
    *VAR_12[1] = '\1';
    *VAR_12[2] = '\1';
    *VAR_12[3]++ = '\1';
    *VAR_12[3] = 0;

    return VAR_12[3] - VAR_8;
}
