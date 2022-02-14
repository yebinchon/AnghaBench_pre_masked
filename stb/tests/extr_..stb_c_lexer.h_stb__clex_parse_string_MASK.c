
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* string_storage; int string_storage_len; char* string; int string_len; } ;
typedef TYPE_1__ stb_lexer ;


 int VAR_0 ;
 int FUNC_0 (char*,char**) ;
 int FUNC_1 (TYPE_1__*,int,char*,char*) ;

__attribute__((used)) static int FUNC_2(stb_lexer *VAR_1, char *VAR_2, int VAR_3)
{
   char *VAR_4 = VAR_2;
   char VAR_5 = *VAR_2++;
   char *VAR_6 = VAR_1->string_storage;
   char *VAR_7 = VAR_1->string_storage + VAR_1->string_storage_len;
   while (*VAR_2 != VAR_5) {
      int VAR_8;
      if (*VAR_2 == '\\') {
         char *VAR_9;
         VAR_8 = FUNC_0(VAR_2, &VAR_9);
         if (VAR_8 < 0)
            return FUNC_1(VAR_1, VAR_0, VAR_4, VAR_9);
         VAR_2 = VAR_9;
      } else {

         VAR_8 = (unsigned char) *VAR_2++;
      }
      if (VAR_6+1 > VAR_7)
         return FUNC_1(VAR_1, VAR_0, VAR_4, VAR_2);

      *VAR_6++ = (char) VAR_8;
   }
   *VAR_6 = 0;
   VAR_1->string = VAR_1->string_storage;
   VAR_1->string_len = (int) (VAR_6 - VAR_1->string_storage);
   return FUNC_1(VAR_1, VAR_3, VAR_4, VAR_2);
}
