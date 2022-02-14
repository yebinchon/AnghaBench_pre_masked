
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ pos; } ;
struct TYPE_5__ {size_t type; scalar_t__ offset; size_t size; size_t format; } ;
typedef TYPE_1__* PCF_Table ;
typedef size_t FT_ULong ;
typedef TYPE_2__* FT_Stream ;
typedef int FT_Error ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static FT_Error
  FUNC_3( FT_Stream VAR_3,
                          PCF_Table VAR_4,
                          FT_ULong VAR_5,
                          FT_ULong VAR_6,
                          FT_ULong *VAR_7,
                          FT_ULong *VAR_8 )
  {
    FT_Error VAR_9 = FUNC_0( VAR_1 );
    FT_ULong VAR_10;


    for ( VAR_10 = 0; VAR_10 < VAR_5; VAR_10++ )
      if ( VAR_4[VAR_10].type == VAR_6 )
      {
        if ( VAR_3->pos > VAR_4[VAR_10].offset )
        {
          VAR_9 = FUNC_2( VAR_2 );
          goto Fail;
        }

        if ( FUNC_1( VAR_4[VAR_10].offset - VAR_3->pos ) )
        {
          VAR_9 = FUNC_2( VAR_2 );
          goto Fail;
        }

        *VAR_8 = VAR_4[VAR_10].size;
        *VAR_7 = VAR_4[VAR_10].format;

        return VAR_0;
      }

  Fail:
    *VAR_8 = 0;
    return VAR_9;
  }
