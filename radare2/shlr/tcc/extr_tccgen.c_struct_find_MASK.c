
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * sym_struct; } ;
typedef int Sym ;


 scalar_t__ VAR_0 ;
 TYPE_1__** VAR_1 ;
 scalar_t__ VAR_2 ;

Sym *FUNC_0(int VAR_3) {
 VAR_3 -= VAR_0;
 if ((unsigned) VAR_3 >= (unsigned) (VAR_2 - VAR_0)) {
  return ((void*)0);
 }
 return VAR_1[VAR_3]->sym_struct;
}
