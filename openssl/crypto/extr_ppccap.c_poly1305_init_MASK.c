
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (void*,unsigned char const*) ;
 int FUNC_1 (void*,unsigned char const*) ;

int FUNC_2(void *VAR_8, const unsigned char VAR_9[16], void *VAR_10[2])
{
    if (VAR_0 & VAR_1) {
        FUNC_1(VAR_8, VAR_9);
        VAR_10[0] = (void*)(uintptr_t)VAR_5;
        VAR_10[1] = (void*)(uintptr_t)VAR_6;
    } else if (sizeof(size_t) == 4 && (VAR_0 & VAR_2)) {
        FUNC_0(VAR_8, VAR_9);
        VAR_10[0] = (void*)(uintptr_t)VAR_4;
        VAR_10[1] = (void*)(uintptr_t)VAR_7;
    } else {
        FUNC_1(VAR_8, VAR_9);
        VAR_10[0] = (void*)(uintptr_t)VAR_3;
        VAR_10[1] = (void*)(uintptr_t)VAR_6;
    }
    return 1;
}
