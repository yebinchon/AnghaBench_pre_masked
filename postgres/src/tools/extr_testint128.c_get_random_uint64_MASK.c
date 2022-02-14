
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64 ;


 int FUNC_0 () ;

__attribute__((used)) static uint64
FUNC_1(void)
{
 uint64 VAR_0;

 VAR_0 = (uint64) (FUNC_0() & 0xFFFF) << 48;
 VAR_0 |= (uint64) (FUNC_0() & 0xFFFF) << 32;
 VAR_0 |= (uint64) (FUNC_0() & 0xFFFF) << 16;
 VAR_0 |= (uint64) (FUNC_0() & 0xFFFF);
 return VAR_0;
}
