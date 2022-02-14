
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * create_object; } ;
typedef TYPE_1__ zend_class_entry ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__,char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3( void )
{
 zend_class_entry VAR_3;


 FUNC_0( VAR_3, "Locale", VAR_2 );
 VAR_3.create_object = ((void*)0);
 VAR_1 = FUNC_2( &VAR_3 );


 if( !VAR_1 )
 {
  FUNC_1( VAR_0,
   "Locale: Failed to register Locale class.");
  return;
 }
}
