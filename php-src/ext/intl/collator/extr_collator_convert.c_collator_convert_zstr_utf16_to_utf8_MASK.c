
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef int zend_string ;
typedef int UErrorCode ;
typedef int UChar ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int * FUNC_5 (int *,int ,int *) ;
 int FUNC_6 (int ,char*) ;

zval* FUNC_7( zval* VAR_2, zval *VAR_3 )
{
 zend_string* VAR_4;
 UErrorCode VAR_5 = VAR_1;


 VAR_4 = FUNC_5(
  (UChar*) FUNC_4(VAR_2), FUNC_0( FUNC_3(VAR_2) ), &VAR_5 );
 if( !VAR_4 ) {
  FUNC_6( VAR_0, "Error converting utf16 to utf8 in collator_convert_zval_utf16_to_utf8()" );
  FUNC_1( VAR_3 );
 } else {
  FUNC_2( VAR_3, VAR_4 );
 }
 return VAR_3;
}
