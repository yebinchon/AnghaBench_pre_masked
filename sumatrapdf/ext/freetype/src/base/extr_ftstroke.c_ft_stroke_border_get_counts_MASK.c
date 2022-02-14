
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ num_points; int* tags; int valid; int * points; } ;
typedef int FT_Vector ;
typedef scalar_t__ FT_UInt ;
typedef TYPE_1__* FT_StrokeBorder ;
typedef int FT_Int ;
typedef int FT_Error ;
typedef int FT_Byte ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static FT_Error
  FUNC_0( FT_StrokeBorder VAR_4,
                               FT_UInt *VAR_5,
                               FT_UInt *VAR_6 )
  {
    FT_Error VAR_7 = VAR_0;
    FT_UInt VAR_8 = 0;
    FT_UInt VAR_9 = 0;

    FT_UInt VAR_10 = VAR_4->num_points;
    FT_Vector* VAR_11 = VAR_4->points;
    FT_Byte* VAR_12 = VAR_4->tags;
    FT_Int VAR_13 = 0;


    for ( ; VAR_10 > 0; VAR_10--, VAR_8++, VAR_11++, VAR_12++ )
    {
      if ( VAR_12[0] & VAR_1 )
      {
        if ( VAR_13 != 0 )
          goto Fail;

        VAR_13 = 1;
      }
      else if ( VAR_13 == 0 )
        goto Fail;

      if ( VAR_12[0] & VAR_2 )
      {
        VAR_13 = 0;
        VAR_9++;
      }
    }

    if ( VAR_13 != 0 )
      goto Fail;

    VAR_4->valid = VAR_3;

  Exit:
    *VAR_5 = VAR_8;
    *VAR_6 = VAR_9;
    return VAR_7;

  Fail:
    VAR_8 = 0;
    VAR_9 = 0;
    goto Exit;
  }
