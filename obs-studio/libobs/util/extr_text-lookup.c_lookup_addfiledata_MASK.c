
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct text_lookup {int top; } ;
struct text_leaf {int lookup; int value; } ;
struct strref {char* array; int len; } ;
struct lexer {int dummy; } ;


 struct text_leaf* FUNC_0 (int) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (struct lexer*) ;
 int FUNC_4 (struct lexer*) ;
 int FUNC_5 (struct lexer*,char const*) ;
 int FUNC_6 (int ,struct text_leaf*,int ) ;
 scalar_t__ FUNC_7 (struct lexer*,struct strref*) ;
 int FUNC_8 (struct lexer*) ;
 int FUNC_9 (struct strref*) ;

__attribute__((used)) static void FUNC_10(struct text_lookup *VAR_0,
          const char *VAR_1)
{
 struct lexer VAR_2;
 struct strref VAR_3, VAR_4;

 FUNC_4(&VAR_2);
 FUNC_5(&VAR_2, VAR_1);
 FUNC_9(&VAR_3);
 FUNC_9(&VAR_4);

 while (FUNC_7(&VAR_2, &VAR_3)) {
  struct text_leaf *VAR_5;
  bool VAR_6 = 0;

  if (*VAR_3.array == '\n')
   continue;
 getval:
  if (!FUNC_7(&VAR_2, &VAR_4))
   break;
  if (*VAR_4.array == '\n')
   continue;
  else if (!VAR_6 && *VAR_4.array == '=') {
   VAR_6 = 1;
   goto getval;
  }

  VAR_5 = FUNC_0(sizeof(struct text_leaf));
  VAR_5->lookup = FUNC_1(VAR_3.array, VAR_3.len);
  VAR_5->value = FUNC_2(VAR_4.array, VAR_4.len);

  FUNC_6(VAR_5->lookup, VAR_5, VAR_0->top);

  if (!FUNC_8(&VAR_2))
   break;
 }

 FUNC_3(&VAR_2);
}
