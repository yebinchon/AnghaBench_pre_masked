
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ num_dicts; } ;
struct TYPE_19__ {TYPE_1__ cid; } ;
struct TYPE_15__ {char* cursor; char* limit; scalar_t__ error; } ;
struct TYPE_17__ {scalar_t__ num_dict; TYPE_2__ root; } ;
struct TYPE_18__ {TYPE_4__ parser; } ;
struct TYPE_16__ {scalar_t__ ident; } ;
typedef TYPE_3__* T1_Field ;
typedef int FT_ULong ;
typedef int FT_UInt ;
typedef scalar_t__ FT_Error ;
typedef char FT_Byte ;
typedef TYPE_4__ CID_Parser ;
typedef TYPE_5__ CID_Loader ;
typedef TYPE_6__* CID_Face ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (TYPE_6__*,TYPE_5__*,TYPE_3__*) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (char const*) ;
 scalar_t__ FUNC_7 (char*,char*,int) ;

__attribute__((used)) static FT_Error
  FUNC_8( CID_Face VAR_3,
                  CID_Loader* VAR_4,
                  FT_Byte* VAR_5,
                  FT_ULong VAR_6 )
  {
    CID_Parser* VAR_7 = &VAR_4->parser;


    VAR_7->root.cursor = VAR_5;
    VAR_7->root.limit = VAR_5 + VAR_6;
    VAR_7->root.error = VAR_0;

    {
      FT_Byte* VAR_8 = VAR_5;
      FT_Byte* VAR_9 = VAR_8 + VAR_6;


      for (;;)
      {
        FT_Byte* VAR_10;


        VAR_7->root.cursor = VAR_8;
        FUNC_5( VAR_7 );

        if ( VAR_7->root.cursor >= VAR_9 )
          VAR_10 = VAR_9 - 1 - 17;
        else
          VAR_10 = VAR_7->root.cursor - 17;


        for ( ; VAR_8 < VAR_10; VAR_8++ )
        {
          if ( *VAR_8 == '%' &&
               FUNC_7( (char*)VAR_8, "%ADOBeginFontDict", 17 ) == 0 )
          {


            if ( VAR_3->cid.num_dicts > 0 )
            {
              VAR_7->num_dict++;







            }
          }
        }

        VAR_8 = VAR_7->root.cursor;

        if ( VAR_8 >= VAR_9 )
          break;

        FUNC_4( VAR_7 );
        if ( VAR_7->root.cursor >= VAR_9 || VAR_7->root.error )
          break;


        if ( *VAR_8 == '/' && VAR_8 + 2 < VAR_9 )
        {
          FT_UInt VAR_11;


          VAR_8++;
          VAR_11 = (FT_UInt)( VAR_7->root.cursor - VAR_8 );

          if ( VAR_11 > 0 && VAR_11 < 22 )
          {

            T1_Field VAR_12 = (T1_Field)VAR_2;


            for (;;)
            {
              FT_Byte* VAR_13;


              VAR_13 = (FT_Byte*)VAR_12->ident;
              if ( !VAR_13 )
                break;

              if ( VAR_8[0] == VAR_13[0] &&
                   VAR_11 == FUNC_6( (const char*)VAR_13 ) )
              {
                FT_UInt VAR_14;


                for ( VAR_14 = 1; VAR_14 < VAR_11; VAR_14++ )
                  if ( VAR_8[VAR_14] != VAR_13[VAR_14] )
                    break;

                if ( VAR_14 >= VAR_11 )
                {

                  VAR_7->root.error = FUNC_3( VAR_3,
                                                         VAR_4,
                                                         VAR_12 );
                  if ( VAR_7->root.error )
                    return VAR_7->root.error;
                  break;
                }
              }
              VAR_12++;
            }
          }
        }

        VAR_8 = VAR_7->root.cursor;
      }

      if ( !VAR_3->cid.num_dicts )
      {
        FUNC_0(( "cid_parse_dict: No font dictionary found\n" ));
        return FUNC_1( VAR_1 );
      }
    }

    return VAR_7->root.error;
  }
