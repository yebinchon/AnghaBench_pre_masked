
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int status; } ;
typedef TYPE_1__* AFM_Stream ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 char* FUNC_4 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static char*
  FUNC_6( AFM_Stream VAR_2 )
  {
    char* VAR_3;


    FUNC_5( VAR_2 );
    if ( FUNC_3( VAR_2 ) )
      return ((void*)0);

    VAR_3 = FUNC_4( VAR_2 );


    while ( 1 )
    {
      int VAR_4 = FUNC_0();


      if ( FUNC_2( VAR_4 ) )
      {
        VAR_2->status = VAR_1;
        break;
      }
      else if ( FUNC_1( VAR_4 ) )
      {
        VAR_2->status = VAR_0;
        break;
      }
    }

    return VAR_3;
  }
