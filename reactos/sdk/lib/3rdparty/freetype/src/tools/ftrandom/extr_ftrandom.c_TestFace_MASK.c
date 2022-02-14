
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int outline; } ;
struct TYPE_8__ {unsigned int num_glyphs; TYPE_4__* glyph; } ;
typedef TYPE_1__* FT_Face ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*,unsigned int,int) ;
 int FUNC_3 (int *,int *,int *) ;
 int FUNC_4 (TYPE_4__*,int ) ;
 int FUNC_5 (TYPE_1__*,int ,int ,int,int) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static void
  FUNC_6( FT_Face VAR_9 )
  {
    unsigned int VAR_10;
    int VAR_11 = VAR_0;


    if ( VAR_3 &&
         FUNC_1( VAR_9 ) )
      VAR_11 = VAR_1;

    if ( VAR_6 )
      VAR_11 |= VAR_2;

    FUNC_5( VAR_9, 0, VAR_4, 72, 72 );

    for ( VAR_10 = 0; VAR_10 < VAR_9->num_glyphs; VAR_10++ )
    {
      if ( VAR_3 &&
           FUNC_1( VAR_9 ) )
      {
        if ( !FUNC_2( VAR_9, VAR_10, VAR_11 ) )
          FUNC_3( &VAR_9->glyph->outline, &VAR_7, ((void*)0) );
      }
      else
        FUNC_2( VAR_9, VAR_10, VAR_11 );

      if ( VAR_8 )
        FUNC_4( VAR_9->glyph, VAR_5 );
    }

    FUNC_0( VAR_9 );
  }
