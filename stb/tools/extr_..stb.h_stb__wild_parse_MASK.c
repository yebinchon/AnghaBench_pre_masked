
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int stb_uint16 ;
typedef int stb_matcher ;


 int FUNC_0 (int *,int,int,int) ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char) ;
 int FUNC_4 (char) ;

__attribute__((used)) static char *FUNC_5(stb_matcher *VAR_0, int VAR_1, char *VAR_2, stb_uint16 *VAR_3)
{
   int VAR_4;
   stb_uint16 VAR_5;

   VAR_5 = FUNC_2(VAR_0);
   FUNC_1(VAR_0, VAR_1, VAR_5);

   while (*VAR_2) {
      switch (*VAR_2) {

         default:
            VAR_4 = FUNC_2(VAR_0);
            if (FUNC_4(*VAR_2) == FUNC_3(*VAR_2)) {
               FUNC_0(VAR_0, VAR_5, VAR_4, *VAR_2);
            } else {
               FUNC_0(VAR_0, VAR_5, VAR_4, FUNC_3(*VAR_2));
               FUNC_0(VAR_0, VAR_5, VAR_4, FUNC_4(*VAR_2));
            }
            VAR_5 = VAR_4;
            ++VAR_2;
            break;

         case '?':
            VAR_4 = FUNC_2(VAR_0);
            FUNC_0(VAR_0, VAR_5, VAR_4, -1);
            VAR_5 = VAR_4;
            ++VAR_2;
            break;

         case '*':
            VAR_4 = FUNC_2(VAR_0);
            FUNC_0(VAR_0, VAR_5, VAR_4, -1);
            FUNC_1(VAR_0, VAR_5, VAR_4);
            FUNC_1(VAR_0, VAR_4, VAR_5);
            VAR_5 = VAR_4;
            ++VAR_2;
            break;
      }
   }


   VAR_4 = FUNC_2(VAR_0);
   FUNC_0(VAR_0, VAR_5, VAR_4, 0);
   VAR_5 = VAR_4;

   *VAR_3 = VAR_5;
   return VAR_2;
}
