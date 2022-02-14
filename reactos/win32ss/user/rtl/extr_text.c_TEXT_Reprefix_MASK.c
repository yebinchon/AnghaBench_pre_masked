
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int before; unsigned int under; unsigned int after; unsigned int len; } ;
typedef TYPE_1__ ellipsis_data ;
typedef scalar_t__ WCHAR ;


 scalar_t__ const VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1 (const WCHAR *VAR_2, unsigned int VAR_3,
                          const ellipsis_data *VAR_4)
{
    int VAR_5 = -1;
    unsigned int VAR_6;
    unsigned int VAR_7 = VAR_4->before + VAR_4->under + VAR_4->after;
    FUNC_0 (VAR_7 <= VAR_3);
    for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++, VAR_2++)
    {
        if (VAR_6 == (unsigned int) VAR_4->before)
        {

            if (VAR_3 < (unsigned int) VAR_4->under) break;
            VAR_2 += VAR_4->under;
            VAR_3 -= VAR_4->under;
            VAR_6 += VAR_4->under;
            if (!VAR_4->after) break;
        }
        if (!VAR_3) break;
        VAR_3--;
        if (*VAR_2++ == VAR_1 || *VAR_2 == VAR_0)
        {
            VAR_2++;
            if (!VAR_3) break;
            if (*VAR_2 != VAR_1)
                VAR_5 = (VAR_6 < (unsigned int) VAR_4->before || VAR_4->under == 0) ? VAR_6 : VAR_6 - VAR_4->under + VAR_4->len;

            VAR_3--;
        }
    }
    return VAR_5;
}
