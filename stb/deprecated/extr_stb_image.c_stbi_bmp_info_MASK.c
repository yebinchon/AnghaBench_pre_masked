
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int stbi ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 char FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(stbi *VAR_0, int *VAR_1, int *VAR_2, int *VAR_3)
{
   int VAR_4;
   if (FUNC_2(VAR_0) != 'B' || FUNC_2(VAR_0) != 'M') {
       FUNC_4( VAR_0 );
       return 0;
   }
   FUNC_3(VAR_0,12);
   VAR_4 = FUNC_1(VAR_0);
   if (VAR_4 != 12 && VAR_4 != 40 && VAR_4 != 56 && VAR_4 != 108) {
       FUNC_4( VAR_0 );
       return 0;
   }
   if (VAR_4 == 12) {
      *VAR_1 = FUNC_0(VAR_0);
      *VAR_2 = FUNC_0(VAR_0);
   } else {
      *VAR_1 = FUNC_1(VAR_0);
      *VAR_2 = FUNC_1(VAR_0);
   }
   if (FUNC_0(VAR_0) != 1) {
       FUNC_4( VAR_0 );
       return 0;
   }
   *VAR_3 = FUNC_0(VAR_0) / 8;
   return 1;
}
