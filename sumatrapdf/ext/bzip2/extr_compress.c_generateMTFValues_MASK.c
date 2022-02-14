
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t UInt32 ;
typedef size_t UInt16 ;
typedef size_t UChar ;
struct TYPE_4__ {size_t* ptr; size_t* block; size_t* mtfv; int nInUse; size_t nblock; size_t* unseqToSeq; size_t nMTF; scalar_t__* mtfFreq; } ;
typedef size_t Int32 ;
typedef TYPE_1__ EState ;


 int FUNC_0 (int,char*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static
void FUNC_2 ( EState* VAR_3 )
{
   UChar VAR_4[256];
   Int32 VAR_5, VAR_6;
   Int32 VAR_7;
   Int32 VAR_8;
   Int32 VAR_9;
   UInt32* VAR_10 = VAR_3->ptr;
   UChar* VAR_11 = VAR_3->block;
   UInt16* VAR_12 = VAR_3->mtfv;

   FUNC_1 ( VAR_3 );
   VAR_9 = VAR_3->nInUse+1;

   for (VAR_5 = 0; VAR_5 <= VAR_9; VAR_5++) VAR_3->mtfFreq[VAR_5] = 0;

   VAR_8 = 0;
   VAR_7 = 0;
   for (VAR_5 = 0; VAR_5 < VAR_3->nInUse; VAR_5++) VAR_4[VAR_5] = (UChar) VAR_5;

   for (VAR_5 = 0; VAR_5 < VAR_3->nblock; VAR_5++) {
      UChar VAR_13;
      FUNC_0 ( VAR_8 <= VAR_5, "generateMTFValues(1)" );
      VAR_6 = VAR_10[VAR_5]-1; if (VAR_6 < 0) VAR_6 += VAR_3->nblock;
      VAR_13 = VAR_3->unseqToSeq[VAR_11[VAR_6]];
      FUNC_0 ( VAR_13 < VAR_3->nInUse, "generateMTFValues(2a)" );

      if (VAR_4[0] == VAR_13) {
         VAR_7++;
      } else {

         if (VAR_7 > 0) {
            VAR_7--;
            while (VAR_2) {
               if (VAR_7 & 1) {
                  VAR_12[VAR_8] = VAR_1; VAR_8++;
                  VAR_3->mtfFreq[VAR_1]++;
               } else {
                  VAR_12[VAR_8] = VAR_0; VAR_8++;
                  VAR_3->mtfFreq[VAR_0]++;
               }
               if (VAR_7 < 2) break;
               VAR_7 = (VAR_7 - 2) / 2;
            };
            VAR_7 = 0;
         }
         {
            register UChar VAR_14;
            register UChar* VAR_15;
            register UChar VAR_16;
            VAR_14 = VAR_4[1];
            VAR_4[1] = VAR_4[0];
            VAR_15 = &(VAR_4[1]);
            VAR_16 = VAR_13;
            while ( VAR_16 != VAR_14 ) {
               register UChar VAR_17;
               VAR_15++;
               VAR_17 = VAR_14;
               VAR_14 = *VAR_15;
               *VAR_15 = VAR_17;
            };
            VAR_4[0] = VAR_14;
            VAR_6 = VAR_15 - &(VAR_4[0]);
            VAR_12[VAR_8] = VAR_6+1; VAR_8++; VAR_3->mtfFreq[VAR_6+1]++;
         }

      }
   }

   if (VAR_7 > 0) {
      VAR_7--;
      while (VAR_2) {
         if (VAR_7 & 1) {
            VAR_12[VAR_8] = VAR_1; VAR_8++;
            VAR_3->mtfFreq[VAR_1]++;
         } else {
            VAR_12[VAR_8] = VAR_0; VAR_8++;
            VAR_3->mtfFreq[VAR_0]++;
         }
         if (VAR_7 < 2) break;
         VAR_7 = (VAR_7 - 2) / 2;
      };
      VAR_7 = 0;
   }

   VAR_12[VAR_8] = VAR_9; VAR_8++; VAR_3->mtfFreq[VAR_9]++;

   VAR_3->nMTF = VAR_8;
}
