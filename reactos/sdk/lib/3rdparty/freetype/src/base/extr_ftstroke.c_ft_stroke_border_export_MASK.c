
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int points; int n_points; int n_contours; scalar_t__* contours; scalar_t__ tags; } ;
struct TYPE_6__ {scalar_t__ num_points; int* tags; int points; } ;
typedef scalar_t__ FT_UInt ;
typedef TYPE_1__* FT_StrokeBorder ;
typedef scalar_t__ FT_Short ;
typedef TYPE_2__ FT_Outline ;
typedef int FT_Byte ;


 int FUNC_0 (int,int ,scalar_t__) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void
  FUNC_3( FT_StrokeBorder VAR_6,
                           FT_Outline* VAR_7 )
  {

    if ( VAR_6->num_points )
      FUNC_0( VAR_7->points + VAR_7->n_points,
                     VAR_6->points,
                     VAR_6->num_points );


    {
      FT_UInt VAR_8 = VAR_6->num_points;
      FT_Byte* VAR_9 = VAR_6->tags;
      FT_Byte* VAR_10 = (FT_Byte*)VAR_7->tags + VAR_7->n_points;


      for ( ; VAR_8 > 0; VAR_8--, VAR_9++, VAR_10++ )
      {
        if ( *VAR_9 & VAR_5 )
          *VAR_10 = VAR_2;
        else if ( *VAR_9 & VAR_3 )
          *VAR_10 = VAR_1;
        else
          *VAR_10 = VAR_0;
      }
    }


    {
      FT_UInt VAR_11 = VAR_6->num_points;
      FT_Byte* VAR_12 = VAR_6->tags;
      FT_Short* VAR_13 = VAR_7->contours + VAR_7->n_contours;
      FT_Short VAR_14 = (FT_Short)VAR_7->n_points;


      for ( ; VAR_11 > 0; VAR_11--, VAR_12++, VAR_14++ )
      {
        if ( *VAR_12 & VAR_4 )
        {
          *VAR_13++ = VAR_14;
          VAR_7->n_contours++;
        }
      }
    }

    VAR_7->n_points += (short)VAR_6->num_points;

    FUNC_1( FUNC_2( VAR_7 ) == 0 );
  }
