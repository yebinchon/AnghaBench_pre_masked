
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct rnd_state {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct rnd_state*) ;
 int FUNC_1 (int,int*) ;

void FUNC_2(struct rnd_state *VAR_1, void *VAR_2, size_t VAR_3)
{
 u8 *VAR_4 = VAR_2;

 while (VAR_3 >= sizeof(u32)) {
  FUNC_1(FUNC_0(VAR_1), (u32 *) VAR_4);
  VAR_4 += sizeof(u32);
  VAR_3 -= sizeof(u32);
 }

 if (VAR_3 > 0) {
  u32 VAR_5 = FUNC_0(VAR_1);
  do {
   *VAR_4++ = (u8) VAR_5;
   VAR_3--;
   VAR_5 >>= VAR_0;
  } while (VAR_3 > 0);
 }
}
