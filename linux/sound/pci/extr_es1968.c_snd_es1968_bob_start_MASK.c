
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct es1968 {int bob_freq; } ;


 int VAR_0 ;
 int FUNC_0 (struct es1968*,int) ;
 int FUNC_1 (struct es1968*,int,int) ;

__attribute__((used)) static void FUNC_2(struct es1968 *VAR_1)
{
 int VAR_2;
 int VAR_3;



 for (VAR_2 = 5; VAR_2 < 12; VAR_2++)
  if (VAR_1->bob_freq > (VAR_0 >> (VAR_2 + 9)))
   break;


 VAR_3 = 1;
 while ((VAR_2 > 5) && (VAR_3 < 32)) {
  VAR_2--;
  VAR_3 <<= 1;
 }
 VAR_3 >>= 1;


 for (; VAR_3 < 31; VAR_3++)
  if (VAR_1->bob_freq >
      ((VAR_0 >> (VAR_2 + 9)) / (VAR_3 + 1))) break;


 if (VAR_3 == 0) {
  VAR_3++;
  if (VAR_2 > 5)
   VAR_2--;
 } else if (VAR_3 > 1)
  VAR_3--;

 FUNC_1(VAR_1, 6, 0x9000 | (VAR_2 << 5) | VAR_3);


 FUNC_1(VAR_1, 0x11, FUNC_0(VAR_1, 0x11) | 1);
 FUNC_1(VAR_1, 0x17, FUNC_0(VAR_1, 0x17) | 1);
}
