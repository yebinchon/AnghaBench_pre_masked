
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ep_var {char* mapping; char* type; char* name; } ;
struct ep_struct {int dummy; } ;
struct TYPE_2__ {size_t num; struct ep_var* array; } ;
struct ep_func {TYPE_1__ param_vars; } ;
struct effect_parser {int dummy; } ;
struct dstr {int dummy; } ;


 int FUNC_0 (struct dstr*,char*) ;
 int FUNC_1 (struct dstr*) ;
 struct ep_struct* FUNC_2 (struct effect_parser*,char*) ;
 int FUNC_3 (struct ep_struct*) ;

__attribute__((used)) static void FUNC_4(struct effect_parser *VAR_0, struct dstr *VAR_1,
     struct dstr *VAR_2, struct ep_func *VAR_3)
{
 size_t VAR_4;
 bool VAR_5 = FUNC_1(VAR_2);

 for (VAR_4 = 0; VAR_4 < VAR_3->param_vars.num; VAR_4++) {
  struct ep_var *VAR_6 = VAR_3->param_vars.array + VAR_4;
  struct ep_struct *VAR_7 = ((void*)0);
  bool VAR_8 = (VAR_6->mapping != ((void*)0));

  if (!VAR_8) {
   VAR_7 = FUNC_2(VAR_0, VAR_6->type);
   if (VAR_7)
    VAR_8 = FUNC_3(VAR_7);
  }

  if (VAR_8) {
   FUNC_0(VAR_1, VAR_6->type);
   FUNC_0(VAR_1, " ");
   FUNC_0(VAR_1, VAR_6->name);

   if (!VAR_7) {
    FUNC_0(VAR_1, " : ");
    FUNC_0(VAR_1, VAR_6->mapping);
   }

   if (!FUNC_1(VAR_2))
    FUNC_0(VAR_2, ", ");
   FUNC_0(VAR_2, VAR_6->name);
  }
 }

 if (!VAR_5)
  FUNC_0(VAR_2, ", ");
}
