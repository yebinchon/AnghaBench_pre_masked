
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_string ;
typedef size_t int32_t ;
typedef scalar_t__ UErrorCode ;
typedef int UChar ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__* FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__*,size_t,size_t*,int const*,size_t,scalar_t__*) ;
 int * FUNC_3 (size_t,int ) ;
 int FUNC_4 (int *) ;

zend_string* FUNC_5(
 const UChar* VAR_3, int32_t VAR_4,
 UErrorCode* VAR_5 )
{
 zend_string* VAR_6;
 int32_t VAR_7;


 *VAR_5 = VAR_2;
 FUNC_2( ((void*)0), 0, &VAR_7, VAR_3, VAR_4, VAR_5 );





 if( *VAR_5 != VAR_0 && *VAR_5 != VAR_1 )
  return ((void*)0);


 VAR_6 = FUNC_3(VAR_7, 0);


 *VAR_5 = VAR_2;
 FUNC_2( FUNC_1(VAR_6), VAR_7, ((void*)0), VAR_3, VAR_4, VAR_5 );
 if( FUNC_0( *VAR_5 ) )
 {
  FUNC_4(VAR_6);
  return ((void*)0);
 }


 *VAR_5 = VAR_2;

 FUNC_1(VAR_6)[VAR_7] = 0;
 return VAR_6;
}
