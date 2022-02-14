
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ used; } ;
struct TYPE_5__ {TYPE_1__ buffer; } ;
typedef TYPE_2__ php_output_handler ;
typedef int php_output_context ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*,int *) ;

__attribute__((used)) static int FUNC_2(void *VAR_0, void *VAR_1)
{
 php_output_handler *VAR_2 = *(php_output_handler **) VAR_0;
 php_output_context *VAR_3 = (php_output_context *) VAR_1;

 VAR_2->buffer.used = 0;
 FUNC_1(VAR_2, VAR_3);
 FUNC_0(VAR_3);
 return 0;
}
