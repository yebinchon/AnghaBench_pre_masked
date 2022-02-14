
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ start; int num_points; int movable; scalar_t__* tags; int * points; } ;
typedef int FT_Vector ;
typedef TYPE_1__* FT_StrokeBorder ;
typedef int FT_Error ;
typedef scalar_t__ FT_Byte ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static FT_Error
  FUNC_2( FT_StrokeBorder VAR_2,
                            FT_Vector* VAR_3,
                            FT_Vector* VAR_4 )
  {
    FT_Error VAR_5;


    FUNC_0( VAR_2->start >= 0 );

    VAR_5 = FUNC_1( VAR_2, 2 );
    if ( !VAR_5 )
    {
      FT_Vector* VAR_6 = VAR_2->points + VAR_2->num_points;
      FT_Byte* VAR_7 = VAR_2->tags + VAR_2->num_points;


      VAR_6[0] = *VAR_3;
      VAR_6[1] = *VAR_4;

      VAR_7[0] = 0;
      VAR_7[1] = VAR_1;

      VAR_2->num_points += 2;
    }

    VAR_2->movable = VAR_0;

    return VAR_5;
  }
