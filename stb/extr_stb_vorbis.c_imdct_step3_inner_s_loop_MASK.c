__attribute__((used)) static void FUNC_0(int VAR_0, float *VAR_1, int VAR_2, int VAR_3, float *VAR_4, int VAR_5, int VAR_6)
{
   int VAR_7;
   float VAR_8 = VAR_4[0];
   float VAR_9 = VAR_4[0+1];
   float VAR_10 = VAR_4[0+VAR_5];
   float VAR_11 = VAR_4[0+VAR_5+1];
   float VAR_12 = VAR_4[0+VAR_5*2+0];
   float VAR_13 = VAR_4[0+VAR_5*2+1];
   float VAR_14 = VAR_4[0+VAR_5*3+0];
   float VAR_15 = VAR_4[0+VAR_5*3+1];

   float VAR_16,VAR_17;

   float *VAR_18 = VAR_1 +VAR_2;
   float *VAR_19 = VAR_18+VAR_3;

   for (VAR_7=VAR_0; VAR_7 > 0; --VAR_7) {
      VAR_16 = VAR_18[ 0] - VAR_19[ 0];
      VAR_17 = VAR_18[-1] - VAR_19[-1];
      VAR_18[ 0] = VAR_18[ 0] + VAR_19[ 0];
      VAR_18[-1] = VAR_18[-1] + VAR_19[-1];
      VAR_19[ 0] = (VAR_16) * VAR_8 - (VAR_17) * VAR_9;
      VAR_19[-1] = (VAR_17) * VAR_8 + (VAR_16) * VAR_9;

      VAR_16 = VAR_18[-2] - VAR_19[-2];
      VAR_17 = VAR_18[-3] - VAR_19[-3];
      VAR_18[-2] = VAR_18[-2] + VAR_19[-2];
      VAR_18[-3] = VAR_18[-3] + VAR_19[-3];
      VAR_19[-2] = (VAR_16) * VAR_10 - (VAR_17) * VAR_11;
      VAR_19[-3] = (VAR_17) * VAR_10 + (VAR_16) * VAR_11;

      VAR_16 = VAR_18[-4] - VAR_19[-4];
      VAR_17 = VAR_18[-5] - VAR_19[-5];
      VAR_18[-4] = VAR_18[-4] + VAR_19[-4];
      VAR_18[-5] = VAR_18[-5] + VAR_19[-5];
      VAR_19[-4] = (VAR_16) * VAR_12 - (VAR_17) * VAR_13;
      VAR_19[-5] = (VAR_17) * VAR_12 + (VAR_16) * VAR_13;

      VAR_16 = VAR_18[-6] - VAR_19[-6];
      VAR_17 = VAR_18[-7] - VAR_19[-7];
      VAR_18[-6] = VAR_18[-6] + VAR_19[-6];
      VAR_18[-7] = VAR_18[-7] + VAR_19[-7];
      VAR_19[-6] = (VAR_16) * VAR_14 - (VAR_17) * VAR_15;
      VAR_19[-7] = (VAR_17) * VAR_14 + (VAR_16) * VAR_15;

      VAR_18 -= VAR_6;
      VAR_19 -= VAR_6;
   }
}
