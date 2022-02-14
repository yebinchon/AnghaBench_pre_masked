
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {int name; } ;
struct hist_entry {struct symbol* parent; } ;
typedef int int64_t ;


 int FUNC_0 (struct symbol*,struct symbol*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int64_t
FUNC_2(struct hist_entry *VAR_0, struct hist_entry *VAR_1)
{
 struct symbol *VAR_2 = VAR_0->parent;
 struct symbol *VAR_3 = VAR_1->parent;

 if (!VAR_2 || !VAR_3)
  return FUNC_0(VAR_2, VAR_3);

 return FUNC_1(VAR_3->name, VAR_2->name);
}
