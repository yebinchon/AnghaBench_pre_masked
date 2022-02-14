
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ first; scalar_t__ count; } ;
typedef scalar_t__ FT_UInt32 ;
typedef scalar_t__ FT_UInt ;
typedef TYPE_1__* FNT_CMap ;



__attribute__((used)) static FT_UInt32
  FUNC_0( FNT_CMap VAR_0,
                      FT_UInt32 *VAR_1 )
  {
    FT_UInt VAR_2 = 0;
    FT_UInt32 VAR_3 = 0;
    FT_UInt32 VAR_4 = *VAR_1 + 1;


    if ( VAR_4 <= VAR_0->first )
    {
      VAR_3 = VAR_0->first;
      VAR_2 = 1;
    }
    else
    {
      VAR_4 -= VAR_0->first;
      if ( VAR_4 < VAR_0->count )
      {
        VAR_3 = VAR_0->first + VAR_4;
        VAR_2 = (FT_UInt)( VAR_4 + 1 );
      }
    }

    *VAR_1 = VAR_3;
    return VAR_2;
  }
