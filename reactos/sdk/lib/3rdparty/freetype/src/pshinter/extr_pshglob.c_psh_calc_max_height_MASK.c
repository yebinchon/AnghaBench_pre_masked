
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FT_UInt ;
typedef scalar_t__ FT_Short ;



__attribute__((used)) static FT_Short
  FUNC_0( FT_UInt VAR_0,
                       const FT_Short* VAR_1,
                       FT_Short VAR_2 )
  {
    FT_UInt VAR_3;


    for ( VAR_3 = 0; VAR_3 < VAR_0; VAR_3 += 2 )
    {
      FT_Short VAR_4 = VAR_1[VAR_3 + 1] - VAR_1[VAR_3];


      if ( VAR_4 > VAR_2 )
        VAR_2 = VAR_4;
    }

    return VAR_2;
  }
