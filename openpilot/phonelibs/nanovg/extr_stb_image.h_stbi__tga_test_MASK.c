
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int stbi__context ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static int FUNC_4(stbi__context *VAR_0)
{
   int VAR_1 = 0;
   int VAR_2, VAR_3;
   FUNC_1(VAR_0);
   VAR_3 = FUNC_1(VAR_0);
   if ( VAR_3 > 1 ) goto errorEnd;
   VAR_2 = FUNC_1(VAR_0);
   if ( VAR_3 == 1 ) {
      if (VAR_2 != 1 && VAR_2 != 9) goto errorEnd;
      FUNC_3(VAR_0,4);
      VAR_2 = FUNC_1(VAR_0);
      if ( (VAR_2 != 8) && (VAR_2 != 15) && (VAR_2 != 16) && (VAR_2 != 24) && (VAR_2 != 32) ) goto errorEnd;
      FUNC_3(VAR_0,4);
   } else {
      if ( (VAR_2 != 2) && (VAR_2 != 3) && (VAR_2 != 10) && (VAR_2 != 11) ) goto errorEnd;
      FUNC_3(VAR_0,9);
   }
   if ( FUNC_0(VAR_0) < 1 ) goto errorEnd;
   if ( FUNC_0(VAR_0) < 1 ) goto errorEnd;
   VAR_2 = FUNC_1(VAR_0);
   if ( (VAR_3 == 1) && (VAR_2 != 8) && (VAR_2 != 16) ) goto errorEnd;
   if ( (VAR_2 != 8) && (VAR_2 != 15) && (VAR_2 != 16) && (VAR_2 != 24) && (VAR_2 != 32) ) goto errorEnd;

   VAR_1 = 1;

errorEnd:
   FUNC_2(VAR_0);
   return VAR_1;
}
