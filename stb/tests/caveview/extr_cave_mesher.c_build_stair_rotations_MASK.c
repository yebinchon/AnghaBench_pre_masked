
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int ** VAR_2 ;
 unsigned char* VAR_3 ;
 int ** VAR_4 ;
 size_t VAR_5 ;

void FUNC_1(int VAR_6, unsigned char *VAR_7)
{
   int VAR_8;


   for (VAR_8=0; VAR_8 < 6; ++VAR_8) {
      VAR_2[VAR_5][VAR_8] = VAR_2[VAR_6][VAR_8];
      VAR_4 [VAR_5][VAR_8] = VAR_4 [VAR_6][VAR_8];
   }
   VAR_3[VAR_5] = (unsigned char) FUNC_0(VAR_0, 0, 0);
   VAR_3[ VAR_6] = (unsigned char) FUNC_0(VAR_1, 0, 0);

   for (VAR_8=0; VAR_8 < 4; ++VAR_8) {
      VAR_7[0+VAR_8+8] = VAR_7[0+VAR_8] = VAR_6;
      VAR_7[4+VAR_8+8] = VAR_7[4+VAR_8] = VAR_5;
   }
   --VAR_5;
}
