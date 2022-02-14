
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int code; } ;
typedef TYPE_1__ intl_error ;
typedef int UErrorCode ;


 TYPE_1__* FUNC_0 () ;

void FUNC_1( intl_error* VAR_0, UErrorCode VAR_1 )
{
 if( !VAR_0 && !( VAR_0 = FUNC_0( ) ) )
  return;

 VAR_0->code = VAR_1;
}
