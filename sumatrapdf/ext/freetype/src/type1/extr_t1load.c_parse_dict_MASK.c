
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {int const dict; scalar_t__ ident; } ;
struct TYPE_11__ {char* cursor; char* limit; void* error; } ;
struct TYPE_12__ {TYPE_1__ root; } ;
struct TYPE_13__ {int keywords_encountered; TYPE_2__ parser; } ;
typedef TYPE_2__* T1_Parser ;
typedef TYPE_3__* T1_Loader ;
typedef TYPE_4__* T1_Field ;
typedef int T1_Face ;
typedef int FT_ULong ;
typedef int FT_UInt ;
typedef void* FT_Error ;
typedef char FT_Byte ;
typedef int FT_Bool ;


 scalar_t__ FUNC_0 (void*,int ) ;
 void* VAR_0 ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (char*,char*,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (char) ;
 scalar_t__ FUNC_7 (char*,char*,int) ;
 scalar_t__ FUNC_8 (char const*,char*) ;
 int FUNC_9 (char const*) ;
 int FUNC_10 (TYPE_2__*,int*,char**,int ) ;
 int VAR_8 ;
 void* FUNC_11 (int ,TYPE_3__*,TYPE_4__*) ;

__attribute__((used)) static FT_Error
  FUNC_12( T1_Face VAR_9,
              T1_Loader VAR_10,
              FT_Byte* VAR_11,
              FT_ULong VAR_12 )
  {
    T1_Parser VAR_13 = &VAR_10->parser;
    FT_Byte *VAR_14, *VAR_15 = ((void*)0);
    FT_Bool VAR_16 = 0;


    VAR_13->root.cursor = VAR_11;
    VAR_13->root.limit = VAR_11 + VAR_12;
    VAR_13->root.error = VAR_0;

    VAR_14 = VAR_13->root.limit;

    FUNC_5( VAR_13 );

    while ( VAR_13->root.cursor < VAR_14 )
    {
      FT_Byte* VAR_17;


      VAR_17 = VAR_13->root.cursor;


      if ( FUNC_3( VAR_17, VAR_14, "eexec" ) )
        break;


      else if ( FUNC_3( VAR_17, VAR_14, "closefile" ) )
        break;



      else if ( FUNC_3( VAR_17, VAR_14, "FontDirectory" ) )
      {
        if ( VAR_10->keywords_encountered & VAR_7 )
          VAR_10->keywords_encountered |=
            VAR_6;
        VAR_13->root.cursor += 13;
      }


      else if ( FUNC_6( *VAR_17 ) )
      {
        VAR_15 = VAR_17;
        FUNC_4( VAR_13 );
        if ( VAR_13->root.error )
          goto Exit;
        VAR_16 = 1;
      }




      else if ( *VAR_17 == 'R' && VAR_17 + 6 < VAR_14 && *(VAR_17 + 1) == 'D' &&
                VAR_16 )
      {
        FT_ULong VAR_18;
        FT_Byte* VAR_19;


        VAR_13->root.cursor = VAR_15;
        if ( !FUNC_10( VAR_13, &VAR_18, &VAR_19, VAR_1 ) )
          return FUNC_1( VAR_3 );
        VAR_16 = 0;
      }

      else if ( *VAR_17 == '-' && VAR_17 + 6 < VAR_14 && *(VAR_17 + 1) == '|' &&
                VAR_16 )
      {
        FT_ULong VAR_20;
        FT_Byte* VAR_21;


        VAR_13->root.cursor = VAR_15;
        if ( !FUNC_10( VAR_13, &VAR_20, &VAR_21, VAR_1 ) )
          return FUNC_1( VAR_3 );
        VAR_16 = 0;
      }


      else if ( *VAR_17 == '/' && VAR_17 + 2 < VAR_14 )
      {
        FT_UInt VAR_22;


        VAR_17++;

        VAR_13->root.cursor = VAR_17;
        FUNC_4( VAR_13 );
        if ( VAR_13->root.error )
          goto Exit;

        VAR_22 = (FT_UInt)( VAR_13->root.cursor - VAR_17 );

        if ( VAR_22 > 0 && VAR_22 < 22 && VAR_13->root.cursor < VAR_14 )
        {

          T1_Field VAR_23 = (T1_Field)VAR_8;


          for (;;)
          {
            FT_Byte* VAR_24;


            VAR_24 = (FT_Byte*)VAR_23->ident;
            if ( !VAR_24 )
              break;

            if ( VAR_17[0] == VAR_24[0] &&
                 VAR_22 == FUNC_9( (const char *)VAR_24 ) &&
                 FUNC_7( VAR_17, VAR_24, VAR_22 ) == 0 )
            {
              const FT_UInt VAR_25 =
                ( VAR_10->keywords_encountered & VAR_7 )
                    ? VAR_5
                    : VAR_4;


              if ( !( VAR_25 & VAR_23->dict ) )
              {
                FUNC_2(( "parse_dict: found `%s' but ignoring it"
                            " since it is in the wrong dictionary\n",
                            VAR_23->ident ));
                break;
              }

              if ( !( VAR_10->keywords_encountered &
                      VAR_6 ) ||
                   FUNC_8( (const char*)VAR_24, "CharStrings" ) == 0 )
              {
                VAR_13->root.error = FUNC_11( VAR_9,
                                                      VAR_10,
                                                      VAR_23 );
                if ( VAR_13->root.error )
                {
                  if ( FUNC_0( VAR_13->root.error, VAR_2 ) )
                    VAR_13->root.error = VAR_0;
                  else
                    return VAR_13->root.error;
                }
              }
              break;
            }

            VAR_23++;
          }
        }

        VAR_16 = 0;
      }
      else
      {
        FUNC_4( VAR_13 );
        if ( VAR_13->root.error )
          goto Exit;
        VAR_16 = 0;
      }

      FUNC_5( VAR_13 );
    }

  Exit:
    return VAR_13->root.error;
  }
