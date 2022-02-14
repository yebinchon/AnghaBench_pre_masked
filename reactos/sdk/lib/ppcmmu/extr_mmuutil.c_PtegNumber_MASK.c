
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vaddr_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_1(vaddr_t VAR_2, int VAR_3)
{
    int VAR_4 = FUNC_0( (VAR_2 >> 28) & 0xf );
    int VAR_5 = VAR_4 & VAR_1;
    return ((((VAR_5 & 0x7ffff) ^ ((VAR_2 >> 12) & 0xffff)) ^ (VAR_3 ? -1 : 0)) & ((VAR_0 - 1) >> 3) & 0x3ff);
}
