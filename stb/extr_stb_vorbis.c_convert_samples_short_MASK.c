
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,short*,int,float**,int,int) ;
 int FUNC_1 (short*,float*,int) ;
 int FUNC_2 (short*,int ,int) ;

__attribute__((used)) static void FUNC_3(int VAR_0, short **VAR_1, int VAR_2, int VAR_3, float **VAR_4, int VAR_5, int VAR_6)
{
   int VAR_7;
   if (VAR_0 != VAR_3 && VAR_0 <= 2 && VAR_3 <= 6) {
      static int VAR_8[3][2] = { {0}, {129}, {130, 128} };
      for (VAR_7=0; VAR_7 < VAR_0; ++VAR_7)
         FUNC_0(VAR_8[VAR_0][VAR_7], VAR_1[VAR_7]+VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
   } else {
      int VAR_9 = VAR_0 < VAR_3 ? VAR_0 : VAR_3;
      for (VAR_7=0; VAR_7 < VAR_9; ++VAR_7)
         FUNC_1(VAR_1[VAR_7]+VAR_2, VAR_4[VAR_7]+VAR_5, VAR_6);
      for ( ; VAR_7 < VAR_0; ++VAR_7)
         FUNC_2(VAR_1[VAR_7]+VAR_2, 0, sizeof(short) * VAR_6);
   }
}
