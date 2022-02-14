
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FT_UInt ;
typedef scalar_t__ FT_String ;
typedef int FT_Memory ;
typedef int FT_Error ;
typedef int FT_Byte ;


 scalar_t__ FUNC_0 (scalar_t__*,int) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (scalar_t__*,int*,int) ;

__attribute__((used)) static FT_Error
  FUNC_3( FT_Byte* VAR_1,
                     FT_UInt VAR_2,
                     FT_Memory VAR_3,
                     FT_String* *VAR_4 )
  {
    FT_Error VAR_5 = VAR_0;
    FT_String* VAR_6 = ((void*)0);
    FT_UInt VAR_7, VAR_8;


    if ( *VAR_4 )
      FUNC_1( *VAR_4 );

    if ( VAR_2 > 0 && VAR_1[VAR_2 - 1] == 0 )
      VAR_2--;



    VAR_8 = ( VAR_2 > 0 );
    for ( VAR_7 = 0; VAR_7 < VAR_2; VAR_7++ )
      if ( VAR_1[VAR_7] < 32 || VAR_1[VAR_7] > 127 )
      {
        VAR_8 = 0;
        break;
      }

    if ( VAR_8 )
    {
      if ( FUNC_0( VAR_6, VAR_2 + 1 ) )
        goto Exit;

      FUNC_2( VAR_6, VAR_1, VAR_2 );
      VAR_6[VAR_2] = 0;
    }

  Exit:
    *VAR_4 = VAR_6;
    return VAR_5;
  }
