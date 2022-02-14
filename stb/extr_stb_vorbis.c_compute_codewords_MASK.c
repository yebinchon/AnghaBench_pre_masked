
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8 ;
typedef scalar_t__ uint32 ;
typedef int available ;
struct TYPE_4__ {scalar_t__ sorted_entries; } ;
typedef TYPE_1__ Codebook ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,int,int ,int,scalar_t__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__*,int ,int) ;

__attribute__((used)) static int FUNC_4(Codebook *VAR_3, uint8 *VAR_4, int VAR_5, uint32 *VAR_6)
{
   int VAR_7,VAR_8,VAR_9=0;
   uint32 VAR_10[32];

   FUNC_3(VAR_10, 0, sizeof(VAR_10));

   for (VAR_8=0; VAR_8 < VAR_5; ++VAR_8) if (VAR_4[VAR_8] < VAR_1) break;
   if (VAR_8 == VAR_5) { FUNC_1(VAR_3->sorted_entries == 0); return VAR_2; }

   FUNC_0(VAR_3, 0, VAR_8, VAR_9++, VAR_4[VAR_8], VAR_6);

   for (VAR_7=1; VAR_7 <= VAR_4[VAR_8]; ++VAR_7)
      VAR_10[VAR_7] = 1U << (32-VAR_7);




   for (VAR_7=VAR_8+1; VAR_7 < VAR_5; ++VAR_7) {
      uint32 VAR_11;
      int VAR_12 = VAR_4[VAR_7], VAR_13;
      if (VAR_12 == VAR_1) continue;






      while (VAR_12 > 0 && !VAR_10[VAR_12]) --VAR_12;
      if (VAR_12 == 0) { return VAR_0; }
      VAR_11 = VAR_10[VAR_12];
      FUNC_1(VAR_12 >= 0 && VAR_12 < 32);
      VAR_10[VAR_12] = 0;
      FUNC_0(VAR_3, FUNC_2(VAR_11), VAR_7, VAR_9++, VAR_4[VAR_7], VAR_6);

      if (VAR_12 != VAR_4[VAR_7]) {
         FUNC_1(VAR_4[VAR_7] >= 0 && VAR_4[VAR_7] < 32);
         for (VAR_13=VAR_4[VAR_7]; VAR_13 > VAR_12; --VAR_13) {
            FUNC_1(VAR_10[VAR_13] == 0);
            VAR_10[VAR_13] = VAR_11 + (1 << (32-VAR_13));
         }
      }
   }
   return VAR_2;
}
