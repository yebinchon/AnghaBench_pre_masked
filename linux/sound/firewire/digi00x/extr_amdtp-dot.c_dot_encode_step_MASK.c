
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dot_state {int idx; int carry; scalar_t__ off; } ;
typedef int __be32 ;


 size_t VAR_0 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct dot_state *VAR_1, __be32 *const VAR_2)
{
 u8 * const VAR_3 = (u8 *) VAR_2;

 if (VAR_3[VAR_0] != 0x00) {
  VAR_1->off = 0;
  VAR_1->idx = VAR_3[VAR_0] ^ VAR_1->carry;
 }
 VAR_3[VAR_0] ^= VAR_1->carry;
 VAR_1->carry = FUNC_0(VAR_1->idx, ++(VAR_1->off));
}
