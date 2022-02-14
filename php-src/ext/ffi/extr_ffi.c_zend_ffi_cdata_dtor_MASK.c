
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; void* ptr; void* ptr_holder; int type; } ;
typedef TYPE_1__ zend_ffi_cdata ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(zend_ffi_cdata *VAR_2)
{
 FUNC_1(VAR_2->type);
 if (VAR_2->flags & VAR_0) {
  if (VAR_2->ptr != (void*)&VAR_2->ptr_holder) {
   FUNC_0(VAR_2->ptr, VAR_2->flags & VAR_1);
  } else {
   FUNC_0(VAR_2->ptr_holder, VAR_2->flags & VAR_1);
  }
 }
}
