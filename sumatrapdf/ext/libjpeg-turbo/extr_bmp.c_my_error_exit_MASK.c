
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_2__* my_error_ptr ;
typedef TYPE_3__* j_common_ptr ;
struct TYPE_8__ {TYPE_1__* err; } ;
struct TYPE_7__ {int setjmp_buffer; } ;
struct TYPE_6__ {int (* output_message ) (TYPE_3__*) ;} ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_2(j_common_ptr VAR_0)
{
 my_error_ptr VAR_1=(my_error_ptr)VAR_0->err;
 (*VAR_0->err->output_message)(VAR_0);
 FUNC_0(VAR_1->setjmp_buffer, 1);
}
