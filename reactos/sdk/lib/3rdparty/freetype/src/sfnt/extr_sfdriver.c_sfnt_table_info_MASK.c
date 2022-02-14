
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t num_tables; TYPE_1__* dir_tables; } ;
struct TYPE_4__ {size_t Tag; size_t Offset; size_t Length; } ;
typedef TYPE_2__* TT_Face ;
typedef size_t FT_ULong ;
typedef size_t FT_UInt ;
typedef int FT_Error ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static FT_Error
  FUNC_1( TT_Face VAR_3,
                   FT_UInt VAR_4,
                   FT_ULong *VAR_5,
                   FT_ULong *VAR_6,
                   FT_ULong *VAR_7 )
  {
    if ( !VAR_6 || !VAR_7 )
      return FUNC_0( VAR_1 );

    if ( !VAR_5 )
      *VAR_7 = VAR_3->num_tables;
    else
    {
      if ( VAR_4 >= VAR_3->num_tables )
        return FUNC_0( VAR_2 );

      *VAR_5 = VAR_3->dir_tables[VAR_4].Tag;
      *VAR_6 = VAR_3->dir_tables[VAR_4].Offset;
      *VAR_7 = VAR_3->dir_tables[VAR_4].Length;
    }

    return VAR_0;
  }
