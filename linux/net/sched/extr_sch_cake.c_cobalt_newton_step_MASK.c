
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct cobalt_vars {int rec_inv_sqrt; scalar_t__ count; } ;



__attribute__((used)) static void FUNC_0(struct cobalt_vars *VAR_0)
{
 u32 VAR_1, VAR_2;
 u64 VAR_3;

 VAR_1 = VAR_0->rec_inv_sqrt;
 VAR_2 = ((u64)VAR_1 * VAR_1) >> 32;
 VAR_3 = (3LL << 32) - ((u64)VAR_0->count * VAR_2);

 VAR_3 >>= 2;
 VAR_3 = (VAR_3 * VAR_1) >> (32 - 2 + 1);

 VAR_0->rec_inv_sqrt = VAR_3;
}
