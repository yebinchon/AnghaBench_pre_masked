
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int key ;


 unsigned long FUNC_0 (unsigned long*,int) ;

unsigned int FUNC_1(const void *VAR_0) {
    unsigned long VAR_1 = (unsigned long)VAR_0;
    VAR_1 = FUNC_0(&VAR_1,sizeof(VAR_1));
    VAR_1 += ~(VAR_1 << 15);
    VAR_1 ^= (VAR_1 >> 10);
    VAR_1 += (VAR_1 << 3);
    VAR_1 ^= (VAR_1 >> 6);
    VAR_1 += ~(VAR_1 << 11);
    VAR_1 ^= (VAR_1 >> 16);
    return VAR_1;
}
