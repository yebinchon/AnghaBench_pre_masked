
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ free_custom_error_message; int * custom_error_message; } ;
typedef TYPE_1__ intl_error ;


 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 () ;

__attribute__((used)) static void FUNC_2( intl_error* VAR_0 )
{
 if( !VAR_0 && !( VAR_0 = FUNC_1( ) ) )
  return;

 if(VAR_0->free_custom_error_message ) {
  FUNC_0( VAR_0->custom_error_message );
 }

 VAR_0->custom_error_message = ((void*)0);
 VAR_0->free_custom_error_message = 0;
}
