
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(int VAR_0, float *VAR_1, int VAR_2, int VAR_3, float *VAR_4)
{
   float *VAR_5 = VAR_1 + VAR_2;
   float *VAR_6 = VAR_5 + VAR_3;
   int VAR_7;

   FUNC_0((VAR_0 & 3) == 0);
   for (VAR_7=(VAR_0>>2); VAR_7 > 0; --VAR_7) {
      float VAR_8, VAR_9;
      VAR_8 = VAR_5[ 0] - VAR_6[ 0];
      VAR_9 = VAR_5[-1] - VAR_6[-1];
      VAR_5[ 0] += VAR_6[ 0];
      VAR_5[-1] += VAR_6[-1];
      VAR_6[ 0] = VAR_8 * VAR_4[0] - VAR_9 * VAR_4[1];
      VAR_6[-1] = VAR_9 * VAR_4[0] + VAR_8 * VAR_4[1];
      VAR_4 += 8;

      VAR_8 = VAR_5[-2] - VAR_6[-2];
      VAR_9 = VAR_5[-3] - VAR_6[-3];
      VAR_5[-2] += VAR_6[-2];
      VAR_5[-3] += VAR_6[-3];
      VAR_6[-2] = VAR_8 * VAR_4[0] - VAR_9 * VAR_4[1];
      VAR_6[-3] = VAR_9 * VAR_4[0] + VAR_8 * VAR_4[1];
      VAR_4 += 8;

      VAR_8 = VAR_5[-4] - VAR_6[-4];
      VAR_9 = VAR_5[-5] - VAR_6[-5];
      VAR_5[-4] += VAR_6[-4];
      VAR_5[-5] += VAR_6[-5];
      VAR_6[-4] = VAR_8 * VAR_4[0] - VAR_9 * VAR_4[1];
      VAR_6[-5] = VAR_9 * VAR_4[0] + VAR_8 * VAR_4[1];
      VAR_4 += 8;

      VAR_8 = VAR_5[-6] - VAR_6[-6];
      VAR_9 = VAR_5[-7] - VAR_6[-7];
      VAR_5[-6] += VAR_6[-6];
      VAR_5[-7] += VAR_6[-7];
      VAR_6[-6] = VAR_8 * VAR_4[0] - VAR_9 * VAR_4[1];
      VAR_6[-7] = VAR_9 * VAR_4[0] + VAR_8 * VAR_4[1];
      VAR_4 += 8;
      VAR_5 -= 8;
      VAR_6 -= 8;
   }
}
