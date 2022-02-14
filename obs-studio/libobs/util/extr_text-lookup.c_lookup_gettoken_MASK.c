
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strref {scalar_t__ len; int array; } ;
struct lexer {char* offset; } ;
struct TYPE_2__ {char* array; scalar_t__ len; } ;
struct base_token {scalar_t__ type; TYPE_1__ text; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct base_token*) ;
 scalar_t__ FUNC_1 (struct lexer*,struct base_token*,int ) ;
 int FUNC_2 (struct lexer*,struct strref*) ;
 int FUNC_3 (struct strref*) ;
 int FUNC_4 (struct strref*,TYPE_1__*) ;

__attribute__((used)) static bool FUNC_5(struct lexer *VAR_2, struct strref *VAR_3)
{
 struct base_token VAR_4;

 FUNC_0(&VAR_4);
 FUNC_3(VAR_3);

 while (FUNC_1(VAR_2, &VAR_4, VAR_1)) {
  char VAR_5 = *VAR_4.text.array;

  if (!VAR_3->array) {

   if (VAR_5 == '#') {
    while (VAR_5 != '\n' && VAR_5 != 0)
     VAR_5 = *(++VAR_2->offset);
   } else if (VAR_4.type == VAR_0) {
    FUNC_4(VAR_3, &VAR_4.text);
    break;
   } else {
    FUNC_4(VAR_3, &VAR_4.text);
    if (VAR_5 == '"') {
     FUNC_2(VAR_2, VAR_3);
     break;
    } else if (VAR_5 == '=') {
     break;
    }
   }
  } else {
   if (VAR_4.type == VAR_0 ||
       *VAR_4.text.array == '=') {
    VAR_2->offset -= VAR_4.text.len;
    break;
   }

   if (VAR_5 == '#') {
    VAR_2->offset--;
    break;
   }

   VAR_3->len += VAR_4.text.len;
  }
 }

 return (VAR_3->len != 0);
}
