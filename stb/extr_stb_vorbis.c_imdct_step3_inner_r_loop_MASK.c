__attribute__((used)) static void FUNC_0(int VAR_0, float *VAR_1, int VAR_2, int VAR_3, float *VAR_4, int VAR_5)
{
   int VAR_6;
   float VAR_7, VAR_8;

   float *VAR_9 = VAR_1 + VAR_2;
   float *VAR_10 = VAR_9 + VAR_3;

   for (VAR_6=VAR_0 >> 2; VAR_6 > 0; --VAR_6) {
      VAR_7 = VAR_9[-0] - VAR_10[-0];
      VAR_8 = VAR_9[-1] - VAR_10[-1];
      VAR_9[-0] += VAR_10[-0];
      VAR_9[-1] += VAR_10[-1];
      VAR_10[-0] = (VAR_7)*VAR_4[0] - (VAR_8) * VAR_4[1];
      VAR_10[-1] = (VAR_8)*VAR_4[0] + (VAR_7) * VAR_4[1];

      VAR_4 += VAR_5;

      VAR_7 = VAR_9[-2] - VAR_10[-2];
      VAR_8 = VAR_9[-3] - VAR_10[-3];
      VAR_9[-2] += VAR_10[-2];
      VAR_9[-3] += VAR_10[-3];
      VAR_10[-2] = (VAR_7)*VAR_4[0] - (VAR_8) * VAR_4[1];
      VAR_10[-3] = (VAR_8)*VAR_4[0] + (VAR_7) * VAR_4[1];

      VAR_4 += VAR_5;

      VAR_7 = VAR_9[-4] - VAR_10[-4];
      VAR_8 = VAR_9[-5] - VAR_10[-5];
      VAR_9[-4] += VAR_10[-4];
      VAR_9[-5] += VAR_10[-5];
      VAR_10[-4] = (VAR_7)*VAR_4[0] - (VAR_8) * VAR_4[1];
      VAR_10[-5] = (VAR_8)*VAR_4[0] + (VAR_7) * VAR_4[1];

      VAR_4 += VAR_5;

      VAR_7 = VAR_9[-6] - VAR_10[-6];
      VAR_8 = VAR_9[-7] - VAR_10[-7];
      VAR_9[-6] += VAR_10[-6];
      VAR_9[-7] += VAR_10[-7];
      VAR_10[-6] = (VAR_7)*VAR_4[0] - (VAR_8) * VAR_4[1];
      VAR_10[-7] = (VAR_8)*VAR_4[0] + (VAR_7) * VAR_4[1];

      VAR_9 -= 8;
      VAR_10 -= 8;

      VAR_4 += VAR_5;
   }
}
