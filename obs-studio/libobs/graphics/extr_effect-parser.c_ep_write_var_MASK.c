
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ep_var {scalar_t__ var_type; char* type; char* name; char* mapping; } ;
struct dstr {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct dstr*,char*) ;

__attribute__((used)) static inline void FUNC_1(struct dstr *VAR_3, struct ep_var *VAR_4)
{
 if (VAR_4->var_type == VAR_0)
  FUNC_0(VAR_3, "inout ");
 else if (VAR_4->var_type == VAR_1)
  FUNC_0(VAR_3, "out ");
 else if (VAR_4->var_type == VAR_2)
  FUNC_0(VAR_3, "uniform ");



 FUNC_0(VAR_3, VAR_4->type);
 FUNC_0(VAR_3, " ");
 FUNC_0(VAR_3, VAR_4->name);

 if (VAR_4->mapping) {
  FUNC_0(VAR_3, " : ");
  FUNC_0(VAR_3, VAR_4->mapping);
 }
}
