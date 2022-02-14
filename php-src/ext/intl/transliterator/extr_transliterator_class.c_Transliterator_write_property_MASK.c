
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef int zend_string ;
typedef int zend_object ;
typedef int zend_class_entry ;


 int * FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int FUNC_3 (int *,int ,char*) ;
 scalar_t__ FUNC_4 (char*,int,int ,int ) ;
 int * FUNC_5 () ;
 int * FUNC_6 (int *,int *,int *,void**) ;

__attribute__((used)) static zval *FUNC_7( zend_object *VAR_3, zend_string *VAR_4, zval *VAR_5,
 void **VAR_6 )
{
 zend_class_entry *VAR_7;

 if (FUNC_0(VAR_2)) {
  VAR_7 = FUNC_0(VAR_2);
 } else {
  VAR_7 = FUNC_5();
 }
 if( ( VAR_7 != VAR_1 ) &&
  ( FUNC_4( "id", sizeof( "id" ) - 1,
  FUNC_2( VAR_4 ), FUNC_1( VAR_4 ) ) == 0 ) )
 {
  FUNC_3(((void*)0), VAR_0, "The property \"id\" is read-only" );
 }
 else
 {
  VAR_5 = FUNC_6( VAR_3, VAR_4, VAR_5, VAR_6 );
 }

 return VAR_5;
}
