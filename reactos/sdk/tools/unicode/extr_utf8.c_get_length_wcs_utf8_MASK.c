
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;


 int VAR_0 ;
 unsigned int FUNC_0 (int const*,unsigned int) ;

__attribute__((used)) static inline int FUNC_1( int VAR_1, const WCHAR *VAR_2, unsigned int VAR_3 )
{
    int VAR_4;
    unsigned int VAR_5;

    for (VAR_4 = 0; VAR_3; VAR_3--, VAR_2++)
    {
        if (*VAR_2 < 0x80)
        {
            VAR_4++;
            continue;
        }
        if (*VAR_2 < 0x800)
        {
            VAR_4 += 2;
            continue;
        }
        if (!(VAR_5 = FUNC_0( VAR_2, VAR_3 )))
        {
            if (VAR_1 & VAR_0) return -2;
            continue;
        }
        if (VAR_5 < 0x10000)
            VAR_4 += 3;
        else
        {
            VAR_4 += 4;
            VAR_2++;
            VAR_3--;
        }
    }
    return VAR_4;
}
