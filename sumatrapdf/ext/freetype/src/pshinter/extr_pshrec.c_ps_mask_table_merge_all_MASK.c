
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ num_masks; } ;
typedef TYPE_1__* PS_Mask_Table ;
typedef int FT_UInt ;
typedef int FT_Memory ;
typedef scalar_t__ FT_Int ;
typedef scalar_t__ FT_Error ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ,int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static FT_Error
  FUNC_2( PS_Mask_Table VAR_1,
                           FT_Memory VAR_2 )
  {
    FT_Int VAR_3, VAR_4;
    FT_Error VAR_5 = VAR_0;



    for ( VAR_3 = (FT_Int)VAR_1->num_masks - 1; VAR_3 > 0; VAR_3-- )
    {
      for ( VAR_4 = VAR_3 - 1; VAR_4 >= 0; VAR_4-- )
      {
        if ( FUNC_1( VAR_1,
                                           (FT_UInt)VAR_3,
                                           (FT_UInt)VAR_4 ) )
        {
          VAR_5 = FUNC_0( VAR_1,
                                       (FT_UInt)VAR_4,
                                       (FT_UInt)VAR_3,
                                       VAR_2 );
          if ( VAR_5 )
            goto Exit;

          break;
        }
      }
    }

  Exit:
    return VAR_5;
  }
