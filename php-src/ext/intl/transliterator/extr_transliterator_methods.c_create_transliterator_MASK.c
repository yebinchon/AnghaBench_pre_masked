
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zval ;
typedef scalar_t__ zend_long ;
typedef int int32_t ;
typedef int UTransliterator ;
typedef int UTransDirection ;
struct TYPE_3__ {int member_1; int member_0; } ;
typedef TYPE_1__ UParseError ;
typedef char UChar ;
typedef int Transliterator_object ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_6 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char**,int *,char*,size_t,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,char*,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,char*,int) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (char**,int ,char*,char*) ;
 int FUNC_11 (int *,int *,int ) ;
 int * FUNC_12 (char*,int ,int ,int *,int,TYPE_1__*,int ) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14( char *VAR_7, size_t VAR_8, zend_long VAR_9, zval *VAR_10 )
{
 Transliterator_object *VAR_11;
 UChar *VAR_12 = ((void*)0);
 int32_t VAR_13 = 0;
 UTransliterator *VAR_14;
 UParseError VAR_15 = {0, -1};

 FUNC_5( ((void*)0) );

 if( ( VAR_9 != VAR_2 ) && (VAR_9 != VAR_4 ) )
 {
  FUNC_6( ((void*)0), VAR_6,
   "transliterator_create: invalid direction", 0 );
  return VAR_0;
 }

 FUNC_9( VAR_10, VAR_5 );
 VAR_3;


 FUNC_4( &VAR_12, &VAR_13, VAR_7, VAR_8, FUNC_1( VAR_11 ) );
 if( FUNC_2( FUNC_0( VAR_11 ) ) )
 {
  FUNC_7( ((void*)0), FUNC_0( VAR_11 ) );
  FUNC_8( ((void*)0), "String conversion of id to UTF-16 failed", 0 );
  FUNC_13( VAR_10 );
  return VAR_0;
 }


 VAR_14 = FUNC_12( VAR_12, VAR_13, (UTransDirection ) VAR_9,
  ((void*)0), -1, &VAR_15, FUNC_1( VAR_11 ) );
 if (VAR_12) {
  FUNC_3( VAR_12 );
 }

 if( FUNC_2( FUNC_0( VAR_11 ) ) )
 {
  char *VAR_16 = ((void*)0);
  FUNC_7( ((void*)0), FUNC_0( VAR_11 ) );
  FUNC_10( &VAR_16, 0, "transliterator_create: unable to open ICU transliterator"
   " with id \"%s\"", VAR_7 );
  if( VAR_16 == ((void*)0) ) {
   FUNC_8( ((void*)0),
    "transliterator_create: unable to open ICU transliterator", 0 );
  }
  else
  {
   FUNC_8( ((void*)0), VAR_16, 1 );
   FUNC_3( VAR_16 );
  }
  FUNC_13( VAR_10 );
  return VAR_0;
 }

 FUNC_11( VAR_10, VAR_14, FUNC_1( VAR_11 ) );

 if( FUNC_2( FUNC_0( VAR_11 ) ) )
 {
  FUNC_7( ((void*)0), FUNC_0( VAR_11 ) );
  FUNC_8( ((void*)0),
   "transliterator_create: internal constructor call failed", 0 );
  FUNC_13( VAR_10 );
  return VAR_0;
 }

 return VAR_1;
}
