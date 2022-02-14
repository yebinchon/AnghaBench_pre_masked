
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ kind; int align; int attr; int size; } ;
typedef TYPE_1__ zend_ffi_type ;
struct TYPE_6__ {int align; int type; } ;
typedef TYPE_2__ zend_ffi_dcl ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;

void FUNC_2(zend_ffi_dcl *VAR_2)
{
 zend_ffi_type *VAR_3 = FUNC_1(VAR_2->type);

 FUNC_0(VAR_3->kind == VAR_1);
 if (VAR_2->align > VAR_3->align) {
  VAR_3->align = VAR_2->align;
 }
 if (!(VAR_3->attr & VAR_0)) {
  VAR_3->size = ((VAR_3->size + (VAR_3->align - 1)) / VAR_3->align) * VAR_3->align;
 }
 VAR_2->align = 0;
}
