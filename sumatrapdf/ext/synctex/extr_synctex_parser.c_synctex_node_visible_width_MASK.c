
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_3__* synctex_node_t ;
struct TYPE_8__ {TYPE_2__* class; } ;
struct TYPE_7__ {TYPE_1__* scanner; } ;
struct TYPE_6__ {float unit; } ;


 float FUNC_0 (TYPE_3__*) ;

float FUNC_1(synctex_node_t VAR_0){
 if (!VAR_0) {
  return 0;
 }
 return FUNC_0(VAR_0)*VAR_0->class->scanner->unit;
}
