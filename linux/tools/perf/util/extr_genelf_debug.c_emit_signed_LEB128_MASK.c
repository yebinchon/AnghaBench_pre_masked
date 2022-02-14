
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ubyte ;
struct buffer_ext {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct buffer_ext*,int*,int) ;

__attribute__((used)) static void FUNC_1(struct buffer_ext *VAR_1, long VAR_2)
{
 int VAR_3 = 1;
 int VAR_4 = VAR_2 < 0;
 int VAR_5 = sizeof(long) * VAR_0;
 while (VAR_3) {
  ubyte VAR_6 = VAR_2 & 0x7F;
  VAR_2 >>= 7;
  if (VAR_4)
   VAR_2 |= - (1 << (VAR_5 - 7));
  if ((VAR_2 == 0 && !(VAR_6 & 0x40)) ||
      (VAR_2 == -1l && (VAR_6 & 0x40)))
   VAR_3 = 0;
  else
   VAR_6 |= 0x80;
  FUNC_0(VAR_1, &VAR_6, 1);
 }
}
