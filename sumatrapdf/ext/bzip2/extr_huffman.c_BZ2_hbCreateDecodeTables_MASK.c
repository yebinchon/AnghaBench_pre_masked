
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t UChar ;
typedef size_t Int32 ;


 size_t VAR_0 ;

void FUNC_0 ( Int32 *VAR_1,
                                Int32 *VAR_2,
                                Int32 *VAR_3,
                                UChar *VAR_4,
                                Int32 VAR_5,
                                Int32 VAR_6,
                                Int32 VAR_7 )
{
   Int32 VAR_8, VAR_9, VAR_10, VAR_11;

   VAR_8 = 0;
   for (VAR_9 = VAR_5; VAR_9 <= VAR_6; VAR_9++)
      for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++)
         if (VAR_4[VAR_10] == VAR_9) { VAR_3[VAR_8] = VAR_10; VAR_8++; };

   for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) VAR_2[VAR_9] = 0;
   for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++) VAR_2[VAR_4[VAR_9]+1]++;

   for (VAR_9 = 1; VAR_9 < VAR_0; VAR_9++) VAR_2[VAR_9] += VAR_2[VAR_9-1];

   for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) VAR_1[VAR_9] = 0;
   VAR_11 = 0;

   for (VAR_9 = VAR_5; VAR_9 <= VAR_6; VAR_9++) {
      VAR_11 += (VAR_2[VAR_9+1] - VAR_2[VAR_9]);
      VAR_1[VAR_9] = VAR_11-1;
      VAR_11 <<= 1;
   }
   for (VAR_9 = VAR_5 + 1; VAR_9 <= VAR_6; VAR_9++)
      VAR_2[VAR_9] = ((VAR_1[VAR_9-1] + 1) << 1) - VAR_2[VAR_9];
}
