
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef int zend_ulong ;
typedef int zend_string ;
typedef int UErrorCode ;
typedef int UChar ;
typedef int HashTable ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 (int *,int *) ;
 size_t FUNC_2 (int *) ;
 char* FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int * FUNC_5 (int *,int ,int *) ;
 int FUNC_6 (int *,int ,int *) ;
 int FUNC_7 (int *,int *,int *) ;

__attribute__((used)) static void FUNC_8(
 HashTable* VAR_1, zval * VAR_2, zend_string* VAR_3, zend_ulong VAR_4,
 UErrorCode* VAR_5 )
{
 const char* VAR_6;
 size_t VAR_7;
 zend_string* VAR_8;
 zval VAR_9;


 if( FUNC_4( VAR_2 ) != VAR_0 )
  return;

 VAR_6 = FUNC_3( VAR_2 );
 VAR_7 = FUNC_2( VAR_2 );


 VAR_8 = FUNC_5(
  (UChar*)VAR_6, FUNC_0(VAR_7), VAR_5 );
 if( !VAR_8 )
  return;


 FUNC_1( &VAR_9, VAR_8);

 if( VAR_3 )
 {
  FUNC_7( VAR_1, VAR_3, &VAR_9);
 }
 else
 {
  FUNC_6( VAR_1, VAR_4, &VAR_9);
 }
}
