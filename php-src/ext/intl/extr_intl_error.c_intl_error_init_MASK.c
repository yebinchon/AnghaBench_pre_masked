
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ free_custom_error_message; int * custom_error_message; int code; } ;
typedef TYPE_1__ intl_error ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 () ;

void FUNC_1( intl_error* VAR_1 )
{
 if( !VAR_1 && !( VAR_1 = FUNC_0( ) ) )
  return;

 VAR_1->code = VAR_0;
 VAR_1->custom_error_message = ((void*)0);
 VAR_1->free_custom_error_message = 0;
}
