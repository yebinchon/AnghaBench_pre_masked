
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;


 int VAR_0 ;
 unsigned int FUNC_0 (unsigned char,char const**,char const*) ;
 char FUNC_1 (char*) ;

__attribute__((used)) static inline int FUNC_2( int VAR_1, const char *VAR_2, int VAR_3 )
{
    int VAR_4 = 0;
    unsigned int VAR_5;
    WCHAR VAR_6[2];
    const char *VAR_7 = VAR_2 + VAR_3;

    VAR_6[0] = 0;
    while (VAR_2 < VAR_7)
    {
        unsigned char VAR_8 = *VAR_2++;
        if (VAR_8 < 0x80)
        {
            VAR_6[0] = VAR_8;
            VAR_4++;
            continue;
        }
        if ((VAR_5 = FUNC_0( VAR_8, &VAR_2, VAR_7 )) <= 0xffff)
        {
            if (VAR_6[0])
            {
                VAR_6[1] = VAR_5;
                if ((VAR_6[0] = FUNC_1( VAR_6 ))) continue;
            }
            VAR_6[0] = VAR_5;
            VAR_4++;
        }
        else if (VAR_5 <= 0x10ffff)
        {
            VAR_4 += 2;
            VAR_6[0] = 0;
        }
        else if (VAR_1 & VAR_0) return -2;

    }
    return VAR_4;
}
