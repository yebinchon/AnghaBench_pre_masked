
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ token_type; int token_terminator; int token_start; TYPE_1__* strval; } ;
struct TYPE_5__ {int data; } ;
typedef scalar_t__ JsonTokenType ;
typedef TYPE_2__ JsonLexContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (char*,int,int) ;
 char* FUNC_2 (int) ;
 char* FUNC_3 (int ) ;

__attribute__((used)) static inline bool
FUNC_4(JsonLexContext *VAR_1, JsonTokenType VAR_2, char **VAR_3)
{
 if (VAR_1->token_type == VAR_2)
 {
  if (VAR_3 != ((void*)0))
  {
   if (VAR_1->token_type == VAR_0)
   {
    if (VAR_1->strval != ((void*)0))
     *VAR_3 = FUNC_3(VAR_1->strval->data);
   }
   else
   {
    int VAR_4 = (VAR_1->token_terminator - VAR_1->token_start);
    char *VAR_5 = FUNC_2(VAR_4 + 1);

    FUNC_1(VAR_5, VAR_1->token_start, VAR_4);
    VAR_5[VAR_4] = '\0';
    *VAR_3 = VAR_5;
   }
  }
  FUNC_0(VAR_1);
  return 1;
 }
 return 0;
}
