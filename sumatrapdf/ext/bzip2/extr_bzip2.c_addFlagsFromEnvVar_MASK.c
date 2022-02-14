
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t Int32 ;
typedef scalar_t__ Char ;
typedef int Cell ;


 int FUNC_0 (int *,scalar_t__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__* FUNC_1 (scalar_t__*) ;
 scalar_t__ FUNC_2 (size_t) ;
 scalar_t__* VAR_2 ;

__attribute__((used)) static
void FUNC_3 ( Cell** VAR_3, Char* VAR_4 )
{
   Int32 VAR_5, VAR_6, VAR_7;
   Char *VAR_8, *VAR_9;

   VAR_8 = FUNC_1(VAR_4);
   if (VAR_8 != ((void*)0)) {
      VAR_9 = VAR_8;
      VAR_5 = 0;
      while (VAR_1) {
         if (VAR_9[VAR_5] == 0) break;
         VAR_9 += VAR_5;
         VAR_5 = 0;
         while (FUNC_2((Int32)(VAR_9[0]))) VAR_9++;
         while (VAR_9[VAR_5] != 0 && !FUNC_2((Int32)(VAR_9[VAR_5]))) VAR_5++;
         if (VAR_5 > 0) {
            VAR_7 = VAR_5; if (VAR_7 > VAR_0-10) VAR_7 = VAR_0-10;
            for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) VAR_2[VAR_6] = VAR_9[VAR_6];
            VAR_2[VAR_7] = 0;
            FUNC_0(*VAR_3, VAR_2);
         }
      }
   }
}
