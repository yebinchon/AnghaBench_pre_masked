
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_us16x08_eq_store {int*** val; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct snd_us16x08_eq_store* FUNC_0 (int,int ) ;

__attribute__((used)) static struct snd_us16x08_eq_store *FUNC_1(void)
{
 int VAR_4, VAR_5;
 struct snd_us16x08_eq_store *VAR_6;

 VAR_6 = FUNC_0(sizeof(*VAR_6), VAR_0);
 if (!VAR_6)
  return ((void*)0);

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
   VAR_6->val[VAR_5][0][VAR_4] = 0x0c;
   VAR_6->val[VAR_5][3][VAR_4] = 0x00;
   switch (VAR_5) {
   case 0:
    VAR_6->val[VAR_5][1][VAR_4] = 0x05;
    VAR_6->val[VAR_5][2][VAR_4] = 0xff;
    break;
   case 1:
    VAR_6->val[VAR_5][1][VAR_4] = 0x0e;
    VAR_6->val[VAR_5][2][VAR_4] = 0x02;
    break;
   case 2:
    VAR_6->val[VAR_5][1][VAR_4] = 0x1b;
    VAR_6->val[VAR_5][2][VAR_4] = 0x02;
    break;
   case 3:
    VAR_6->val[VAR_5][1][VAR_4] = 0x2f
     - VAR_1;
    VAR_6->val[VAR_5][2][VAR_4] = 0xff;
    break;
   }
  }
 }
 return VAR_6;
}
