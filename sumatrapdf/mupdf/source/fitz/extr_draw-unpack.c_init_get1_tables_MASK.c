
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char*,int) ;
 int** VAR_0 ;
 int** VAR_1 ;
 int** VAR_2 ;
 int** VAR_3 ;

__attribute__((used)) static void
FUNC_1(void)
{
 static int VAR_4 = 0;
 unsigned char VAR_5[1];
 int VAR_6, VAR_7, VAR_8;



 if (VAR_4)
  return;

 for (VAR_6 = 0; VAR_6 < 256; VAR_6++)
 {
  VAR_5[0] = VAR_6;
  for (VAR_7 = 0; VAR_7 < 8; VAR_7++)
  {
   VAR_8 = FUNC_0(VAR_5, VAR_7);

   VAR_0[VAR_6][VAR_7] = VAR_8;
   VAR_1[VAR_6][VAR_7 * 2] = VAR_8;
   VAR_1[VAR_6][VAR_7 * 2 + 1] = 255;

   VAR_2[VAR_6][VAR_7] = VAR_8 * 255;
   VAR_3[VAR_6][VAR_7 * 2] = VAR_8 * 255;
   VAR_3[VAR_6][VAR_7 * 2 + 1] = 255;
  }
 }

 VAR_4 = 1;
}
