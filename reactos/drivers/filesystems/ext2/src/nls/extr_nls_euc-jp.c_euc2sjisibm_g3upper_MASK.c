
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char**) ;
 unsigned char** VAR_0 ;

__attribute__((used)) static inline int FUNC_1(unsigned char *VAR_1, const unsigned char VAR_2,
                                      const unsigned char VAR_3)
{
    int VAR_4;

    if (VAR_2 == 0xF3)
        VAR_4 = ((VAR_2 << 8) | VAR_3) - 0xF3F3;
    else
        VAR_4 = ((VAR_2 << 8) | VAR_3) - 0xF4A1 + 12;

    if ((VAR_4 < 0) || (VAR_4 >= FUNC_0(VAR_0)))
        return 0;

    VAR_1[0] = VAR_0[VAR_4][0];
    VAR_1[1] = VAR_0[VAR_4][1];

    return 3;
}
