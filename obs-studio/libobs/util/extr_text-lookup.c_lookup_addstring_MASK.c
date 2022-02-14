
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t len; char* array; } ;
struct text_node {TYPE_1__ str; } ;
struct text_leaf {int dummy; } ;


 int FUNC_0 (char const*,struct text_leaf*,struct text_node*) ;
 int FUNC_1 (struct text_node*,struct text_leaf*) ;
 int FUNC_2 (char const*,size_t,struct text_leaf*,struct text_node*) ;
 struct text_node* FUNC_3 (struct text_node*,char const) ;

__attribute__((used)) static void FUNC_4(const char *VAR_0, struct text_leaf *VAR_1,
        struct text_node *VAR_2)
{
 struct text_node *VAR_3;


 if (!VAR_0 || !*VAR_0) {
  FUNC_1(VAR_2, VAR_1);
  return;
 }

 VAR_3 = FUNC_3(VAR_2, *VAR_0);
 if (VAR_3) {
  size_t VAR_4;

  for (VAR_4 = 0; VAR_4 < VAR_3->str.len; VAR_4++) {
   char VAR_5 = VAR_3->str.array[VAR_4],
        VAR_6 = VAR_0[VAR_4];

   if (VAR_5 >= 'A' && VAR_5 <= 'Z')
    VAR_5 += 0x20;
   if (VAR_6 >= 'A' && VAR_6 <= 'Z')
    VAR_6 += 0x20;

   if (VAR_5 != VAR_6)
    break;
  }

  if (VAR_4 == VAR_3->str.len) {
   FUNC_4(VAR_0 + VAR_4, VAR_1, VAR_3);
   return;
  } else {
   FUNC_2(VAR_0, VAR_4, VAR_1, VAR_3);
  }
 } else {
  FUNC_0(VAR_0, VAR_1, VAR_2);
 }
}
