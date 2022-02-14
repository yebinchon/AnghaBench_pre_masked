
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UChar ;
typedef int Int32 ;
typedef scalar_t__ Bool ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int) ;

void FUNC_4 ( UChar *VAR_3,
                             Int32 *VAR_4,
                             Int32 VAR_5,
                             Int32 VAR_6 )
{




   Int32 VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
   Bool VAR_14;

   Int32 VAR_15 [ VAR_0 + 2 ];
   Int32 VAR_16 [ VAR_0 * 2 ];
   Int32 VAR_17 [ VAR_0 * 2 ];

   for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++)
      VAR_16[VAR_11+1] = (VAR_4[VAR_11] == 0 ? 1 : VAR_4[VAR_11]) << 8;

   while (VAR_2) {

      VAR_7 = VAR_5;
      VAR_8 = 0;

      VAR_15[0] = 0;
      VAR_16[0] = 0;
      VAR_17[0] = -2;

      for (VAR_11 = 1; VAR_11 <= VAR_5; VAR_11++) {
         VAR_17[VAR_11] = -1;
         VAR_8++;
         VAR_15[VAR_8] = VAR_11;
         FUNC_3(VAR_8);
      }

      FUNC_1( VAR_8 < (VAR_0+2), 2001 );

      while (VAR_8 > 1) {
         VAR_9 = VAR_15[1]; VAR_15[1] = VAR_15[VAR_8]; VAR_8--; FUNC_2(1);
         VAR_10 = VAR_15[1]; VAR_15[1] = VAR_15[VAR_8]; VAR_8--; FUNC_2(1);
         VAR_7++;
         VAR_17[VAR_9] = VAR_17[VAR_10] = VAR_7;
         VAR_16[VAR_7] = FUNC_0(VAR_16[VAR_9], VAR_16[VAR_10]);
         VAR_17[VAR_7] = -1;
         VAR_8++;
         VAR_15[VAR_8] = VAR_7;
         FUNC_3(VAR_8);
      }

      FUNC_1( VAR_7 < (VAR_0 * 2), 2002 );

      VAR_14 = VAR_1;
      for (VAR_11 = 1; VAR_11 <= VAR_5; VAR_11++) {
         VAR_12 = 0;
         VAR_13 = VAR_11;
         while (VAR_17[VAR_13] >= 0) { VAR_13 = VAR_17[VAR_13]; VAR_12++; }
         VAR_3[VAR_11-1] = VAR_12;
         if (VAR_12 > VAR_6) VAR_14 = VAR_2;
      }

      if (! VAR_14) break;
      for (VAR_11 = 1; VAR_11 <= VAR_5; VAR_11++) {
         VAR_12 = VAR_16[VAR_11] >> 8;
         VAR_12 = 1 + (VAR_12 / 2);
         VAR_16[VAR_11] = VAR_12 << 8;
      }
   }
}
