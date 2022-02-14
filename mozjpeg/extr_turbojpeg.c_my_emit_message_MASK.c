
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* my_error_ptr ;
typedef TYPE_2__* j_common_ptr ;
struct TYPE_6__ {int err; } ;
struct TYPE_5__ {int setjmp_buffer; scalar_t__ stopOnWarning; int warning; int (* emit_message ) (TYPE_2__*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (TYPE_2__*,int) ;

__attribute__((used)) static void FUNC_2(j_common_ptr VAR_1, int VAR_2)
{
 my_error_ptr VAR_3=(my_error_ptr)VAR_1->err;

 VAR_3->emit_message(VAR_1, VAR_2);
  if (VAR_2 < 0) {
    VAR_3->warning = VAR_0;
    if (VAR_3->stopOnWarning) FUNC_0(VAR_3->setjmp_buffer, 1);
  }
}
