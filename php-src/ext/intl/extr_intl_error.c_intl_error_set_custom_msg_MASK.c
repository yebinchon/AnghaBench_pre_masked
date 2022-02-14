
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int free_custom_error_message; char* custom_error_message; } ;
typedef TYPE_1__ intl_error ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_1 (char const*) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 () ;
 int FUNC_4 (int *,scalar_t__,char*,char const*) ;
 int VAR_2 ;
 int FUNC_5 (int ,int ,char*,char const*) ;

void FUNC_6( intl_error* VAR_3, const char* VAR_4, int VAR_5 )
{
 if( !VAR_4 )
  return;

 if( !VAR_3 ) {
  if( FUNC_0( VAR_1 ) )
   FUNC_4( ((void*)0), FUNC_0( VAR_1 ), "%s", VAR_4 );
  if( FUNC_0( VAR_2 ) )
   FUNC_5( VAR_0, 0, "%s", VAR_4 );
 }
 if( !VAR_3 && !( VAR_3 = FUNC_3( ) ) )
  return;


 FUNC_2( VAR_3 );


 VAR_3->free_custom_error_message = VAR_5;


 VAR_3->custom_error_message = VAR_5 ? FUNC_1( VAR_4 ) : (char *) VAR_4;
}
