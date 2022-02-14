
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ max_points; scalar_t__ num_points; int tags; int points; int memory; } ;
typedef scalar_t__ FT_UInt ;
typedef TYPE_1__* FT_StrokeBorder ;
typedef int FT_Memory ;
typedef int FT_Error ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static FT_Error
  FUNC_1( FT_StrokeBorder VAR_1,
                         FT_UInt VAR_2 )
  {
    FT_UInt VAR_3 = VAR_1->max_points;
    FT_UInt VAR_4 = VAR_1->num_points + VAR_2;
    FT_Error VAR_5 = VAR_0;


    if ( VAR_4 > VAR_3 )
    {
      FT_UInt VAR_6 = VAR_3;
      FT_Memory VAR_7 = VAR_1->memory;


      while ( VAR_6 < VAR_4 )
        VAR_6 += ( VAR_6 >> 1 ) + 16;

      if ( FUNC_0( VAR_1->points, VAR_3, VAR_6 ) ||
           FUNC_0( VAR_1->tags, VAR_3, VAR_6 ) )
        goto Exit;

      VAR_1->max_points = VAR_6;
    }

  Exit:
    return VAR_5;
  }
