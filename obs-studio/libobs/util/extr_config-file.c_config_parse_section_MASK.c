
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strref {int len; int array; } ;
struct lexer {int offset; } ;
struct config_section {int items; } ;
struct config_item {int value; int name; } ;
struct TYPE_2__ {char* array; } ;
struct base_token {scalar_t__ type; TYPE_1__ text; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,struct strref*,struct strref*) ;
 int FUNC_3 (struct lexer*,struct strref*,char) ;
 int FUNC_4 (int,int *,struct config_item*) ;
 int FUNC_5 (char) ;
 scalar_t__ FUNC_6 (struct lexer*,struct base_token*,int ) ;
 int FUNC_7 (struct strref*) ;
 int FUNC_8 (struct strref*,TYPE_1__*) ;
 scalar_t__ FUNC_9 (struct strref*) ;

__attribute__((used)) static void FUNC_10(struct config_section *VAR_3,
     struct lexer *VAR_4)
{
 struct base_token VAR_5;

 while (FUNC_6(VAR_4, &VAR_5, VAR_2)) {
  struct strref VAR_6, VAR_7;

  while (VAR_5.type == VAR_1) {
   if (!FUNC_6(VAR_4, &VAR_5, VAR_2))
    return;
  }

  if (VAR_5.type == VAR_0) {
   if (*VAR_5.text.array == '#') {
    do {
     if (!FUNC_6(
          VAR_4, &VAR_5,
          VAR_2))
      return;
    } while (!FUNC_5(*VAR_5.text.array));

    continue;
   } else if (*VAR_5.text.array == '[') {
    VAR_4->offset--;
    return;
   }
  }

  FUNC_8(&VAR_6, &VAR_5.text);
  if (!FUNC_3(VAR_4, &VAR_6, '='))
   continue;

  FUNC_7(&VAR_7);
  FUNC_3(VAR_4, &VAR_7, 0);

  if (FUNC_9(&VAR_7)) {
   struct config_item VAR_8;
   VAR_8.name = FUNC_0(VAR_6.array, VAR_6.len);
   VAR_8.value = FUNC_1(1);
   FUNC_4(sizeof(struct config_item),
      &VAR_3->items, &VAR_8);
  } else {
   FUNC_2(&VAR_3->items, &VAR_6, &VAR_7);
  }
 }
}
