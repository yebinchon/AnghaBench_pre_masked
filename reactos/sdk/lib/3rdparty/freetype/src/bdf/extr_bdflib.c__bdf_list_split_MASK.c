
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned long used; unsigned long size; char** field; } ;
typedef TYPE_1__ _bdf_list_t ;
typedef scalar_t__ FT_Error ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (TYPE_1__*,unsigned long) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (char*,char) ;
 int FUNC_4 (char*,char) ;

__attribute__((used)) static FT_Error
  FUNC_5( _bdf_list_t* VAR_3,
                   char* VAR_4,
                   char* VAR_5,
                   unsigned long VAR_6 )
  {
    unsigned long VAR_7;
    int VAR_8;
    char *VAR_9, *VAR_10, *VAR_11;
    char VAR_12[32];
    FT_Error VAR_13 = VAR_0;



    VAR_3->used = 0;
    if ( VAR_3->size )
    {
      VAR_3->field[0] = (char*)VAR_2;
      VAR_3->field[1] = (char*)VAR_2;
      VAR_3->field[2] = (char*)VAR_2;
      VAR_3->field[3] = (char*)VAR_2;
      VAR_3->field[4] = (char*)VAR_2;
    }


    if ( VAR_6 == 0 || VAR_5[0] == 0 )
      goto Exit;




    if ( VAR_4 == 0 || *VAR_4 == 0 )
    {
      VAR_13 = FUNC_1( VAR_1 );
      goto Exit;
    }


    FUNC_0( VAR_12, 32 );




    for ( VAR_8 = 0, VAR_9 = VAR_4; VAR_9 && *VAR_9; VAR_9++ )
    {
      if ( *VAR_9 == '+' && *( VAR_9 + 1 ) == 0 )
        VAR_8 = 1;
      else
        FUNC_4( VAR_12, *VAR_9 );
    }


    for ( VAR_7 = 0, VAR_9 = VAR_10 = VAR_5, VAR_11 = VAR_9 + VAR_6;
          VAR_9 < VAR_11 && *VAR_9; )
    {

      for ( ; *VAR_10 && !FUNC_3( VAR_12, *VAR_10 ); VAR_10++ )
        ;


      if ( VAR_3->used == VAR_3->size )
      {
        VAR_13 = FUNC_2( VAR_3, VAR_3->used + 1 );
        if ( VAR_13 )
          goto Exit;
      }


      VAR_3->field[VAR_3->used++] = ( VAR_10 > VAR_9 ) ? VAR_9 : (char*)VAR_2;

      VAR_9 = VAR_10;

      if ( VAR_8 )
      {


        for ( ; *VAR_10 && FUNC_3( VAR_12, *VAR_10 ); VAR_10++ )
          *VAR_10 = 0;
      }
      else if ( *VAR_10 != 0 )


        *VAR_10++ = 0;

      VAR_7 = ( VAR_10 > VAR_9 && *VAR_10 == 0 );
      VAR_9 = VAR_10;
    }


    if ( VAR_3->used + VAR_7 >= VAR_3->size )
    {
      VAR_13 = FUNC_2( VAR_3, VAR_3->used + VAR_7 + 1 );
      if ( VAR_13 )
        goto Exit;
    }

    if ( VAR_7 )
      VAR_3->field[VAR_3->used++] = (char*)VAR_2;

    VAR_3->field[VAR_3->used] = 0;

  Exit:
    return VAR_13;
  }
