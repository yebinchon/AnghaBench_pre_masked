
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int status; } ;
typedef TYPE_1__* AFM_Stream ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
  FUNC_6( AFM_Stream VAR_3 )
  {
    int VAR_4 = 0;


    if ( FUNC_5( VAR_3 ) )
      return ';';

    while ( 1 )
    {
      VAR_4 = FUNC_0();
      if ( !FUNC_4( VAR_4 ) )
        break;
    }

    if ( FUNC_2( VAR_4 ) )
      VAR_3->status = VAR_2;
    else if ( FUNC_3( VAR_4 ) )
      VAR_3->status = VAR_0;
    else if ( FUNC_1( VAR_4 ) )
      VAR_3->status = VAR_1;

    return VAR_4;
  }
