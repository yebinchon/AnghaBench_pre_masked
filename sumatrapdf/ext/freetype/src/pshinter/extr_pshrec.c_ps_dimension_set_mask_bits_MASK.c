
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int masks; } ;
typedef TYPE_1__* PS_Dimension ;
typedef int FT_UInt ;
typedef int FT_Memory ;
typedef scalar_t__ FT_Error ;
typedef int FT_Byte ;


 scalar_t__ FUNC_0 (TYPE_1__*,int ,int ) ;
 scalar_t__ FUNC_1 (int *,int const*,int ,int ,int ) ;

__attribute__((used)) static FT_Error
  FUNC_2( PS_Dimension VAR_0,
                              const FT_Byte* VAR_1,
                              FT_UInt VAR_2,
                              FT_UInt VAR_3,
                              FT_UInt VAR_4,
                              FT_Memory VAR_5 )
  {
    FT_Error VAR_6;



    VAR_6 = FUNC_0( VAR_0, VAR_4, VAR_5 );
    if ( VAR_6 )
      goto Exit;


    VAR_6 = FUNC_1( &VAR_0->masks, VAR_1,
                                    VAR_2, VAR_3, VAR_5 );

  Exit:
    return VAR_6;
  }
