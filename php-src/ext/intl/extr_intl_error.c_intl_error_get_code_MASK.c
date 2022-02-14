
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int code; } ;
typedef TYPE_1__ intl_error ;
typedef int UErrorCode ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 () ;

UErrorCode FUNC_1( intl_error* VAR_1 )
{
 if( !VAR_1 && !( VAR_1 = FUNC_0( ) ) )
  return VAR_0;

 return VAR_1->code;
}
