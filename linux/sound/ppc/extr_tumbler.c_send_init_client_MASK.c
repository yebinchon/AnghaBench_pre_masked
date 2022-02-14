
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmac_keywest {int client; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,unsigned int,unsigned int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct pmac_keywest *VAR_1, unsigned int *VAR_2)
{
 while (*VAR_2 > 0) {
  int VAR_3, VAR_4 = 10;
  do {
   VAR_3 = FUNC_1(VAR_1->client,
       VAR_2[0], VAR_2[1]);
   if (VAR_3 >= 0)
    break;
   FUNC_0("(W) i2c error %d\n", VAR_3);
   FUNC_2(10);
  } while (VAR_4--);
  if (VAR_3 < 0)
   return -VAR_0;
  VAR_2 += 2;
 }
 return 0;
}
