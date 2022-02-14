
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int symbol ;


 int FUNC_0 (int const*) ;

extern int FUNC_1(const symbol * VAR_0) {
    int VAR_1 = FUNC_0(VAR_0);
    int VAR_2 = 0;
    while (VAR_1--) {
        symbol VAR_3 = *VAR_0++;
        if (VAR_3 >= 0xC0 || VAR_3 < 0x80) ++VAR_2;
    }
    return VAR_2;
}
