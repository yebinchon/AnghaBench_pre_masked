
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ kind; } ;
typedef TYPE_1__ zend_ast ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static void FUNC_1(const zend_ast *VAR_4)
{
 if (VAR_4->kind == VAR_1) {
  FUNC_0(VAR_0, "Can't use function return value in write context");
 }
 if (VAR_4->kind == VAR_2 || VAR_4->kind == VAR_3) {
  FUNC_0(VAR_0, "Can't use method return value in write context");
 }
}
