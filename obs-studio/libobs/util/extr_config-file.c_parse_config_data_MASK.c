
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strref {int len; int array; } ;
struct lexer {int dummy; } ;
struct darray {int dummy; } ;
struct config_section {int name; } ;
struct TYPE_2__ {char* array; } ;
struct base_token {scalar_t__ type; TYPE_1__ text; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct base_token*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct config_section*,struct lexer*) ;
 int FUNC_3 (struct lexer*,struct strref*,char) ;
 struct config_section* FUNC_4 (int,struct darray*) ;
 int FUNC_5 (char) ;
 scalar_t__ FUNC_6 (struct lexer*,struct base_token*,int ) ;
 int FUNC_7 (struct strref*) ;

__attribute__((used)) static void FUNC_8(struct darray *VAR_2, struct lexer *VAR_3)
{
 struct strref VAR_4;
 struct base_token VAR_5;

 FUNC_0(&VAR_5);

 while (FUNC_6(VAR_3, &VAR_5, VAR_1)) {
  struct config_section *VAR_6;

  while (VAR_5.type == VAR_0) {
   if (!FUNC_6(VAR_3, &VAR_5, VAR_1))
    return;
  }

  if (*VAR_5.text.array != '[') {
   while (!FUNC_5(*VAR_5.text.array)) {
    if (!FUNC_6(VAR_3, &VAR_5,
       VAR_1))
     return;
   }

   continue;
  }

  FUNC_7(&VAR_4);
  FUNC_3(VAR_3, &VAR_4, ']');
  if (!VAR_4.len)
   return;

  VAR_6 = FUNC_4(sizeof(struct config_section),
            VAR_2);
  VAR_6->name = FUNC_1(VAR_4.array, VAR_4.len);
  FUNC_2(VAR_6, VAR_3);
 }
}
