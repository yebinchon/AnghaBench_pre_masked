
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {int yMax; int yMin; int xMax; int xMin; } ;
struct TYPE_13__ {int y; int x; } ;
struct TYPE_12__ {TYPE_2__ last; TYPE_4__ bbox; } ;
typedef TYPE_1__ TBBox_Rec ;
typedef TYPE_2__ FT_Vector ;


 int FUNC_0 (int ,int ,int ,int *,int *) ;
 scalar_t__ FUNC_1 (TYPE_2__*,TYPE_4__) ;
 scalar_t__ FUNC_2 (TYPE_2__*,TYPE_4__) ;
 int FUNC_3 (TYPE_2__*,TYPE_4__) ;

__attribute__((used)) static int
  FUNC_4( FT_Vector* VAR_0,
                 FT_Vector* VAR_1,
                 TBBox_Rec* VAR_2 )
  {

    FUNC_3( VAR_1, VAR_2->bbox );

    if ( FUNC_1( VAR_0, VAR_2->bbox ) )
      FUNC_0( VAR_2->last.x,
                        VAR_0->x,
                        VAR_1->x,
                        &VAR_2->bbox.xMin,
                        &VAR_2->bbox.xMax );

    if ( FUNC_2( VAR_0, VAR_2->bbox ) )
      FUNC_0( VAR_2->last.y,
                        VAR_0->y,
                        VAR_1->y,
                        &VAR_2->bbox.yMin,
                        &VAR_2->bbox.yMax );

    VAR_2->last = *VAR_1;

    return 0;
  }
