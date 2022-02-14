
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int synctex_scanner_t ;
typedef int * synctex_node_t ;


 int * VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;

synctex_node_t FUNC_0(synctex_scanner_t VAR_3) {
 if (((void*)0) == VAR_0) {
  VAR_0 = VAR_2;
 } else {
  VAR_0+=sizeof(synctex_node_t);
 }
 if (VAR_0<VAR_1) {
  return *(synctex_node_t*)VAR_0;
 } else {
  return ((void*)0);
 }
}
