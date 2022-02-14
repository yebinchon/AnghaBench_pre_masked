
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int synctex_node_type_t ;
typedef TYPE_2__* synctex_node_t ;
struct TYPE_5__ {TYPE_1__* class; } ;
struct TYPE_4__ {int type; } ;


 int VAR_0 ;

synctex_node_type_t FUNC_0(synctex_node_t VAR_1) {
 if (VAR_1) {
  return (((VAR_1)->class))->type;
 }
 return VAR_0;
}
