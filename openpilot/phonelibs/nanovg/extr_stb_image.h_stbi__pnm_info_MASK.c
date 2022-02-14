
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int stbi__context ;


 int FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(stbi__context *VAR_0, int *VAR_1, int *VAR_2, int *VAR_3)
{
   int VAR_4;
   char VAR_5, VAR_6, VAR_7;

   FUNC_4( VAR_0 );


   VAR_6 = (char) FUNC_1(VAR_0);
   VAR_7 = (char) FUNC_1(VAR_0);
   if (VAR_6 != 'P' || (VAR_7 != '5' && VAR_7 != '6')) {
       FUNC_4( VAR_0 );
       return 0;
   }

   *VAR_3 = (VAR_7 == '6') ? 3 : 1;

   VAR_5 = (char) FUNC_1(VAR_0);
   FUNC_3(VAR_0, &VAR_5);

   *VAR_1 = FUNC_2(VAR_0, &VAR_5);
   FUNC_3(VAR_0, &VAR_5);

   *VAR_2 = FUNC_2(VAR_0, &VAR_5);
   FUNC_3(VAR_0, &VAR_5);

   VAR_4 = FUNC_2(VAR_0, &VAR_5);

   if (VAR_4 > 255)
      return FUNC_0("max value > 255", "PPM image not 8-bit");
   else
      return 1;
}
