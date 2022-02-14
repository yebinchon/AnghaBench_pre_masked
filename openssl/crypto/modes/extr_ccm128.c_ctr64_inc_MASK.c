
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;



__attribute__((used)) static void FUNC_0(unsigned char *VAR_0)
{
    unsigned int VAR_1 = 8;
    u8 VAR_2;

    VAR_0 += 8;
    do {
        --VAR_1;
        VAR_2 = VAR_0[VAR_1];
        ++VAR_2;
        VAR_0[VAR_1] = VAR_2;
        if (VAR_2)
            return;
    } while (VAR_1);
}
