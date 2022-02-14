
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ (* char_type_func ) (scalar_t__) ;
struct TYPE_6__ {scalar_t__ cursor; } ;
struct TYPE_5__ {int stringLength; char* string; scalar_t__ stringOffset; } ;
typedef TYPE_1__* TT_Name ;
typedef int FT_UInt ;
typedef char FT_String ;
typedef TYPE_2__* FT_Stream ;
typedef int FT_Memory ;
typedef int FT_Error ;
typedef scalar_t__ FT_Char ;
typedef scalar_t__ FT_Bool ;


 scalar_t__ FUNC_0 (char*,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static char*
  FUNC_7( FT_Memory VAR_1,
                  FT_Stream VAR_2,
                  TT_Name VAR_3,
                  char_type_func VAR_4,
                  FT_Bool VAR_5 )
  {
    FT_Error VAR_6 = VAR_0;

    char* VAR_7 = ((void*)0);
    FT_String* VAR_8;
    FT_Char* VAR_9;
    FT_UInt VAR_10;

    FUNC_6( VAR_6 );


    if ( FUNC_0( VAR_7, VAR_3->stringLength / 2 + 1 ) )
      return ((void*)0);

    if ( FUNC_4( VAR_3->stringOffset ) ||
         FUNC_1( VAR_3->stringLength ) )
      goto get_win_string_error;

    VAR_8 = (FT_String*)VAR_7;
    VAR_9 = (FT_Char*)VAR_2->cursor;

    for ( VAR_10 = VAR_3->stringLength / 2; VAR_10 > 0; VAR_10--, VAR_9 += 2 )
    {
      if ( VAR_9[0] == 0 && VAR_4( VAR_9[1] ) )
        *VAR_8++ = VAR_9[1];
      else
      {
        if ( VAR_5 )
          FUNC_5(( "get_win_string:"
                      " Character 0x%X invalid in PS name string\n",
                      ((unsigned)VAR_9[0])*256 + (unsigned)VAR_9[1] ));
        break;
      }
    }
    if ( !VAR_10 )
      *VAR_8 = '\0';

    FUNC_2();

    if ( !VAR_10 )
      return VAR_7;

  get_win_string_error:
    FUNC_3( VAR_7 );

    VAR_3->stringLength = 0;
    VAR_3->stringOffset = 0;
    FUNC_3( VAR_3->string );

    return ((void*)0);
  }
