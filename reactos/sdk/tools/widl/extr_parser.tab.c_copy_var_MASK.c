
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* name; int loc_info; int stgclass; int eval; int attrs; int type; } ;
typedef TYPE_1__ var_t ;
typedef int map_attrs_filter_t ;


 int FUNC_0 (int ,int ) ;
 TYPE_1__* FUNC_1 (int) ;

__attribute__((used)) static var_t *FUNC_2(var_t *VAR_0, char *VAR_1, map_attrs_filter_t VAR_2)
{
  var_t *VAR_3 = FUNC_1(sizeof(var_t));
  VAR_3->name = VAR_1;
  VAR_3->type = VAR_0->type;
  VAR_3->attrs = FUNC_0(VAR_0->attrs, VAR_2);
  VAR_3->eval = VAR_0->eval;
  VAR_3->stgclass = VAR_0->stgclass;
  VAR_3->loc_info = VAR_0->loc_info;
  return VAR_3;
}
