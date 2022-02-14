
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char*,unsigned char const*,int) ;
 int FUNC_1 (unsigned char*,int ,int) ;

__attribute__((used)) static int FUNC_2(unsigned char *VAR_0, int *VAR_1,
                   const unsigned char *VAR_2, int VAR_3,
                   const unsigned char *VAR_4, int VAR_5, int VAR_6)
{
    int VAR_7;
    unsigned char *VAR_8 = VAR_0;
    int VAR_9 = VAR_6;


    *VAR_8++ = 1;
    *VAR_8++ = VAR_6;

    FUNC_0(VAR_8, VAR_2, VAR_3);
    VAR_8 += VAR_3;

    if (VAR_4 != ((void*)0) && VAR_5 > 0) {
        FUNC_0(VAR_8, VAR_4, VAR_5);
        VAR_8 += VAR_5;
    }

    VAR_7 = VAR_8 - VAR_0;
    while (VAR_7 > VAR_9) {
        VAR_9 += VAR_6;
    }

    FUNC_1(VAR_8, 0, VAR_9 - VAR_7);
    *VAR_1 = VAR_9;
    return 1;
}
