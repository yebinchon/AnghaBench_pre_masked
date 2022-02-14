
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct tk_read_base {int mult; int xtime_nsec; int shift; } ;


 int FUNC_0 () ;

__attribute__((used)) static inline u64 FUNC_1(const struct tk_read_base *VAR_0, u64 VAR_1)
{
 u64 VAR_2;

 VAR_2 = VAR_1 * VAR_0->mult + VAR_0->xtime_nsec;
 VAR_2 >>= VAR_0->shift;


 return VAR_2 + FUNC_0();
}
