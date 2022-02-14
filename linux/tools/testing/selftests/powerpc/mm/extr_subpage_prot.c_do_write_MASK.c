__attribute__((used)) static inline void FUNC_0(const volatile void *VAR_0)
{
 int VAR_1 = 0x1234567;

 asm volatile("stw %0,0(%1); sync; \n"
       : : "r" (VAR_1), "r" (VAR_0) : "memory");
}
