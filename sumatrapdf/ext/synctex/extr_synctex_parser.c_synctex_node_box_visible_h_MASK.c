
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_3__* synctex_node_t ;
struct TYPE_11__ {TYPE_2__* class; } ;
struct TYPE_10__ {int type; TYPE_1__* scanner; } ;
struct TYPE_9__ {float unit; float x_offset; } ;


 float FUNC_0 (TYPE_3__*) ;
 float FUNC_1 (TYPE_3__*) ;
 TYPE_3__* FUNC_2 (TYPE_3__*) ;

 int VAR_0 ;




float FUNC_3(synctex_node_t VAR_1){
 if (!VAR_1) {
  return 0;
 }
 switch(VAR_1->class->type) {
  case 130:
  case 128:
  case 129:
   return FUNC_0(VAR_1)*VAR_1->class->scanner->unit+VAR_1->class->scanner->x_offset;
  case 131:
result:
   return FUNC_1(VAR_1)*VAR_1->class->scanner->unit+VAR_1->class->scanner->x_offset;
 }
 if ((VAR_1 = FUNC_2(VAR_1)) && (VAR_1->class->type != VAR_0)) {
  goto result;
 }
 return 0;
}
