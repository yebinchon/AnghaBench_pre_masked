
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int zend_string ;
typedef int zend_long ;
struct TYPE_10__ {int member_0; } ;
typedef TYPE_1__ smart_str ;
struct TYPE_11__ {scalar_t__ line; scalar_t__ offset; scalar_t__* preContext; scalar_t__* postContext; } ;
typedef TYPE_2__ UParseError ;
typedef int UErrorCode ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (scalar_t__*,int,int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int *,int ) ;

smart_str FUNC_8( UParseError* VAR_0 )
{
 smart_str VAR_1 = {0};
 zend_string *VAR_2;
 UErrorCode VAR_3;
 int VAR_4 = 0;

 FUNC_0( VAR_0 != ((void*)0) );

 FUNC_5( &VAR_1, "parse error " );
 if( VAR_0->line > 0 )
 {
  FUNC_5( &VAR_1, "on line " );
  FUNC_4( &VAR_1, (zend_long ) VAR_0->line );
  VAR_4 = 1;
 }
 if( VAR_0->offset >= 0 ) {
  if( VAR_4 )
   FUNC_5( &VAR_1, ", " );
  else
   FUNC_5( &VAR_1, "at " );

  FUNC_5( &VAR_1, "offset " );
  FUNC_4( &VAR_1, (zend_long ) VAR_0->offset );
  VAR_4 = 1;
 }

 if (VAR_0->preContext[0] != 0 ) {
  if( VAR_4 )
   FUNC_5( &VAR_1, ", " );

  FUNC_5( &VAR_1, "after \"" );
  VAR_2 = FUNC_1(VAR_0->preContext, -1, &VAR_3 );
  if( !VAR_2 )
  {
   FUNC_5( &VAR_1, "(could not convert parser error pre-context to UTF-8)" );
  }
  else {
   FUNC_3( &VAR_1, VAR_2 );
   FUNC_7( VAR_2, 0 );
  }
  FUNC_5( &VAR_1, "\"" );
  VAR_4 = 1;
 }

 if( VAR_0->postContext[0] != 0 )
 {
  if( VAR_4 )
   FUNC_5( &VAR_1, ", " );

  FUNC_5( &VAR_1, "before or at \"" );
  VAR_2 = FUNC_1(VAR_0->postContext, -1, &VAR_3 );
  if( !VAR_2 )
  {
   FUNC_5( &VAR_1, "(could not convert parser error post-context to UTF-8)" );
  }
  else
  {
   FUNC_3( &VAR_1, VAR_2 );
   FUNC_7( VAR_2, 0 );
  }
  FUNC_5( &VAR_1, "\"" );
  VAR_4 = 1;
 }

 if( !VAR_4 )
 {
  FUNC_6( &VAR_1 );
  FUNC_5( &VAR_1, "no parse error" );
 }

 FUNC_2( &VAR_1 );
 return VAR_1;
}
