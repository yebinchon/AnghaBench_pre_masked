
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t int32_t ;
typedef scalar_t__ UErrorCode ;
typedef scalar_t__ UChar ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (scalar_t__*) ;
 scalar_t__* FUNC_2 (size_t) ;
 int FUNC_3 (scalar_t__*,size_t,size_t*,char const*,size_t,scalar_t__*) ;

void FUNC_4(
 UChar** VAR_4, int32_t* VAR_5,
 const char* VAR_6, size_t VAR_7,
 UErrorCode* VAR_8 )
{
 UChar* VAR_9 = ((void*)0);
 int32_t VAR_10 = 0;





 *VAR_8 = VAR_3;

 if(VAR_7 > VAR_0) {

  *VAR_8 = VAR_1;
  return;
 }

 FUNC_3( *VAR_4, *VAR_5, &VAR_10, VAR_6, (int32_t)VAR_7, VAR_8 );

 if( *VAR_8 == VAR_3 )
 {

  (*VAR_4)[VAR_10] = 0;
  *VAR_5 = VAR_10;
  return;
 }





 if( *VAR_8 != VAR_1 && *VAR_8 != VAR_2 )
  return;


 VAR_9 = FUNC_2( VAR_10 + 1 );


 *VAR_8 = VAR_3;
 FUNC_3( VAR_9, VAR_10+1, ((void*)0), VAR_6, VAR_7, VAR_8 );
 if( FUNC_0( *VAR_8 ) )
 {
  FUNC_1( VAR_9 );
  return;
 }

 VAR_9[VAR_10] = 0;

 if( *VAR_4 )
  FUNC_1( *VAR_4 );

 *VAR_4 = VAR_9;
 *VAR_5 = VAR_10;
}
