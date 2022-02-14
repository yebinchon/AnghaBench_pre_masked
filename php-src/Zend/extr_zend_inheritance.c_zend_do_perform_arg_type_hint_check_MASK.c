
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int scope; } ;
struct TYPE_9__ {TYPE_1__ common; } ;
typedef TYPE_2__ zend_function ;
struct TYPE_10__ {int type; } ;
typedef TYPE_3__ zend_arg_info ;
typedef int inheritance_status ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static inheritance_status FUNC_2(
  const zend_function *VAR_2, zend_arg_info *VAR_3,
  const zend_function *VAR_4, zend_arg_info *VAR_5)
{
 if (!FUNC_0(VAR_3->type)) {

  return VAR_1;
 }

 if (!FUNC_0(VAR_5->type)) {

  return VAR_0;
 }



 return FUNC_1(
  VAR_4->common.scope, VAR_5->type, VAR_2->common.scope, VAR_3->type);
}
