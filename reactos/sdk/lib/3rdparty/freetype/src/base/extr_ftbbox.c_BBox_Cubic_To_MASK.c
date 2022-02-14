
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int yMax; int yMin; int xMax; int xMin; } ;
struct TYPE_12__ {int y; int x; } ;
struct TYPE_11__ {TYPE_2__ last; TYPE_4__ bbox; } ;
typedef TYPE_1__ TBBox_Rec ;
typedef TYPE_2__ FT_Vector ;


 int FUNC_0 (int ,int ,int ,int ,int *,int *) ;
 scalar_t__ FUNC_1 (TYPE_2__*,TYPE_4__) ;
 scalar_t__ FUNC_2 (TYPE_2__*,TYPE_4__) ;

__attribute__((used)) static int
  FUNC_3( FT_Vector* VAR_0,
                 FT_Vector* VAR_1,
                 FT_Vector* VAR_2,
                 TBBox_Rec* VAR_3 )
  {




    if ( FUNC_1( VAR_0, VAR_3->bbox ) ||
         FUNC_1( VAR_1, VAR_3->bbox ) )
      FUNC_0( VAR_3->last.x,
                        VAR_0->x,
                        VAR_1->x,
                        VAR_2->x,
                        &VAR_3->bbox.xMin,
                        &VAR_3->bbox.xMax );

    if ( FUNC_2( VAR_0, VAR_3->bbox ) ||
         FUNC_2( VAR_1, VAR_3->bbox ) )
      FUNC_0( VAR_3->last.y,
                        VAR_0->y,
                        VAR_1->y,
                        VAR_2->y,
                        &VAR_3->bbox.yMin,
                        &VAR_3->bbox.yMax );

    VAR_3->last = *VAR_2;

    return 0;
  }
