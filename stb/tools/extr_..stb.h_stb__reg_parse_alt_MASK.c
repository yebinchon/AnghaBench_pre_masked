
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int stb_uint16 ;
typedef int stb_matcher ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *) ;
 char* FUNC_3 (int *,int,char*,int*) ;

__attribute__((used)) static char *FUNC_4(stb_matcher *VAR_0, int VAR_1, char *VAR_2, stb_uint16 *VAR_3)
{
   stb_uint16 VAR_4 = VAR_1;
   stb_uint16 VAR_5;

   int VAR_6, VAR_7;

   VAR_6 = FUNC_2(VAR_0);
   FUNC_1(VAR_0, VAR_1, VAR_6);

   VAR_2 = FUNC_3(VAR_0, VAR_6, VAR_2, &VAR_4);
   if (VAR_2 == ((void*)0)) return ((void*)0);
   if (*VAR_2 == 0 || *VAR_2 == ')') {
      *VAR_3 = VAR_4;
      return VAR_2;
   }

   VAR_5 = VAR_4;
   VAR_7 = FUNC_2(VAR_0);

   FUNC_1(VAR_0, VAR_4, VAR_7);



   while(*VAR_2 && *VAR_2 != ')') {
      FUNC_0(*VAR_2 == '|');
      VAR_6 = FUNC_2(VAR_0);
      FUNC_1(VAR_0, VAR_1, VAR_6);
      VAR_2 = FUNC_3(VAR_0, VAR_6, VAR_2+1, &VAR_4);
      if (VAR_2 == ((void*)0))
         return ((void*)0);
      FUNC_1(VAR_0, VAR_4, VAR_7);
   }

   *VAR_3 = VAR_7;
   return VAR_2;
}
