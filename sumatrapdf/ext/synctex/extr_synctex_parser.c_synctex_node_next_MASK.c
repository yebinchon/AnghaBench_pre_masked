
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef TYPE_2__* synctex_node_t ;
struct TYPE_12__ {TYPE_1__* class; } ;
struct TYPE_11__ {scalar_t__ type; } ;


 TYPE_2__* FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;

synctex_node_t FUNC_3(synctex_node_t VAR_1) {
 if (FUNC_0(VAR_1)) {
  return FUNC_0(VAR_1);
 }
sibling:
 if (FUNC_2(VAR_1)) {
  return FUNC_2(VAR_1);
 }
 if ((VAR_1 = FUNC_1(VAR_1))) {
  if (VAR_1->class->type == VAR_0) {
   return ((void*)0);
  }
  goto sibling;
 }
 return ((void*)0);
}
