
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_2__* synctex_node_t ;
struct TYPE_9__ {TYPE_1__* class; } ;
struct TYPE_8__ {scalar_t__ type; } ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;

int FUNC_3(synctex_node_t VAR_1){
 if (!VAR_1) {
  return 0;
 }
 if (FUNC_1(VAR_1)) {
result:
  return FUNC_0(VAR_1);
 }
 if ((VAR_1 = FUNC_2(VAR_1)) && (VAR_1->class->type != VAR_0)) {
  goto result;
 }
 return 0;
}
