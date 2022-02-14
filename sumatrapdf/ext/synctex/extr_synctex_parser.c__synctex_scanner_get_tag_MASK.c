
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* synctex_scanner_t ;
typedef int * synctex_node_t ;
struct TYPE_3__ {int * input; } ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (char const*,int ) ;

int FUNC_4(synctex_scanner_t VAR_0,const char * VAR_1) {
 synctex_node_t VAR_2 = ((void*)0);
 if (((void*)0) == VAR_0) {
  return 0;
 }
 VAR_2 = VAR_0->input;
 do {
  if (FUNC_3(VAR_1,(FUNC_0(VAR_2)))) {
   return FUNC_2(VAR_2);
  }
 } while((VAR_2 = FUNC_1(VAR_2)) != ((void*)0));
 return 0;
}
