
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {int memory; } ;
struct TYPE_13__ {scalar_t__ TrackKerns; scalar_t__ KernPairs; int memory; } ;
typedef TYPE_1__ FT_StreamRec ;
typedef int FT_Memory ;
typedef TYPE_2__* FT_Library ;
typedef int FT_Error ;
typedef TYPE_1__ AFM_FontInfoRec ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_2__**) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 int FUNC_6 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_2__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_9 (char*) ;

int FUNC_10( int VAR_2,
            char** VAR_3 )
  {
    FT_Library VAR_4;
    FT_StreamRec VAR_5;
    FT_Error VAR_6 = VAR_0;
    AFM_FontInfoRec VAR_7;


    if ( VAR_2 < 2 )
      return FUNC_1( VAR_1 );

    VAR_6 = FUNC_3( &VAR_4 );
    if ( VAR_6 )
      return VAR_6;

    FUNC_6( &VAR_5 );
    VAR_6 = FUNC_5( &VAR_5, VAR_3[1] );
    if ( VAR_6 )
      goto Exit;
    VAR_5.memory = VAR_4->memory;

    FUNC_6( &VAR_7 );
    VAR_6 = FUNC_8( VAR_4, &VAR_5, &VAR_7 );

    if ( !VAR_6 )
    {
      FT_Memory VAR_8 = VAR_4->memory;


      FUNC_7( &VAR_7 );

      if ( VAR_7.KernPairs )
        FUNC_2( VAR_7.KernPairs );
      if ( VAR_7.TrackKerns )
        FUNC_2( VAR_7.TrackKerns );
    }
    else
      FUNC_9( "parse error\n" );

    FUNC_4( &VAR_5 );

  Exit:
    FUNC_0( VAR_4 );

    return VAR_6;
  }
