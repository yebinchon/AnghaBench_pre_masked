
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_2__* synctex_node_t ;
struct TYPE_8__ {TYPE_1__* class; } ;
struct TYPE_7__ {scalar_t__ type; } ;


 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;

int FUNC_2(synctex_node_t VAR_1){
 synctex_node_t VAR_2 = ((void*)0);
 if (!VAR_1) {
  return -1;
 }
 VAR_2 = FUNC_1(VAR_1);
 while(VAR_2) {
  VAR_1 = VAR_2;
  VAR_2 = FUNC_1(VAR_1);
 }
 if (VAR_1->class->type == VAR_0) {
  return FUNC_0(VAR_1);
 }
 return -1;
}
