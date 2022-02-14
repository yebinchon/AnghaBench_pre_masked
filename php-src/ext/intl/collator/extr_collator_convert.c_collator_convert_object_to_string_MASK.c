
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zval ;
typedef int int32_t ;
typedef int UErrorCode ;
typedef int UChar ;
struct TYPE_2__ {scalar_t__ (* cast_object ) (int ,int *,int ) ;} ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 (int *,char*,int ) ;
 TYPE_1__* FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int **,int *,int ,int ,int *) ;
 int FUNC_11 (int ,char*) ;
 scalar_t__ FUNC_12 (int ,int *,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

zval* FUNC_15( zval* VAR_5, zval *VAR_6 )
{
 zval* VAR_7 = ((void*)0);
 UErrorCode VAR_8 = VAR_4;
 UChar* VAR_9 = ((void*)0);
 int32_t VAR_10 = 0;


 if( FUNC_8( VAR_5 ) != VAR_2 )
 {
  FUNC_0( VAR_5 );
 }


 if( FUNC_4(VAR_5)->cast_object )
 {
  VAR_7 = VAR_6;

  if( FUNC_4(VAR_5)->cast_object( FUNC_5(VAR_5), VAR_7, VAR_3 ) == VAR_1 )
  {

   FUNC_13( VAR_7 );
   FUNC_0( VAR_5 );
  }
 }


 if( VAR_7 == ((void*)0) )
 {
  FUNC_0( VAR_5 );
 }


 FUNC_10(
   &VAR_9, &VAR_10,
   FUNC_7( VAR_7 ), FUNC_6( VAR_7 ),
   &VAR_8 );
 if( FUNC_2( VAR_8 ) )
  FUNC_11( VAR_0, "Error casting object to string in collator_convert_object_to_string()" );


 FUNC_14( VAR_7 );


 FUNC_3( VAR_7, (char*)VAR_9, FUNC_1(VAR_10));

 FUNC_9((char *)VAR_9);





 return VAR_7;
}
