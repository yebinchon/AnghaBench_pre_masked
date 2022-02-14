
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int stb_perfect ;


 int FUNC_0 (int) ;
 int FUNC_1 (unsigned char**) ;
 int FUNC_2 (unsigned char**,int ,int) ;
 scalar_t__ FUNC_3 (unsigned char**,int) ;
 int FUNC_4 (char**) ;
 int FUNC_5 (char**) ;
 int FUNC_6 (char**,char*) ;
 int FUNC_7 (int *,unsigned int*,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int) ;

int FUNC_10(char VAR_0, char *VAR_1)
{
   static unsigned char VAR_2[8] = { 1,2,4,8,16,32,64,128 };
   static stb_perfect VAR_3;
   static unsigned char (*VAR_4)[256];
   static char ** VAR_5 = ((void*)0);

   int VAR_6 = FUNC_9(&VAR_3, (int)(size_t) VAR_1);
   if (VAR_6 < 0) {
      int VAR_7,VAR_8,VAR_9,VAR_10,VAR_11;

      if (VAR_1 == ((void*)0)) {
         FUNC_4(VAR_5);
         FUNC_1(VAR_4);
         VAR_4 = ((void*)0);
         FUNC_8(&VAR_3);
         return 0;
      }
      FUNC_6(VAR_5, VAR_1);
      FUNC_8(&VAR_3);
      VAR_9 = FUNC_7(&VAR_3, (unsigned int *) (char **) VAR_5, FUNC_5(VAR_5));
      FUNC_0(VAR_9 != 0);
      VAR_8 = (VAR_9+7) >> 3;
      VAR_4 = (unsigned char (*)[256]) FUNC_3(VAR_4, sizeof(*VAR_4) * VAR_8);
      FUNC_2(VAR_4, 0, sizeof(*VAR_4) * VAR_8);
      for (VAR_7=0; VAR_7 < FUNC_5(VAR_5); ++VAR_7) {
          VAR_8 = FUNC_9(&VAR_3, (int)(size_t) VAR_5[VAR_7]);
         FUNC_0(VAR_8 >= 0);
         VAR_9 = VAR_8 >> 3;
         VAR_11 = VAR_2[VAR_8&7];
         for (VAR_10=0; !VAR_10 || VAR_5[VAR_7][VAR_10]; ++VAR_10) {
            VAR_4[VAR_9][(unsigned char) VAR_5[VAR_7][VAR_10]] |= VAR_11;
         }
      }
      VAR_6 = FUNC_9(&VAR_3, (int)(size_t) VAR_1);
   }
   return VAR_4[VAR_6 >> 3][(unsigned char) VAR_0] & VAR_2[VAR_6 & 7];
}
