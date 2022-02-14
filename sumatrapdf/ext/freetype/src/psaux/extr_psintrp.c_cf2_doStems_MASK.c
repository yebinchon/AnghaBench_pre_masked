
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ width_only; int flex_state; } ;
struct TYPE_7__ {TYPE_3__* decoder; scalar_t__ isT1; } ;
struct TYPE_6__ {scalar_t__ minDS; scalar_t__ maxDS; int used; void* max; void* min; } ;
typedef scalar_t__ FT_Bool ;
typedef int CF2_UInt ;
typedef TYPE_1__ CF2_StemHintRec ;
typedef int CF2_Stack ;
typedef TYPE_2__* CF2_Font ;
typedef void* CF2_Fixed ;
typedef int CF2_ArrStack ;


 void* FUNC_0 (void*,void*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int ,TYPE_1__*) ;
 void* FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 void* FUNC_7 (int ,int) ;

__attribute__((used)) static void
  FUNC_8( const CF2_Font VAR_2,
               CF2_Stack VAR_3,
               CF2_ArrStack VAR_4,
               CF2_Fixed* VAR_5,
               FT_Bool* VAR_6,
               CF2_Fixed VAR_7 )
  {
    CF2_UInt VAR_8;
    CF2_UInt VAR_9 = FUNC_6( VAR_3 );
    FT_Bool VAR_10 = FUNC_1( VAR_9 & 1 );


    CF2_Fixed VAR_11 = VAR_7;

    if ( VAR_2->isT1 && !VAR_2->decoder->flex_state && !*VAR_6 )
      FUNC_2(( "cf2_doStems (Type 1 mode):"
                 " No width. Use hsbw/sbw as first op\n" ));

    if ( !VAR_2->isT1 && VAR_10 && !*VAR_6 )
      *VAR_5 = FUNC_0( FUNC_7( VAR_3, 0 ),
                          FUNC_4( VAR_2->decoder ) );

    if ( VAR_2->decoder->width_only )
      goto exit;

    for ( VAR_8 = VAR_10 ? 1 : 0; VAR_8 < VAR_9; VAR_8 += 2 )
    {

      CF2_StemHintRec VAR_12;


      VAR_12.min =
      VAR_11 = FUNC_0( VAR_11,
                                FUNC_7( VAR_3, VAR_8 ) );
      VAR_12.max =
      VAR_11 = FUNC_0( VAR_11,
                                FUNC_7( VAR_3, VAR_8 + 1 ) );

      VAR_12.used = VAR_0;
      VAR_12.maxDS =
      VAR_12.minDS = 0;

      FUNC_3( VAR_4, &VAR_12 );
    }

    FUNC_5( VAR_3 );

  exit:

    *VAR_6 = VAR_1;
  }
