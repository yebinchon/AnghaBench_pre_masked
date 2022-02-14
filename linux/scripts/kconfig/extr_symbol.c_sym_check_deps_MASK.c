
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {int flags; } ;
struct property {int dummy; } ;
struct dep_stack {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dep_stack*,struct symbol*) ;
 int FUNC_1 () ;
 struct symbol* FUNC_2 (struct property*) ;
 struct symbol* FUNC_3 (struct symbol*) ;
 int FUNC_4 (struct symbol*) ;
 struct symbol* FUNC_5 (struct symbol*) ;
 struct property* FUNC_6 (struct symbol*) ;
 scalar_t__ FUNC_7 (struct symbol*) ;
 scalar_t__ FUNC_8 (struct symbol*) ;

struct symbol *FUNC_9(struct symbol *VAR_2)
{
 struct symbol *VAR_3;
 struct property *VAR_4;

 if (VAR_2->flags & VAR_0) {
  FUNC_4(VAR_2);
  return VAR_2;
 }
 if (VAR_2->flags & VAR_1)
  return ((void*)0);

 if (FUNC_8(VAR_2)) {
  struct dep_stack VAR_5;


  FUNC_0(&VAR_5, VAR_2);
  VAR_4 = FUNC_6(VAR_2);
  VAR_3 = FUNC_9(FUNC_2(VAR_4));
  FUNC_1();
 } else if (FUNC_7(VAR_2)) {
  VAR_3 = FUNC_3(VAR_2);
 } else {
  VAR_2->flags |= (VAR_0 | VAR_1);
  VAR_3 = FUNC_5(VAR_2);
  VAR_2->flags &= ~VAR_0;
 }

 return VAR_3;
}
