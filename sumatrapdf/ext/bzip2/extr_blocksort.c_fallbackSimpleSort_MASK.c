
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t UInt32 ;
typedef int Int32 ;



__attribute__((used)) static
__inline__
void FUNC_0 ( UInt32* VAR_0,
                          UInt32* VAR_1,
                          Int32 VAR_2,
                          Int32 VAR_3 )
{
   Int32 VAR_4, VAR_5, VAR_6;
   UInt32 VAR_7;

   if (VAR_2 == VAR_3) return;

   if (VAR_3 - VAR_2 > 3) {
      for ( VAR_4 = VAR_3-4; VAR_4 >= VAR_2; VAR_4-- ) {
         VAR_6 = VAR_0[VAR_4];
         VAR_7 = VAR_1[VAR_6];
         for ( VAR_5 = VAR_4+4; VAR_5 <= VAR_3 && VAR_7 > VAR_1[VAR_0[VAR_5]]; VAR_5 += 4 )
            VAR_0[VAR_5-4] = VAR_0[VAR_5];
         VAR_0[VAR_5-4] = VAR_6;
      }
   }

   for ( VAR_4 = VAR_3-1; VAR_4 >= VAR_2; VAR_4-- ) {
      VAR_6 = VAR_0[VAR_4];
      VAR_7 = VAR_1[VAR_6];
      for ( VAR_5 = VAR_4+1; VAR_5 <= VAR_3 && VAR_7 > VAR_1[VAR_0[VAR_5]]; VAR_5++ )
         VAR_0[VAR_5-1] = VAR_0[VAR_5];
      VAR_0[VAR_5-1] = VAR_6;
   }
}
