
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (float*) ;

__attribute__((used)) static void FUNC_1(int VAR_0, float *VAR_1, int VAR_2, float *VAR_3, int VAR_4)
{
   int VAR_5 = VAR_4 >> 3;
   float VAR_6 = VAR_3[0+VAR_5];
   float *VAR_7 = VAR_1 + VAR_2;
   float *VAR_8 = VAR_7 - 16 * VAR_0;

   while (VAR_7 > VAR_8) {
      float VAR_9,VAR_10;

      VAR_9 = VAR_7[-0] - VAR_7[-8];
      VAR_10 = VAR_7[-1] - VAR_7[-9];
      VAR_7[-0] = VAR_7[-0] + VAR_7[-8];
      VAR_7[-1] = VAR_7[-1] + VAR_7[-9];
      VAR_7[-8] = VAR_9;
      VAR_7[-9] = VAR_10 ;

      VAR_9 = VAR_7[ -2] - VAR_7[-10];
      VAR_10 = VAR_7[ -3] - VAR_7[-11];
      VAR_7[ -2] = VAR_7[ -2] + VAR_7[-10];
      VAR_7[ -3] = VAR_7[ -3] + VAR_7[-11];
      VAR_7[-10] = (VAR_9+VAR_10) * VAR_6;
      VAR_7[-11] = (VAR_10-VAR_9) * VAR_6;

      VAR_9 = VAR_7[-12] - VAR_7[ -4];
      VAR_10 = VAR_7[ -5] - VAR_7[-13];
      VAR_7[ -4] = VAR_7[ -4] + VAR_7[-12];
      VAR_7[ -5] = VAR_7[ -5] + VAR_7[-13];
      VAR_7[-12] = VAR_10;
      VAR_7[-13] = VAR_9;

      VAR_9 = VAR_7[-14] - VAR_7[ -6];
      VAR_10 = VAR_7[ -7] - VAR_7[-15];
      VAR_7[ -6] = VAR_7[ -6] + VAR_7[-14];
      VAR_7[ -7] = VAR_7[ -7] + VAR_7[-15];
      VAR_7[-14] = (VAR_9+VAR_10) * VAR_6;
      VAR_7[-15] = (VAR_9-VAR_10) * VAR_6;

      FUNC_0(VAR_7);
      FUNC_0(VAR_7-8);
      VAR_7 -= 16;
   }
}
