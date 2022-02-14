
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct csum_state {int odd; int tmp; int val; } ;


 scalar_t__ FUNC_0 (int) ;

void
FUNC_1(uint8_t *VAR_0, uint32_t VAR_1, struct csum_state *VAR_2)
{
 uint16_t VAR_3;

 if (VAR_2->odd) {
  VAR_3 = VAR_2->tmp + (VAR_0[0]<<8);
  VAR_2->val += FUNC_0(VAR_3);
  VAR_2->odd = 0;
  VAR_1--;
  VAR_0++;
 }

 for ( ; VAR_1 > 1; VAR_1 -= 2, VAR_0 +=2 ) {
  VAR_3 = VAR_0[0] + (VAR_0[1] << 8);
  VAR_2->val += FUNC_0(VAR_3);
 }

 if (VAR_1 == 1) {
  VAR_2->tmp = VAR_0[0];
  VAR_2->odd = 1;
 }
}
