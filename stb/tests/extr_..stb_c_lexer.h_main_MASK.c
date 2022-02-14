
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ token; } ;
typedef TYPE_1__ stb_lexer ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (char*,int,int,int *) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,char*,char*,char*,int) ;
 int VAR_1 ;

int FUNC_10(int VAR_2, char **VAR_3)
{
   FILE *VAR_4 = FUNC_1("stb_c_lexer.h","rb");
   char *VAR_5 = (char *) FUNC_5(1 << 20);
   int VAR_6 = VAR_4 ? (int) FUNC_3(VAR_5, 1, 1<<20, VAR_4) : -1;
   stb_lexer VAR_7;
   if (VAR_6 < 0) {
      FUNC_2(VAR_1, "Error opening file\n");
      FUNC_4(VAR_5);
      FUNC_0(VAR_4);
      return 1;
   }
   FUNC_0(VAR_4);

   FUNC_9(&VAR_7, VAR_5, VAR_5+VAR_6, (char *) FUNC_5(0x10000), 0x10000);
   while (FUNC_8(&VAR_7)) {
      if (VAR_7.token == VAR_0) {
         FUNC_7("\n<<<PARSE ERROR>>>\n");
         break;
      }
      FUNC_6(&VAR_7);
      FUNC_7("  ");
   }
   return 0;
}
