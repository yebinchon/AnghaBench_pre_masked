
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* globals; } ;
struct TYPE_4__ {int face; } ;
typedef int FT_ULong ;
typedef scalar_t__ FT_Long ;
typedef int FT_Face ;
typedef TYPE_2__* AF_StyleMetrics ;


 int FUNC_0 (int ,int ,int,scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (unsigned int) ;

FT_ULong
  FUNC_2( AF_StyleMetrics VAR_3,
                      void* VAR_4,
                      unsigned int VAR_5,
                      FT_Long* VAR_6,
                      FT_Long* VAR_7 )
  {
    FT_Face VAR_8 = VAR_3->globals->face;
    FT_ULong VAR_9 = *(FT_ULong*)VAR_4;

    FUNC_1( VAR_5 );


    if ( VAR_6 )
      FUNC_0( VAR_8,
                      VAR_9,
                      VAR_2 |
                      VAR_1 |
                      VAR_0,
                      VAR_6 );

    if ( VAR_7 )
      *VAR_7 = 0;

    return VAR_9;
  }
