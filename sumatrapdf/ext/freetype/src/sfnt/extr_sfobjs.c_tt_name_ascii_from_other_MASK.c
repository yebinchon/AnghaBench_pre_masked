
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ stringLength; scalar_t__ string; } ;
typedef TYPE_1__* TT_Name ;
typedef int FT_UInt ;
typedef char FT_String ;
typedef int FT_Memory ;
typedef int FT_Error ;
typedef int FT_Byte ;


 scalar_t__ FUNC_0 (char*,int) ;

__attribute__((used)) static FT_String*
  FUNC_1( TT_Name VAR_0,
                            FT_Memory VAR_1 )
  {
    FT_String* VAR_2 = ((void*)0);
    FT_UInt VAR_3, VAR_4, VAR_5;
    FT_Byte* VAR_6 = (FT_Byte*)VAR_0->string;
    FT_Error VAR_7;


    VAR_3 = (FT_UInt)VAR_0->stringLength;

    if ( FUNC_0( VAR_2, VAR_3 + 1 ) )
      return ((void*)0);

    for ( VAR_5 = 0; VAR_5 < VAR_3; VAR_5++ )
    {
      VAR_4 = *VAR_6++;

      if ( VAR_4 == 0 )
        break;

      if ( VAR_4 < 32 || VAR_4 > 127 )
        VAR_4 = '?';

      VAR_2[VAR_5] = (char)VAR_4;
    }

    VAR_2[VAR_5] = 0;

    return VAR_2;
  }
