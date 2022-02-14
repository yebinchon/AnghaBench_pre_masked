
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef int zend_string ;
typedef int zend_object ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (char*,int,int ,int ) ;
 int * FUNC_3 (int *,int *,int,void**) ;

__attribute__((used)) static zval *FUNC_4( zend_object *VAR_0, zend_string *VAR_1, int VAR_2, void **VAR_3 )
{
 zval *VAR_4;

 if(FUNC_2( "id", sizeof( "id" ) - 1,
  FUNC_1( VAR_1 ), FUNC_0( VAR_1 ) ) == 0 )
 {
  VAR_4 = ((void*)0);
 }
 else
 {
  VAR_4 = FUNC_3( VAR_0, VAR_1, VAR_2, VAR_3 );
 }

 return VAR_4;
}
