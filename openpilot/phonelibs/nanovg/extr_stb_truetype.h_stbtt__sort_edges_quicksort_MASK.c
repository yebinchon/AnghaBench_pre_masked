
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int stbtt__edge ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void FUNC_1(stbtt__edge *VAR_0, int VAR_1)
{

   while (VAR_1 > 12) {
      stbtt__edge VAR_2;
      int VAR_3,VAR_4,VAR_5,VAR_6,VAR_7,VAR_8;


      VAR_6 = VAR_1 >> 1;
      VAR_3 = FUNC_0(&VAR_0[0],&VAR_0[VAR_6]);
      VAR_4 = FUNC_0(&VAR_0[VAR_6],&VAR_0[VAR_1-1]);

      if (VAR_3 != VAR_4) {

         int VAR_9;
         VAR_5 = FUNC_0(&VAR_0[0],&VAR_0[VAR_1-1]);


         VAR_9 = (VAR_5 == VAR_4) ? 0 : VAR_1-1;
         VAR_2 = VAR_0[VAR_9];
         VAR_0[VAR_9] = VAR_0[VAR_6];
         VAR_0[VAR_6] = VAR_2;
      }


      VAR_2 = VAR_0[0];
      VAR_0[0] = VAR_0[VAR_6];
      VAR_0[VAR_6] = VAR_2;


      VAR_7=1;
      VAR_8=VAR_1-1;
      for(;;) {


         for (;;++VAR_7) {
            if (!FUNC_0(&VAR_0[VAR_7], &VAR_0[0])) break;
         }
         for (;;--VAR_8) {
            if (!FUNC_0(&VAR_0[0], &VAR_0[VAR_8])) break;
         }

         if (VAR_7 >= VAR_8) break;
         VAR_2 = VAR_0[VAR_7];
         VAR_0[VAR_7] = VAR_0[VAR_8];
         VAR_0[VAR_8] = VAR_2;

         ++VAR_7;
         --VAR_8;
      }

      if (VAR_8 < (VAR_1-VAR_7)) {
         FUNC_1(VAR_0,VAR_8);
         VAR_0 = VAR_0+VAR_7;
         VAR_1 = VAR_1-VAR_7;
      } else {
         FUNC_1(VAR_0+VAR_7, VAR_1-VAR_7);
         VAR_1 = VAR_8;
      }
   }
}
