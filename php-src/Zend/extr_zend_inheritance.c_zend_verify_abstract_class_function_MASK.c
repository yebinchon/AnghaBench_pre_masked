
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int fn_flags; } ;
struct TYPE_7__ {TYPE_1__ common; } ;
typedef TYPE_2__ zend_function ;
struct TYPE_8__ {size_t cnt; int ctor; TYPE_2__** afn; } ;
typedef TYPE_3__ zend_abstract_info ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(zend_function *VAR_3, zend_abstract_info *VAR_4)
{
 if (VAR_3->common.fn_flags & VAR_1) {
  if (VAR_4->cnt < VAR_0) {
   VAR_4->afn[VAR_4->cnt] = VAR_3;
  }
  if (VAR_3->common.fn_flags & VAR_2) {
   if (!VAR_4->ctor) {
    VAR_4->cnt++;
    VAR_4->ctor = 1;
   } else {
    VAR_4->afn[VAR_4->cnt] = ((void*)0);
   }
  } else {
   VAR_4->cnt++;
  }
 }
}
