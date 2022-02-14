
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_19__ {int y; int x; } ;
struct TYPE_18__ {int y; int x; } ;
struct TYPE_17__ {int y; int x; } ;
struct TYPE_16__ {int y; int x; } ;
struct TYPE_23__ {scalar_t__ op; TYPE_5__ pt3; TYPE_4__ pt2; TYPE_3__ pt1; TYPE_2__ pt0; } ;
struct TYPE_22__ {TYPE_1__* decoder; } ;
struct TYPE_21__ {void** error; } ;
struct TYPE_20__ {int path_begun; } ;
struct TYPE_15__ {TYPE_6__ builder; } ;
typedef TYPE_6__ PS_Builder ;
typedef void* FT_Error ;
typedef TYPE_7__* CF2_OutlineCallbacks ;
typedef TYPE_8__* CF2_Outline ;
typedef TYPE_9__* CF2_CallbackParams ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_6__*,int ,int ,int) ;
 void* FUNC_2 (TYPE_6__*,int) ;
 void* FUNC_3 (TYPE_6__*,int ,int ) ;

__attribute__((used)) static void
  FUNC_4( CF2_OutlineCallbacks VAR_1,
                      const CF2_CallbackParams VAR_2 )
  {
    FT_Error VAR_3;


    CF2_Outline VAR_4 = (CF2_Outline)VAR_1;
    PS_Builder* VAR_5;


    FUNC_0( VAR_4 && VAR_4->decoder );
    FUNC_0( VAR_2->op == VAR_0 );

    VAR_5 = &VAR_4->decoder->builder;

    if ( !VAR_5->path_begun )
    {


      VAR_3 = FUNC_3( VAR_5,
                                      VAR_2->pt0.x,
                                      VAR_2->pt0.y );
      if ( VAR_3 )
      {
        if ( !*VAR_1->error )
          *VAR_1->error = VAR_3;
        return;
      }
    }


    VAR_3 = FUNC_2( VAR_5, 3 );
    if ( VAR_3 )
    {
      if ( !*VAR_1->error )
        *VAR_1->error = VAR_3;
      return;
    }

    FUNC_1( VAR_5,
                          VAR_2->pt1.x,
                          VAR_2->pt1.y, 0 );
    FUNC_1( VAR_5,
                          VAR_2->pt2.x,
                          VAR_2->pt2.y, 0 );
    FUNC_1( VAR_5,
                          VAR_2->pt3.x,
                          VAR_2->pt3.y, 1 );
  }
