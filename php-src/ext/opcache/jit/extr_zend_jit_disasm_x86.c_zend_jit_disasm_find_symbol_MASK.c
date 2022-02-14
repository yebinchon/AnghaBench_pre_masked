
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ addr; scalar_t__ end; char const* name; struct TYPE_3__** child; } ;
typedef TYPE_1__ zend_sym_node ;
typedef scalar_t__ uint64_t ;
typedef scalar_t__ int64_t ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static const char* FUNC_0(uint64_t VAR_1,
                                               int64_t *VAR_2) {
 zend_sym_node *VAR_3 = VAR_0;
 while (VAR_3) {
  if (VAR_1 < VAR_3->addr) {
   VAR_3 = VAR_3->child[0];
  } else if (VAR_1 > VAR_3->end) {
   VAR_3 = VAR_3->child[1];
  } else {
   *VAR_2 = VAR_1 - VAR_3->addr;
   return VAR_3->name;
  }
 }
 return ((void*)0);
}
