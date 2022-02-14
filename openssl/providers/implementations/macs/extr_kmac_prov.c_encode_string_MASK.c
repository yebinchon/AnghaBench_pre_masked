
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned char*,unsigned char const*,int) ;

__attribute__((used)) static int FUNC_2(unsigned char *VAR_0, int *VAR_1,
                         const unsigned char *VAR_2, int VAR_3)
{
    if (VAR_2 == ((void*)0)) {
        *VAR_1 = 0;
    } else {
        int VAR_4, VAR_5, VAR_6;

        VAR_5 = 8 * VAR_3;
        VAR_6 = FUNC_0(VAR_5);
        if (VAR_6 > 0xFF)
            return 0;

        VAR_0[0] = VAR_6;
        for (VAR_4 = VAR_6; VAR_4 > 0; --VAR_4) {
            VAR_0[VAR_4] = (VAR_5 & 0xFF);
            VAR_5 >>= 8;
        }
        FUNC_1(VAR_0 + VAR_6 + 1, VAR_2, VAR_3);
        *VAR_1 = (1 + VAR_6 + VAR_3);
    }
    return 1;
}
