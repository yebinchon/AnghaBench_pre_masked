
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int stbi__context ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static int FUNC_4(stbi__context *VAR_0, int *VAR_1, int *VAR_2, int *VAR_3)
{
   int VAR_4;
   if (FUNC_1(VAR_0) != 0x38425053) {
       FUNC_2( VAR_0 );
       return 0;
   }
   if (FUNC_0(VAR_0) != 1) {
       FUNC_2( VAR_0 );
       return 0;
   }
   FUNC_3(VAR_0, 6);
   VAR_4 = FUNC_0(VAR_0);
   if (VAR_4 < 0 || VAR_4 > 16) {
       FUNC_2( VAR_0 );
       return 0;
   }
   *VAR_2 = FUNC_1(VAR_0);
   *VAR_1 = FUNC_1(VAR_0);
   if (FUNC_0(VAR_0) != 8) {
       FUNC_2( VAR_0 );
       return 0;
   }
   if (FUNC_0(VAR_0) != 3) {
       FUNC_2( VAR_0 );
       return 0;
   }
   *VAR_3 = 4;
   return 1;
}
