
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dbcs_table {unsigned short* uni2cp_low; unsigned short* uni2cp_high; } ;
typedef int WCHAR ;



__attribute__((used)) static inline int FUNC_0( const struct dbcs_table *VAR_0,
                                 const WCHAR *VAR_1, unsigned int VAR_2,
                                 char *VAR_3, unsigned int VAR_4 )
{
    const unsigned short * const VAR_5 = VAR_0->uni2cp_low;
    const unsigned short * const VAR_6 = VAR_0->uni2cp_high;
    int VAR_7;

    for (VAR_7 = VAR_4; VAR_2 && VAR_7; VAR_7--, VAR_2--, VAR_1++)
    {
        unsigned short VAR_8 = VAR_5[VAR_6[*VAR_1 >> 8] + (*VAR_1 & 0xff)];
        if (VAR_8 & 0xff00)
        {
            if (VAR_7 == 1) break;
            VAR_7--;
            *VAR_3++ = VAR_8 >> 8;
        }
        *VAR_3++ = (char)VAR_8;
    }
    if (VAR_2) return -1;
    return VAR_4 - VAR_7;
}
