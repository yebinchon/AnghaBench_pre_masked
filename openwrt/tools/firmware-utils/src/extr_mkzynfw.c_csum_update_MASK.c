
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct csum_state {int odd; int sum; int tmp; } ;



void
FUNC_0(uint8_t *VAR_0, uint32_t VAR_1, struct csum_state *VAR_2)
{
 if (VAR_1 == 0)
  return;

 if (VAR_2->odd) {
  VAR_2->sum += (VAR_2->tmp << 8) + VAR_0[0];
  if (VAR_2->sum > 0xFFFF) {
   VAR_2->sum += 1;
   VAR_2->sum &= 0xFFFF;
  }
  VAR_2->odd = 0;
  VAR_1--;
  VAR_0++;
 }

 for ( ; VAR_1 > 1; VAR_1 -= 2, VAR_0 +=2 ) {
  VAR_2->sum += (VAR_0[0] << 8) + VAR_0[1];
  if (VAR_2->sum > 0xFFFF) {
   VAR_2->sum += 1;
   VAR_2->sum &= 0xFFFF;
  }
 }

 if (VAR_1 == 1){
  VAR_2->tmp = VAR_0[0];
  VAR_2->odd = 1;
 }
}
