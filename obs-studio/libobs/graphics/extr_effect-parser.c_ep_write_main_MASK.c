
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ep_func {char* ret_type; char* mapping; } ;
struct effect_parser {int dummy; } ;
struct dstr {int dummy; } ;


 int FUNC_0 (struct dstr*,char*) ;
 int FUNC_1 (struct dstr*,struct dstr*) ;
 int FUNC_2 (struct dstr*) ;
 int FUNC_3 (struct dstr*) ;
 int FUNC_4 (struct dstr*,struct dstr*) ;
 int FUNC_5 (struct effect_parser*,struct dstr*,struct dstr*,struct ep_func*) ;

__attribute__((used)) static void FUNC_6(struct effect_parser *VAR_0, struct dstr *VAR_1,
     struct ep_func *VAR_2, struct dstr *VAR_3)
{
 struct dstr VAR_4;
 struct dstr VAR_5;

 FUNC_3(&VAR_4);
 FUNC_4(&VAR_5, VAR_3);

 FUNC_0(VAR_1, "\n");
 FUNC_0(VAR_1, VAR_2->ret_type);
 FUNC_0(VAR_1, " main(");

 FUNC_5(VAR_0, VAR_1, &VAR_4, VAR_2);

 FUNC_0(VAR_1, ")");
 if (VAR_2->mapping) {
  FUNC_0(VAR_1, " : ");
  FUNC_0(VAR_1, VAR_2->mapping);
 }

 FUNC_0(VAR_1, "\n{\n\treturn ");
 FUNC_1(VAR_1, &VAR_5);
 FUNC_0(VAR_1, "\n}\n");

 FUNC_2(&VAR_5);
 FUNC_2(&VAR_4);
}
