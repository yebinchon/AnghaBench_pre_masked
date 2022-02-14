
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(int VAR_1, float *VAR_2, float *VAR_3, float *VAR_4)
{
   int VAR_5 = VAR_1 >> 2, VAR_6 = VAR_1 >> 3;
   int VAR_7,VAR_8;

   for (VAR_7=VAR_8=0; VAR_7 < VAR_5; ++VAR_7,VAR_8+=2) {
      VAR_2[VAR_8 ] = (float) FUNC_0(4*VAR_7*VAR_0/VAR_1);
      VAR_2[VAR_8+1] = (float) -FUNC_1(4*VAR_7*VAR_0/VAR_1);
      VAR_3[VAR_8 ] = (float) FUNC_0((VAR_8+1)*VAR_0/VAR_1/2) * 0.5f;
      VAR_3[VAR_8+1] = (float) FUNC_1((VAR_8+1)*VAR_0/VAR_1/2) * 0.5f;
   }
   for (VAR_7=VAR_8=0; VAR_7 < VAR_6; ++VAR_7,VAR_8+=2) {
      VAR_4[VAR_8 ] = (float) FUNC_0(2*(VAR_8+1)*VAR_0/VAR_1);
      VAR_4[VAR_8+1] = (float) -FUNC_1(2*(VAR_8+1)*VAR_0/VAR_1);
   }
}
