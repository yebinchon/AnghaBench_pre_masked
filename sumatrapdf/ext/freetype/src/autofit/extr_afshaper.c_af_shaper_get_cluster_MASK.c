
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* globals; } ;
struct TYPE_4__ {int face; } ;
typedef scalar_t__ FT_ULong ;
typedef int FT_Face ;
typedef TYPE_2__* AF_StyleMetrics ;


 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (scalar_t__,char const*) ;

const char*
  FUNC_2( const char* VAR_0,
                         AF_StyleMetrics VAR_1,
                         void* VAR_2,
                         unsigned int* VAR_3 )
  {
    FT_Face VAR_4 = VAR_1->globals->face;
    FT_ULong VAR_5, VAR_6 = 0;
    FT_ULong* VAR_7 = (FT_ULong*)VAR_2;


    while ( *VAR_0 == ' ' )
      VAR_0++;

    FUNC_1( VAR_5, VAR_0 );



    while ( !( *VAR_0 == ' ' || *VAR_0 == '\0' ) )
      FUNC_1( VAR_6, VAR_0 );

    if ( VAR_6 )
    {
      *VAR_7 = 0;
      *VAR_3 = 0;
    }
    else
    {
      *VAR_7 = FUNC_0( VAR_4, VAR_5 );
      *VAR_3 = 1;
    }

    return VAR_0;
  }
