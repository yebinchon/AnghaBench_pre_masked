
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;



__attribute__((used)) static int FUNC_0(u8 *VAR_0, unsigned int VAR_1, unsigned int VAR_2)
{
 unsigned int VAR_3, VAR_4, VAR_5, VAR_6;


 for (VAR_6 = VAR_1, VAR_3 = VAR_2; VAR_6 > 0; VAR_6--) {
  VAR_4 = VAR_3 / 8;
  VAR_5 = VAR_3 % 8;
  VAR_0[VAR_4] &= ~((u8)1 << VAR_5);
  VAR_3++;
 }

 return 0;
}
