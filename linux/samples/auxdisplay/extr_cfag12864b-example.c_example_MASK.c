
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (unsigned char*) ;
 int FUNC_3 (unsigned short,unsigned short) ;
 int FUNC_4 (unsigned short,unsigned short) ;
 int FUNC_5 (unsigned short,unsigned short) ;
 int FUNC_6 (unsigned char*,int ,int) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static void FUNC_9(unsigned char VAR_3)
{
 unsigned short VAR_4, VAR_5;
 unsigned char VAR_6[VAR_1 * VAR_0];

 if (VAR_3 > VAR_2)
  return;

 FUNC_7("Example %i/%i - ", VAR_3, VAR_2);

 switch (VAR_3) {
 case 1:
  FUNC_7("Draw points setting bits");
  FUNC_0();
  for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4 += 2)
   for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5 += 2)
    FUNC_4(VAR_4, VAR_5);
  break;

 case 2:
  FUNC_7("Clear the LCD");
  FUNC_0();
  break;

 case 3:
  FUNC_7("Draw rows formatting a [128*64] matrix");
  FUNC_6(VAR_6, 0, VAR_1 * VAR_0);
  for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
   for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5 += 2)
    VAR_6[VAR_5 * VAR_1 + VAR_4] = 1;
  FUNC_2(VAR_6);
  break;

 case 4:
  FUNC_7("Fill the lcd");
  FUNC_1();
  break;

 case 5:
  FUNC_7("Draw columns unsetting bits");
  for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4 += 2)
   for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
    FUNC_5(VAR_4, VAR_5);
  break;

 case 6:
  FUNC_7("Do negative not-ing all bits");
  for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
   for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5 ++)
    FUNC_3(VAR_4, VAR_5);
  break;
 }

 FUNC_8(" - [Press Enter]");
}
