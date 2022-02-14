
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* name; int loc_info; int stgclass; int * eval; int * attrs; int * type; } ;
typedef TYPE_1__ var_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int) ;

var_t *FUNC_2(char *VAR_1)
{
  var_t *VAR_2 = FUNC_1(sizeof(var_t));
  VAR_2->name = VAR_1;
  VAR_2->type = ((void*)0);
  VAR_2->attrs = ((void*)0);
  VAR_2->eval = ((void*)0);
  VAR_2->stgclass = VAR_0;
  FUNC_0(&VAR_2->loc_info);
  return VAR_2;
}
