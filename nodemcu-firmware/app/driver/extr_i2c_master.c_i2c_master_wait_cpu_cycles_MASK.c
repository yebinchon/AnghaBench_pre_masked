
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32 ;
typedef scalar_t__ sint16 ;



__attribute__((used)) static inline void FUNC_0(sint16 VAR_0)
{
    uint32 VAR_1;
    uint32 VAR_2;


    asm volatile("rsr %0, ccount":"=a"(VAR_1));
    do{
        asm volatile("rsr %0, ccount":"=a"(VAR_2));
    } while (VAR_2 - VAR_1 < VAR_0);
}
