
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*,char*) ;
 char* FUNC_1 (char*,char) ;

__attribute__((used)) static int
  FUNC_2( char* VAR_0,
            char** VAR_1 )
  {
    int VAR_2;
    char* VAR_3;


    if ( !VAR_1 )
      return 1;

    VAR_3 = FUNC_1( VAR_0, '.' );
    if ( !VAR_3 )
      return 0;
    if ( VAR_3 < FUNC_1( VAR_0, '/' ) )
      return 0;

    for ( VAR_2 = 0; VAR_1[VAR_2] != ((void*)0); VAR_2++ )
      if ( FUNC_0( VAR_3 + 1, VAR_1[VAR_2] ) == 0 ||
           FUNC_0( VAR_3, VAR_1[VAR_2] ) == 0 )
        return 1;

    return 0;
  }
