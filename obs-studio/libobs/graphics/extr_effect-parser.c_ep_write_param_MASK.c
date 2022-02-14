
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ep_param {int written; char* name; char* type; scalar_t__ array_count; scalar_t__ is_uniform; scalar_t__ is_const; } ;
struct dstr {int dummy; } ;
struct darray {int dummy; } ;


 int FUNC_0 (int,struct darray*,struct dstr*) ;
 int FUNC_1 (struct dstr*,char*) ;
 int FUNC_2 (struct dstr*,char*,scalar_t__) ;
 int FUNC_3 (struct dstr*,char*) ;

__attribute__((used)) static inline void FUNC_4(struct dstr *VAR_0, struct ep_param *VAR_1,
      struct darray *VAR_2)
{
 if (VAR_1->written)
  return;

 if (VAR_1->is_const) {
  FUNC_1(VAR_0, "const ");
 } else if (VAR_1->is_uniform) {
  struct dstr VAR_3;
  FUNC_3(&VAR_3, VAR_1->name);
  FUNC_0(sizeof(struct dstr), VAR_2, &VAR_3);

  FUNC_1(VAR_0, "uniform ");
 }

 FUNC_1(VAR_0, VAR_1->type);
 FUNC_1(VAR_0, " ");
 FUNC_1(VAR_0, VAR_1->name);

 if (VAR_1->array_count)
  FUNC_2(VAR_0, "[%u]", VAR_1->array_count);

 FUNC_1(VAR_0, ";\n");

 VAR_1->written = 1;
}
