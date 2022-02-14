
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {char* ttf_data; int ttf_size; } ;
struct TYPE_11__ {char* limit; char* cursor; scalar_t__ error; int memory; } ;
struct TYPE_12__ {TYPE_1__ root; } ;
struct TYPE_13__ {TYPE_2__ parser; } ;
typedef TYPE_2__* T42_Parser ;
typedef TYPE_3__* T42_Loader ;
typedef int T42_Load_Status ;
typedef TYPE_4__* T42_Face ;
typedef scalar_t__ FT_ULong ;
typedef int FT_Memory ;
typedef scalar_t__ FT_Long ;
typedef int FT_Int ;
typedef scalar_t__ FT_Error ;
typedef char FT_Byte ;
typedef int FT_Bool ;




 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*,int,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_0 ;

 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,char*,scalar_t__,scalar_t__*,int) ;
 scalar_t__ FUNC_8 (TYPE_2__*) ;
 scalar_t__ FUNC_9 (char) ;

__attribute__((used)) static void
  FUNC_10( T42_Face VAR_1,
                   T42_Loader VAR_2 )
  {
    T42_Parser VAR_3 = &VAR_2->parser;
    FT_Memory VAR_4 = VAR_3->root.memory;
    FT_Byte* VAR_5;
    FT_Byte* VAR_6 = VAR_3->root.limit;
    FT_Error VAR_7;
    FT_Int VAR_8 = 0;
    FT_Long VAR_9;

    FT_ULong VAR_10, VAR_11, VAR_12, VAR_13;
    FT_Byte* VAR_14 = ((void*)0);
    FT_Bool VAR_15 = 0;

    T42_Load_Status VAR_16;
    FUNC_6( VAR_3 );

    if ( VAR_3->root.cursor >= VAR_6 || *VAR_3->root.cursor++ != '[' )
    {
      FUNC_0(( "t42_parse_sfnts: can't find begin of sfnts vector\n" ));
      VAR_7 = FUNC_4( VAR_0 );
      goto Fail;
    }

    FUNC_6( VAR_3 );
    VAR_16 = 130;
    VAR_11 = 0;
    VAR_12 = 0;
    VAR_9 = 0;

    while ( VAR_3->root.cursor < VAR_6 )
    {
      FT_ULong VAR_17;


      VAR_5 = VAR_3->root.cursor;

      if ( *VAR_5 == ']' )
      {
        VAR_3->root.cursor++;
        goto Exit;
      }

      else if ( *VAR_5 == '<' )
      {
        FUNC_5( VAR_3 );
        if ( VAR_3->root.error )
          goto Exit;


        VAR_11 = (FT_ULong)( ( VAR_3->root.cursor - VAR_5 - 2 + 1 ) / 2 );
        if ( !VAR_11 )
        {
          FUNC_0(( "t42_parse_sfnts: invalid data in sfnts array\n" ));
          VAR_7 = FUNC_4( VAR_0 );
          goto Fail;
        }
        if ( FUNC_3( VAR_14, VAR_12, VAR_11 ) )
          goto Fail;

        VAR_15 = 1;

        VAR_3->root.cursor = VAR_5;
        (void)FUNC_7( VAR_3, VAR_14, VAR_11, &VAR_13, 1 );
        VAR_12 = VAR_11;
        VAR_11 = VAR_13;
      }

      else if ( FUNC_9( *VAR_5 ) )
      {
        FT_Long VAR_18;


        if ( VAR_15 )
        {
          FUNC_0(( "t42_parse_sfnts: "
                     "can't handle mixed binary and hex strings\n" ));
          VAR_7 = FUNC_4( VAR_0 );
          goto Fail;
        }

        VAR_18 = FUNC_8( VAR_3 );
        if ( VAR_18 < 0 )
        {
          FUNC_0(( "t42_parse_sfnts: invalid string size\n" ));
          VAR_7 = FUNC_4( VAR_0 );
          goto Fail;
        }
        else
          VAR_11 = (FT_ULong)VAR_18;

        FUNC_5( VAR_3 );
        if ( VAR_3->root.error )
          return;

        VAR_14 = VAR_3->root.cursor + 1;

        if ( (FT_ULong)( VAR_6 - VAR_3->root.cursor ) <= VAR_11 )
        {
          FUNC_0(( "t42_parse_sfnts: too much binary data\n" ));
          VAR_7 = FUNC_4( VAR_0 );
          goto Fail;
        }
        else
          VAR_3->root.cursor += VAR_11 + 1;
      }

      if ( !VAR_14 )
      {
        FUNC_0(( "t42_parse_sfnts: invalid data in sfnts array\n" ));
        VAR_7 = FUNC_4( VAR_0 );
        goto Fail;
      }



      if ( ( VAR_11 & 1 ) && VAR_14[VAR_11 - 1] == 0 )
        VAR_11--;

      if ( !VAR_11 )
      {
        FUNC_0(( "t42_parse_sfnts: invalid string\n" ));
        VAR_7 = FUNC_4( VAR_0 );
        goto Fail;
      }




      VAR_17 = (FT_ULong)( VAR_6 - VAR_3->root.cursor );

      for ( VAR_10 = 0; VAR_10 < VAR_11; VAR_10++ )
      {
        switch ( VAR_16 )
        {
        case 130:

          if ( VAR_9 < 12 )
          {
            VAR_1->ttf_data[VAR_9++] = VAR_14[VAR_10];
            continue;
          }
          else
          {
            VAR_8 = 16 * VAR_1->ttf_data[4] + VAR_1->ttf_data[5];
            VAR_16 = 129;
            VAR_1->ttf_size = 12 + 16 * VAR_8;

            if ( (FT_Long)VAR_17 < VAR_1->ttf_size )
            {
              FUNC_0(( "t42_parse_sfnts: invalid data in sfnts array\n" ));
              VAR_7 = FUNC_4( VAR_0 );
              goto Fail;
            }

            if ( FUNC_3( VAR_1->ttf_data, 12, VAR_1->ttf_size ) )
              goto Fail;
          }


        case 129:

          if ( VAR_9 < VAR_1->ttf_size )
          {
            VAR_1->ttf_data[VAR_9++] = VAR_14[VAR_10];
            continue;
          }
          else
          {
            int VAR_19;
            FT_ULong VAR_20;


            for ( VAR_19 = 0; VAR_19 < VAR_8; VAR_19++ )
            {
              FT_Byte* VAR_21 = VAR_1->ttf_data + 12 + 16 * VAR_19 + 12;


              VAR_20 = FUNC_2( VAR_21 );
              if ( VAR_20 > VAR_17 ||
                   VAR_1->ttf_size > (FT_Long)( VAR_17 - VAR_20 ) )
              {
                FUNC_0(( "t42_parse_sfnts:"
                           " invalid data in sfnts array\n" ));
                VAR_7 = FUNC_4( VAR_0 );
                goto Fail;
              }


              VAR_1->ttf_size += (FT_Long)( ( VAR_20 + 3 ) & ~3U );
            }

            VAR_16 = 128;

            if ( FUNC_3( VAR_1->ttf_data, 12 + 16 * VAR_8,
                             VAR_1->ttf_size + 1 ) )
              goto Fail;
          }


        case 128:

          if ( VAR_9 >= VAR_1->ttf_size )
          {
            FUNC_0(( "t42_parse_sfnts: too much binary data\n" ));
            VAR_7 = FUNC_4( VAR_0 );
            goto Fail;
          }
          VAR_1->ttf_data[VAR_9++] = VAR_14[VAR_10];
        }
      }

      FUNC_6( VAR_3 );
    }


    VAR_7 = FUNC_4( VAR_0 );

  Fail:
    VAR_3->root.error = VAR_7;

  Exit:
    if ( VAR_15 )
      FUNC_1( VAR_14 );
  }
