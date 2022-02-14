
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zval ;
struct TYPE_2__ {int name; } ;
typedef TYPE_1__ php_output_handler ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(void *VAR_0, void *VAR_1)
{
 php_output_handler *VAR_2 = *(php_output_handler **) VAR_0;
 zval *VAR_3 = (zval *) VAR_1;

 FUNC_0(VAR_3, FUNC_1(VAR_2->name));
 return 0;
}
