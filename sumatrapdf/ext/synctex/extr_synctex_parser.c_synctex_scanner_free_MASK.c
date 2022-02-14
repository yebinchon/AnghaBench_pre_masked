
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* synctex_scanner_t ;
struct TYPE_5__ {struct TYPE_5__* lists_of_friends; struct TYPE_5__* synctex; struct TYPE_5__* output; struct TYPE_5__* output_fmt; int input; int sheet; } ;


 int * VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;

void FUNC_3(synctex_scanner_t VAR_2) {
 if (((void*)0) == VAR_2) {
  return;
 }
 if (VAR_0) {
  FUNC_2(VAR_0);
  VAR_0 = ((void*)0);
 }
 FUNC_0(VAR_2->sheet);
 FUNC_0(VAR_2->input);
 FUNC_1(VAR_1);
 FUNC_1(VAR_2->output_fmt);
 FUNC_1(VAR_2->output);
 FUNC_1(VAR_2->synctex);
 FUNC_1(VAR_2->lists_of_friends);
 FUNC_1(VAR_2);
}
