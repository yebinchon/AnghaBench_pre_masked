
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int temp ;
struct TYPE_2__ {char const* name; } ;
typedef int OutputFormat ;
typedef int FILE ;






 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (char*,char const*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_3 (char const*,char) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static void
FUNC_4( FILE* VAR_3,
            OutputFormat VAR_4,
            const char* VAR_5 )
{
  int VAR_6;


  switch ( VAR_4 )
  {
    case 128:
      if ( VAR_5 )
        FUNC_1( VAR_3, "LIBRARY %s\n", VAR_5 );

      FUNC_1( VAR_3, "DESCRIPTION  FreeType 2 DLL\n" );
      FUNC_1( VAR_3, "EXPORTS\n" );
      for ( VAR_6 = 0; VAR_6 < VAR_0; VAR_6++ )
        FUNC_1( VAR_3, "  %s\n", VAR_2[VAR_6].name );
      break;

    case 131:
      if ( VAR_5 )
        FUNC_1( VAR_3, "LIBRARY %s\n", VAR_5 );

      FUNC_1( VAR_3, "DESCRIPTION  FreeType 2 DLL\n" );
      FUNC_1( VAR_3, "EXPORTS\n" );
      for ( VAR_6 = 0; VAR_6 < VAR_0; VAR_6++ )
        FUNC_1( VAR_3, "  _%s\n", VAR_2[VAR_6].name );
      break;

    case 129:
      {
        const char* VAR_7;
        char VAR_8[512];


        if ( !VAR_5 )
        {
          FUNC_1( &VAR_1,
                   "you must provide a DLL name with the -d option!\n" );
          FUNC_0( 4 );
        }


        VAR_7 = FUNC_3( VAR_5, '.' );
        if ( VAR_7 )
        {
          int VAR_9 = VAR_7 - VAR_5;


          if ( VAR_9 > (int)( sizeof ( VAR_8 ) - 1 ) )
            VAR_9 = sizeof ( VAR_8 ) - 1;

          FUNC_2( VAR_8, VAR_5, VAR_9 );
          VAR_8[VAR_9] = 0;

          VAR_5 = (const char*)VAR_8;
        }

        for ( VAR_6 = 0; VAR_6 < VAR_0; VAR_6++ )
          FUNC_1( VAR_3, "++_%s.%s.%s\n", VAR_2[VAR_6].name, VAR_5,
                        VAR_2[VAR_6].name );
      }
      break;

    case 130:
      {
        if ( VAR_5 )
          FUNC_1( VAR_3, "  (%s)\n", VAR_5 );
        for ( VAR_6 = 0; VAR_6 < VAR_0 - 1; VAR_6++ )
          FUNC_1( VAR_3, "  %s,\n", VAR_2[VAR_6].name );
        FUNC_1( VAR_3, "  %s\n", VAR_2[VAR_0 - 1].name );
      }
      break;

    default:
      for ( VAR_6 = 0; VAR_6 < VAR_0; VAR_6++ )
        FUNC_1( VAR_3, "%s\n", VAR_2[VAR_6].name );
  }
}
