
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ num_masks; int masks; } ;
struct TYPE_4__ {TYPE_2__ counters; } ;
typedef int PS_Mask ;
typedef TYPE_1__* PS_Dimension ;
typedef scalar_t__ FT_UInt ;
typedef int FT_Memory ;
typedef scalar_t__ FT_Int ;
typedef scalar_t__ FT_Error ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,scalar_t__,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int ,int *) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static FT_Error
  FUNC_3( PS_Dimension VAR_1,
                            FT_Int VAR_2,
                            FT_Int VAR_3,
                            FT_Int VAR_4,
                            FT_Memory VAR_5 )
  {
    FT_Error VAR_6 = VAR_0;
    FT_UInt VAR_7 = VAR_1->counters.num_masks;
    PS_Mask VAR_8 = VAR_1->counters.masks;




    for ( ; VAR_7 > 0; VAR_7--, VAR_8++ )
    {
      if ( FUNC_2( VAR_8, VAR_2 ) ||
           FUNC_2( VAR_8, VAR_3 ) ||
           FUNC_2( VAR_8, VAR_4 ) )
        break;
    }


    if ( VAR_7 == 0 )
    {
      VAR_6 = FUNC_1( &VAR_1->counters, VAR_5, &VAR_8 );
      if ( VAR_6 )
        goto Exit;
    }


    if ( VAR_2 >= 0 )
    {
      VAR_6 = FUNC_0( VAR_8, (FT_UInt)VAR_2, VAR_5 );
      if ( VAR_6 )
        goto Exit;
    }

    if ( VAR_3 >= 0 )
    {
      VAR_6 = FUNC_0( VAR_8, (FT_UInt)VAR_3, VAR_5 );
      if ( VAR_6 )
        goto Exit;
    }

    if ( VAR_4 >= 0 )
    {
      VAR_6 = FUNC_0( VAR_8, (FT_UInt)VAR_4, VAR_5 );
      if ( VAR_6 )
        goto Exit;
    }

  Exit:
    return VAR_6;
  }
