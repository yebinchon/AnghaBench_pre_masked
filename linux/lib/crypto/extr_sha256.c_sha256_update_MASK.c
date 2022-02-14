
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sha256_state {int count; int * buf; int state; } ;


 int FUNC_0 (int *,int const*,unsigned int) ;
 int FUNC_1 (int ,int const*) ;

int FUNC_2(struct sha256_state *VAR_0, const u8 *VAR_1, unsigned int VAR_2)
{
 unsigned int VAR_3, VAR_4;
 const u8 *VAR_5;

 VAR_3 = VAR_0->count & 0x3f;
 VAR_0->count += VAR_2;
 VAR_4 = 0;
 VAR_5 = VAR_1;

 if ((VAR_3 + VAR_2) > 63) {
  if (VAR_3) {
   VAR_4 = -VAR_3;
   FUNC_0(VAR_0->buf + VAR_3, VAR_1, VAR_4 + 64);
   VAR_5 = VAR_0->buf;
  }

  do {
   FUNC_1(VAR_0->state, VAR_5);
   VAR_4 += 64;
   VAR_5 = VAR_1 + VAR_4;
  } while (VAR_4 + 63 < VAR_2);

  VAR_3 = 0;
 }
 FUNC_0(VAR_0->buf + VAR_3, VAR_5, VAR_2 - VAR_4);

 return 0;
}
