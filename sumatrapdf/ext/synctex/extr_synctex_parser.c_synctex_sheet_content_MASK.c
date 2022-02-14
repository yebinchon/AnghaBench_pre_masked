
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* synctex_scanner_t ;
typedef int * synctex_node_t ;
struct TYPE_3__ {int * sheet; } ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;

synctex_node_t FUNC_3(synctex_scanner_t VAR_0,int VAR_1) {
 if (VAR_0) {
  synctex_node_t VAR_2 = VAR_0->sheet;
  while(VAR_2) {
   if (VAR_1 == FUNC_1(VAR_2)) {
    return FUNC_0(VAR_2);
   }
   VAR_2 = FUNC_2(VAR_2);
  }
 }
 return ((void*)0);
}
