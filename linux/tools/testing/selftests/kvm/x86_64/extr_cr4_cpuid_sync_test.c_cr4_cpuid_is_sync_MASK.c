
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;

__attribute__((used)) static inline bool FUNC_1(void)
{
 int VAR_2, VAR_3;
 uint32_t VAR_4, VAR_5, VAR_6, VAR_7;
 uint64_t VAR_8;

 VAR_2 = 0x1;
 VAR_3 = 0x0;
 __asm__ __volatile__("cpuid"
        : "=a"(VAR_4), "=b"(VAR_5), "=c"(VAR_6), "=d"(VAR_7)
        : "a"(VAR_2), "c"(VAR_3));

 VAR_8 = FUNC_0();

 return (!!(VAR_6 & VAR_1)) == (!!(VAR_8 & VAR_0));
}
