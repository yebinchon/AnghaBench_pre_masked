
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zval ;
typedef int zend_string ;
typedef scalar_t__ int32_t ;
typedef int UTransliterator ;
typedef int UErrorCode ;
typedef int UChar ;
struct TYPE_2__ {int * utrans; } ;
typedef TYPE_1__ Transliterator_object ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int const*,int,int *) ;
 int * FUNC_4 (int *,scalar_t__*) ;
 int FUNC_5 (int ,int *,char*,int,int *) ;

int FUNC_6( zval *VAR_4,
          UTransliterator *VAR_5,
          UErrorCode *VAR_6 )
{
 const UChar *VAR_7;
 int32_t VAR_8;
 zend_string *VAR_9;
 zval VAR_10;
 Transliterator_object *VAR_11;

 VAR_2;

 FUNC_2( VAR_11->utrans == ((void*)0) );



 VAR_11->utrans = VAR_5;

 VAR_7 = FUNC_4( VAR_5, &VAR_8 );
 VAR_9 = FUNC_3(VAR_7, (int ) VAR_8, VAR_6 );
 if( !VAR_9 )
 {
  return VAR_0;
 }

 FUNC_1(&VAR_10, VAR_9);
 FUNC_5(VAR_3, VAR_4,
  "id", sizeof( "id" ) - 1, &VAR_10 );
 FUNC_0(VAR_9);
 return VAR_1;
}
