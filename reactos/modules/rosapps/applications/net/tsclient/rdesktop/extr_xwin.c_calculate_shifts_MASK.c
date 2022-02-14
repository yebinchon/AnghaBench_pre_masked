
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;


 int FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(uint32 VAR_0, int *VAR_1, int *VAR_2)
{
 *VAR_2 = FUNC_0(VAR_0) - 1;
 VAR_0 >>= *VAR_2;
 *VAR_1 = 8 - FUNC_0(VAR_0 & ~(VAR_0 >> 1));
}
