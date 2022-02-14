
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ num_masks; scalar_t__ masks; } ;
typedef TYPE_1__* PS_Mask_Table ;
typedef scalar_t__ PS_Mask ;
typedef scalar_t__ FT_UInt ;
typedef int FT_Memory ;
typedef scalar_t__ FT_Error ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ,scalar_t__*) ;

__attribute__((used)) static FT_Error
  FUNC_1( PS_Mask_Table VAR_1,
                      FT_Memory VAR_2,
                      PS_Mask *VAR_3 )
  {
    FT_Error VAR_4 = VAR_0;
    FT_UInt VAR_5;
    PS_Mask VAR_6;


    VAR_5 = VAR_1->num_masks;
    if ( VAR_5 == 0 )
    {
      VAR_4 = FUNC_0( VAR_1, VAR_2, &VAR_6 );
      if ( VAR_4 )
        goto Exit;
    }
    else
      VAR_6 = VAR_1->masks + VAR_5 - 1;

  Exit:
    *VAR_3 = VAR_6;
    return VAR_4;
  }
