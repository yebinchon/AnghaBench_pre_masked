
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ name; } ;
typedef TYPE_1__ var_t ;
struct rconst {struct rconst* next; TYPE_1__* var; scalar_t__ name; } ;


 struct rconst** VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__) ;
 struct rconst* FUNC_2 (int) ;

__attribute__((used)) static var_t *FUNC_3(var_t *VAR_1)
{
  struct rconst *VAR_2;
  int VAR_3;
  if (!VAR_1->name) {
    FUNC_0("registering constant without name\n");
    return VAR_1;
  }
  VAR_3 = FUNC_1(VAR_1->name);
  VAR_2 = FUNC_2(sizeof(struct rconst));
  VAR_2->name = VAR_1->name;
  VAR_2->var = VAR_1;
  VAR_2->next = VAR_0[VAR_3];
  VAR_0[VAR_3] = VAR_2;
  return VAR_1;
}
