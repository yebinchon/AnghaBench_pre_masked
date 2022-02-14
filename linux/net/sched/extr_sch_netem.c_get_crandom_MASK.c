
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u64 ;
typedef unsigned long u32 ;
struct crndstate {scalar_t__ rho; unsigned long long last; } ;


 unsigned long FUNC_0 () ;

__attribute__((used)) static u32 FUNC_1(struct crndstate *VAR_0)
{
 u64 VAR_1, VAR_2;
 unsigned long VAR_3;

 if (!VAR_0 || VAR_0->rho == 0)
  return FUNC_0();

 VAR_1 = FUNC_0();
 VAR_2 = (u64)VAR_0->rho + 1;
 VAR_3 = (VAR_1 * ((1ull<<32) - VAR_2) + VAR_0->last * VAR_2) >> 32;
 VAR_0->last = VAR_3;
 return VAR_3;
}
