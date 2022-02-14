
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,float,int) ;
 int FUNC_2 () ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(short *VAR_1, float *VAR_2, int VAR_3)
{
   int VAR_4;
   FUNC_2();
   for (VAR_4=0; VAR_4 < VAR_3; ++VAR_4) {
      FUNC_0(VAR_0);
      int VAR_5 = FUNC_1(VAR_0, VAR_2[VAR_4],15);
      if ((unsigned int) (VAR_5 + 32768) > 65535)
         VAR_5 = VAR_5 < 0 ? -32768 : 32767;
      VAR_1[VAR_4] = VAR_5;
   }
}
