
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int stbi__context ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(stbi__context *VAR_0)
{
   int VAR_1;
   int VAR_2;
   FUNC_1(VAR_0);
   VAR_2 = FUNC_1(VAR_0);
   if ( VAR_2 > 1 ) return 0;
   VAR_2 = FUNC_1(VAR_0);
   if ( (VAR_2 != 1) && (VAR_2 != 2) && (VAR_2 != 3) && (VAR_2 != 9) && (VAR_2 != 10) && (VAR_2 != 11) ) return 0;
   FUNC_0(VAR_0);
   FUNC_0(VAR_0);
   FUNC_1(VAR_0);
   FUNC_0(VAR_0);
   FUNC_0(VAR_0);
   if ( FUNC_0(VAR_0) < 1 ) return 0;
   if ( FUNC_0(VAR_0) < 1 ) return 0;
   VAR_2 = FUNC_1(VAR_0);
   if ( (VAR_2 != 8) && (VAR_2 != 16) && (VAR_2 != 24) && (VAR_2 != 32) )
      VAR_1 = 0;
   else
      VAR_1 = 1;
   FUNC_2(VAR_0);
   return VAR_1;
}
