
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fontlist {int isbinary; int isascii; int ishex; char* name; } ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (char*,char*) ;

__attribute__((used)) static void
  FUNC_5( struct fontlist* VAR_1 )
  {
    FILE* VAR_2;


    VAR_1->isbinary = VAR_1->isascii = VAR_1->ishex = 0;

    VAR_2 = FUNC_1( VAR_1->name, "rb" );
    if ( VAR_2 )
    {

      int VAR_3 = FUNC_3( VAR_2 );
      int VAR_4 = FUNC_3( VAR_2 );
      int VAR_5 = FUNC_3( VAR_2 );
      int VAR_6 = FUNC_3( VAR_2 );


      FUNC_0( VAR_2 );

      if ( ( VAR_3 == 0 && VAR_4 == 1 && VAR_5 == 0 && VAR_6 == 0 ) ||
           ( VAR_3 == 'O' && VAR_4 == 'T' && VAR_5 == 'T' && VAR_6 == 'O' ) ||
           ( VAR_3 == 't' && VAR_4 == 'r' && VAR_5 == 'u' && VAR_6 == 'e' ) ||
           ( VAR_3 == 't' && VAR_4 == 't' && VAR_5 == 'c' && VAR_6 == 'f' ) )
      {

        VAR_1->isbinary = 1;
      }
      else if ( VAR_3 == 0x80 && VAR_4 == '\01' )
      {

        VAR_1->isbinary = 1;
      }
      else if ( VAR_3 == '%' && VAR_4 == '!' )
      {

        if ( FUNC_4( VAR_1->name, ".pfa" ) ||
             FUNC_4( VAR_1->name, ".PFA" ) )
          VAR_1->ishex = 1;
        else
          VAR_1->isascii = 1;
      }
      else if ( VAR_3 == 1 && VAR_4 == 0 && VAR_5 == 4 )
      {

        VAR_1->isbinary = 1;
      }
      else if ( VAR_3 == 'S' && VAR_4 == 'T' && VAR_5 == 'A' && VAR_6 == 'R' )
      {

        VAR_1->ishex = 1;
      }
      else if ( VAR_3 == 'P' && VAR_4 == 'F' && VAR_5 == 'R' && VAR_6 == '0' )
      {

        VAR_1->isbinary = 1;
      }
      else if ( ( VAR_3 == '\1' && VAR_4 == 'f' && VAR_5 == 'c' && VAR_6 == 'p' ) ||
                ( VAR_3 == 'M' && VAR_4 == 'Z' ) )
      {

        VAR_1->isbinary = 1;
      }
      else
      {
        FUNC_2( VAR_0,
                 "Can't recognize file type of `%s', assuming binary\n",
                 VAR_1->name );
        VAR_1->isbinary = 1;
      }
    }
    else
    {
      FUNC_2( VAR_0, "Can't open `%s' for typing the file.\n",
               VAR_1->name );
      VAR_1->isbinary = 1;
    }
  }
