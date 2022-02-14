
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct madera {int type; } ;




 int VAR_0 ;

 int FUNC_0 (struct madera*,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct madera *VAR_1,
         unsigned int VAR_2,
         unsigned int *VAR_3)
{
 switch (VAR_1->type) {
 case 130:
 case 129:
 case 128:
  *VAR_3 = 0;
  return FUNC_0(VAR_1, VAR_2);
 default:
  if (VAR_2 > 150000000)
   return -VAR_0;


  *VAR_3 = VAR_2 / 15625;
  return 0;
 }
}
