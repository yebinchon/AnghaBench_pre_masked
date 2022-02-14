
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* synctex_scanner_t ;
typedef int * synctex_node_t ;
struct TYPE_3__ {int * input; } ;


 char const* FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

const char * FUNC_3(synctex_scanner_t VAR_0,int VAR_1) {
 synctex_node_t VAR_2 = ((void*)0);
 if (((void*)0) == VAR_0) {
  return ((void*)0);
 }
 VAR_2 = VAR_0->input;
 do {
  if (VAR_1 == FUNC_2(VAR_2)) {
   return (FUNC_0(VAR_2));
  }
 } while((VAR_2 = FUNC_1(VAR_2)) != ((void*)0));
 return ((void*)0);
}
