
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int synctex_void_box_node_t ;
typedef TYPE_1__* synctex_scanner_t ;
typedef TYPE_2__* synctex_node_t ;
typedef scalar_t__ synctex_class_t ;
struct TYPE_7__ {scalar_t__ class; } ;
struct TYPE_6__ {scalar_t__ class; } ;


 TYPE_2__* FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

synctex_node_t FUNC_1(synctex_scanner_t VAR_2) {
 synctex_node_t VAR_3 = FUNC_0(sizeof(synctex_void_box_node_t));
 if (VAR_3) {
  VAR_3->class = VAR_2?VAR_2->class+VAR_1:(synctex_class_t)&VAR_0;
 }
 return VAR_3;
}
