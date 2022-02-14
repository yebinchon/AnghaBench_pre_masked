
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zend_bool ;
struct TYPE_3__ {scalar_t__ level; int idom; } ;
typedef TYPE_1__ zend_basic_block ;



__attribute__((used)) static zend_bool FUNC_0(const zend_basic_block *VAR_0, int VAR_1, int VAR_2) {
 while (VAR_0[VAR_2].level > VAR_0[VAR_1].level) {
  VAR_2 = VAR_0[VAR_2].idom;
 }
 return VAR_1 == VAR_2;
}
