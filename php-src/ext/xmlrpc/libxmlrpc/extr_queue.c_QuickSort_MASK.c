
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(void *VAR_0[], int VAR_1, int VAR_2,
                      int (*VAR_3)(const void *, const void *))
{
   int VAR_4 = 1, VAR_5, VAR_6;
   void *VAR_7, *VAR_8;

   if(VAR_1 < VAR_2) {
      VAR_5 = VAR_1;
      VAR_6 = VAR_2 + 1;

      VAR_7 = VAR_0[ VAR_1 ];

      while(VAR_4) {
         VAR_5++;
         while(VAR_3(VAR_0[VAR_5], VAR_7) < 0)
            VAR_5++;

         VAR_6--;
         while(VAR_3(VAR_0[VAR_6], VAR_7) > 0)
            VAR_6--;

         if(VAR_5 < VAR_6) {
            VAR_8 = VAR_0[VAR_5];
            VAR_0[VAR_5] = VAR_0[VAR_6];
            VAR_0[VAR_6] = VAR_8;
         }
         else VAR_4 = 0;
      }

      VAR_8 = VAR_0[VAR_1];
      VAR_0[VAR_1] = VAR_0[VAR_6];
      VAR_0[VAR_6] = VAR_8;

      FUNC_0(VAR_0, VAR_1, VAR_6-1, VAR_3);
      FUNC_0(VAR_0, VAR_6+1, VAR_2, VAR_3);
   }
}
