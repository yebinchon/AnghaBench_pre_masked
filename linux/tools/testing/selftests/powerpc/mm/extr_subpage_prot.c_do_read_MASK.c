__attribute__((used)) static inline void FUNC_0(const volatile void *VAR_0)
{
 int VAR_1;

 asm volatile("lwz %0,0(%1); twi 0,%0,0; isync;\n"
       : "=r" (VAR_1) : "r" (VAR_0) : "memory");
}
