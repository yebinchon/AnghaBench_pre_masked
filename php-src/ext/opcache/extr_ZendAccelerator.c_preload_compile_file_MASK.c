
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ static_variables; int * refcount; int filename; } ;
struct TYPE_8__ {int filename; TYPE_3__ main_op_array; scalar_t__ first_early_binding_opline; } ;
struct TYPE_9__ {TYPE_1__ script; } ;
typedef TYPE_2__ zend_persistent_script ;
typedef TYPE_3__ zend_op_array ;
typedef int zend_file_handle ;
typedef scalar_t__ uint32_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 TYPE_2__* FUNC_2 () ;
 TYPE_3__* FUNC_3 (int *,int) ;
 int VAR_1 ;
 int FUNC_4 (int ,int ,TYPE_2__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static zend_op_array *FUNC_7(zend_file_handle *VAR_2, int VAR_3)
{
 zend_op_array *VAR_4 = FUNC_3(VAR_2, VAR_3);

 if (VAR_4 && VAR_4->refcount) {
  zend_persistent_script *VAR_5;

  VAR_5 = FUNC_2();
  VAR_5->script.first_early_binding_opline = (uint32_t)-1;
  VAR_5->script.filename = FUNC_5(VAR_4->filename);
  FUNC_6(VAR_5->script.filename);
  VAR_5->script.main_op_array = *VAR_4;


  VAR_4->refcount = ((void*)0);

  if (VAR_4->static_variables &&
      !(FUNC_1(VAR_4->static_variables) & VAR_0)) {
   FUNC_0(VAR_4->static_variables);
  }

  FUNC_4(VAR_1, VAR_5->script.filename, VAR_5);
 }

 return VAR_4;
}
