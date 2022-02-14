
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned int FUNC_0 (unsigned char,char const**,char const*) ;

__attribute__((used)) static inline int FUNC_1( int VAR_1, const char *VAR_2, int VAR_3 )
{
    int VAR_4 = 0;
    unsigned int VAR_5;
    const char *VAR_6 = VAR_2 + VAR_3;

    while (VAR_2 < VAR_6)
    {
        unsigned char VAR_7 = *VAR_2++;
        if (VAR_7 < 0x80)
        {
            VAR_4++;
            continue;
        }
        if ((VAR_5 = FUNC_0( VAR_7, &VAR_2, VAR_6 )) <= 0x10ffff)
        {
            if (VAR_5 > 0xffff) VAR_4++;
            VAR_4++;
        }
        else if (VAR_1 & VAR_0) return -2;

    }
    return VAR_4;
}
