
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ep_var {int dummy; } ;
struct TYPE_2__ {size_t num; struct ep_var* array; } ;
struct ep_func {int written; char* ret_type; char* name; int contents; TYPE_1__ param_vars; } ;
struct effect_parser {int dummy; } ;
struct dstr {int dummy; } ;
struct darray {int dummy; } ;


 int FUNC_0 (struct dstr*,char*) ;
 int FUNC_1 (struct dstr*,int *) ;
 int FUNC_2 (struct effect_parser*,struct dstr*,struct ep_func*,struct darray*) ;
 int FUNC_3 (struct effect_parser*,struct dstr*,struct ep_func*,struct darray*) ;
 int FUNC_4 (struct effect_parser*,struct dstr*,struct ep_func*) ;
 int FUNC_5 (struct effect_parser*,struct dstr*,struct ep_func*) ;
 int FUNC_6 (struct dstr*,struct ep_var*) ;

__attribute__((used)) static void FUNC_7(struct effect_parser *VAR_0, struct dstr *VAR_1,
     struct ep_func *VAR_2, struct darray *VAR_3)
{
 size_t VAR_4;

 VAR_2->written = 1;

 FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3);
 FUNC_4(VAR_0, VAR_1, VAR_2);
 FUNC_5(VAR_0, VAR_1, VAR_2);
 FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3);



 FUNC_0(VAR_1, VAR_2->ret_type);
 FUNC_0(VAR_1, " ");
 FUNC_0(VAR_1, VAR_2->name);
 FUNC_0(VAR_1, "(");

 for (VAR_4 = 0; VAR_4 < VAR_2->param_vars.num; VAR_4++) {
  struct ep_var *VAR_5 = VAR_2->param_vars.array + VAR_4;

  if (VAR_4)
   FUNC_0(VAR_1, ", ");
  FUNC_6(VAR_1, VAR_5);
 }

 FUNC_0(VAR_1, ")\n");
 FUNC_1(VAR_1, &VAR_2->contents);
 FUNC_0(VAR_1, "\n");
}
