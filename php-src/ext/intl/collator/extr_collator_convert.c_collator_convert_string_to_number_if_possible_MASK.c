
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef int zend_long ;
typedef int UChar ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,double) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,int *,double*,int) ;

zval* FUNC_8( zval* VAR_3, zval *VAR_4 )
{
 int VAR_5 = 0;
 zend_long VAR_6 = 0;
 double VAR_7 = 0;

 if( FUNC_6( VAR_3 ) != VAR_2 )
 {
  FUNC_0( VAR_3 );
 }

 if( ( VAR_5 = FUNC_7( (UChar*) FUNC_5(VAR_3), FUNC_1( FUNC_4(VAR_3) ), &VAR_6, &VAR_7, 1 ) ) )
 {
  if( VAR_5 == VAR_1 ) {
   FUNC_3(VAR_4, VAR_6);
  }
  if( VAR_5 == VAR_0 )
   FUNC_2(VAR_4, VAR_7);
 }
 else
 {
  FUNC_0( VAR_3 );
 }

 return VAR_4;
}
