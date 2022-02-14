
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ handler; } ;
struct TYPE_4__ {scalar_t__ type; TYPE_1__ internal_function; } ;
typedef TYPE_2__ zend_function ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ,char const*,size_t) ;

int FUNC_3(const char *VAR_3, size_t VAR_4) {
 zend_function *VAR_5 = (zend_function *)FUNC_2(FUNC_0(VAR_2), VAR_3, VAR_4);

 return (VAR_5 && VAR_5->type == VAR_0 &&
   VAR_5->internal_function.handler == FUNC_1(VAR_1));
}
