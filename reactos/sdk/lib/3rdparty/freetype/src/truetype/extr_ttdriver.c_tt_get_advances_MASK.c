
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int variation_support; } ;
typedef TYPE_1__* TT_Face ;
typedef int FT_UShort ;
typedef scalar_t__ FT_UInt ;
typedef int FT_Short ;
typedef int FT_Int32 ;
typedef int FT_Fixed ;
typedef int FT_Face ;
typedef int FT_Error ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (TYPE_1__*,scalar_t__,int *,int *) ;
 int FUNC_4 (TYPE_1__*,scalar_t__,int ,int *,int *) ;
 int VAR_4 ;

__attribute__((used)) static FT_Error
  FUNC_5( FT_Face VAR_5,
                   FT_UInt VAR_6,
                   FT_UInt VAR_7,
                   FT_Int32 VAR_8,
                   FT_Fixed *VAR_9 )
  {
    FT_UInt VAR_10;
    TT_Face VAR_11 = (TT_Face)VAR_5;




    if ( VAR_8 & VAR_1 )
    {







      for ( VAR_10 = 0; VAR_10 < VAR_7; VAR_10++ )
      {
        FT_Short VAR_12;
        FT_UShort VAR_13;



        FUNC_4( VAR_11, VAR_6 + VAR_10, 0, &VAR_12, &VAR_13 );
        VAR_9[VAR_10] = VAR_13;
      }
    }
    else
    {







      for ( VAR_10 = 0; VAR_10 < VAR_7; VAR_10++ )
      {
        FT_Short VAR_14;
        FT_UShort VAR_15;


        FUNC_3( VAR_11, VAR_6 + VAR_10, &VAR_14, &VAR_15 );
        VAR_9[VAR_10] = VAR_15;
      }
    }

    return VAR_0;
  }
