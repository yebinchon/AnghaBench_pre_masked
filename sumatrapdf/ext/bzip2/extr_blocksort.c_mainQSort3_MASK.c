
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UInt32 ;
typedef int UInt16 ;
typedef scalar_t__ UChar ;
typedef scalar_t__ Int32 ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (scalar_t__*,scalar_t__*,int *,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_8 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_9 (scalar_t__,scalar_t__) ;
 int FUNC_10 (scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static
void FUNC_11 ( UInt32* VAR_4,
                  UChar* VAR_5,
                  UInt16* VAR_6,
                  Int32 VAR_7,
                  Int32 VAR_8,
                  Int32 VAR_9,
                  Int32 VAR_10,
                  Int32* VAR_11 )
{
   Int32 VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
   Int32 VAR_19, VAR_20, VAR_21, VAR_22;

   Int32 VAR_23[VAR_2];
   Int32 VAR_24[VAR_2];
   Int32 VAR_25 [VAR_2];

   Int32 VAR_26[3];
   Int32 VAR_27[3];
   Int32 VAR_28 [3];

   VAR_19 = 0;
   FUNC_8 ( VAR_8, VAR_9, VAR_10 );

   while (VAR_19 > 0) {

      FUNC_1 ( VAR_19 < VAR_2 - 2, 1001 );

      FUNC_7 ( VAR_20, VAR_21, VAR_22 );
      if (VAR_21 - VAR_20 < VAR_1 ||
          VAR_22 > VAR_0) {
         FUNC_2 ( VAR_4, VAR_5, VAR_6, VAR_7, VAR_20, VAR_21, VAR_22, VAR_11 );
         if (*VAR_11 < 0) return;
         continue;
      }

      VAR_18 = (Int32)
            FUNC_3 ( VAR_5[VAR_4[ VAR_20 ]+VAR_22],
                    VAR_5[VAR_4[ VAR_21 ]+VAR_22],
                    VAR_5[VAR_4[ (VAR_20+VAR_21)>>1 ]+VAR_22] );

      VAR_12 = VAR_14 = VAR_20;
      VAR_13 = VAR_15 = VAR_21;

      while (VAR_3) {
         while (VAR_3) {
            if (VAR_12 > VAR_13) break;
            VAR_16 = ((Int32)VAR_5[VAR_4[VAR_12]+VAR_22]) - VAR_18;
            if (VAR_16 == 0) {
               FUNC_9(VAR_4[VAR_12], VAR_4[VAR_14]);
               VAR_14++; VAR_12++; continue;
            };
            if (VAR_16 > 0) break;
            VAR_12++;
         }
         while (VAR_3) {
            if (VAR_12 > VAR_13) break;
            VAR_16 = ((Int32)VAR_5[VAR_4[VAR_13]+VAR_22]) - VAR_18;
            if (VAR_16 == 0) {
               FUNC_9(VAR_4[VAR_13], VAR_4[VAR_15]);
               VAR_15--; VAR_13--; continue;
            };
            if (VAR_16 < 0) break;
            VAR_13--;
         }
         if (VAR_12 > VAR_13) break;
         FUNC_9(VAR_4[VAR_12], VAR_4[VAR_13]); VAR_12++; VAR_13--;
      }

      FUNC_0 ( VAR_13 == VAR_12-1, "mainQSort3(2)" );

      if (VAR_15 < VAR_14) {
         FUNC_8(VAR_20, VAR_21, VAR_22+1 );
         continue;
      }

      VAR_16 = FUNC_4(VAR_14-VAR_20, VAR_12-VAR_14); FUNC_10(VAR_20, VAR_12-VAR_16, VAR_16);
      VAR_17 = FUNC_4(VAR_21-VAR_15, VAR_15-VAR_13); FUNC_10(VAR_12, VAR_21-VAR_17+1, VAR_17);

      VAR_16 = VAR_20 + VAR_12 - VAR_14 - 1;
      VAR_17 = VAR_21 - (VAR_15 - VAR_13) + 1;

      VAR_26[0] = VAR_20; VAR_27[0] = VAR_16; VAR_28[0] = VAR_22;
      VAR_26[1] = VAR_17; VAR_27[1] = VAR_21; VAR_28[1] = VAR_22;
      VAR_26[2] = VAR_16+1; VAR_27[2] = VAR_17-1; VAR_28[2] = VAR_22+1;

      if (FUNC_5(0) < FUNC_5(1)) FUNC_6(0,1);
      if (FUNC_5(1) < FUNC_5(2)) FUNC_6(1,2);
      if (FUNC_5(0) < FUNC_5(1)) FUNC_6(0,1);

      FUNC_0 (FUNC_5(0) >= FUNC_5(1), "mainQSort3(8)" );
      FUNC_0 (FUNC_5(1) >= FUNC_5(2), "mainQSort3(9)" );

      FUNC_8 (VAR_26[0], VAR_27[0], VAR_28[0]);
      FUNC_8 (VAR_26[1], VAR_27[1], VAR_28[1]);
      FUNC_8 (VAR_26[2], VAR_27[2], VAR_28[2]);
   }
}
