
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef int int32_t ;
typedef int UErrorCode ;
typedef int UChar ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int **,int *,int ,int ,int *) ;
 int FUNC_7 (int ,char*) ;

zval* FUNC_8( zval* VAR_2, zval *VAR_3 )
{
 zval* VAR_4 = ((void*)0);
 UChar* VAR_5 = ((void*)0);
 int32_t VAR_6 = 0;
 UErrorCode VAR_7 = VAR_1;


 FUNC_6(
   &VAR_5, &VAR_6,
   FUNC_4( VAR_2 ), FUNC_3( VAR_2 ),
   &VAR_7 );
 if( FUNC_1( VAR_7 ) )
  FUNC_7( VAR_0, "Error casting object to string in collator_convert_zstr_utf8_to_utf16()" );


 VAR_4 = VAR_3;
 FUNC_2( VAR_4, (char*)VAR_5, FUNC_0(VAR_6));

 FUNC_5((char *)VAR_5);

 return VAR_4;
}
