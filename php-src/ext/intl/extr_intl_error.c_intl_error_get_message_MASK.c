
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int zend_string ;
struct TYPE_4__ {scalar_t__ custom_error_message; int code; } ;
typedef TYPE_1__ intl_error ;


 int * FUNC_0 () ;
 TYPE_1__* FUNC_1 () ;
 int * FUNC_2 (int ,char*,char const*,...) ;
 char* FUNC_3 (int ) ;

zend_string * FUNC_4( intl_error* VAR_0 )
{
 const char *VAR_1 = ((void*)0);
 zend_string *VAR_2 = 0;

 if( !VAR_0 && !( VAR_0 = FUNC_1( ) ) )
  return FUNC_0();

 VAR_1 = FUNC_3( VAR_0->code );


 if( VAR_0->custom_error_message )
 {
  VAR_2 = FUNC_2(0, "%s: %s", VAR_0->custom_error_message, VAR_1 );
 }
 else
 {
  VAR_2 = FUNC_2(0, "%s", VAR_1 );
 }

 return VAR_2;
}
