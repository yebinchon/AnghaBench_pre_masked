
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;


struct TYPE_17__ {int * cursor; } ;
struct TYPE_16__ {int firstCol; int lastCol; int firstRow; int lastRow; int defaultChar; int* offset; } ;
struct TYPE_14__ {int count; int tables; } ;
struct TYPE_15__ {int nmetrics; int * metrics; TYPE_1__ toc; TYPE_3__ enc; } ;
struct TYPE_13__ {int memory; } ;
typedef int PCF_MetricRec ;
typedef TYPE_2__* PCF_Face ;
typedef TYPE_3__* PCF_Enc ;
typedef int FT_UShort ;
typedef int FT_ULong ;
typedef TYPE_4__* FT_Stream ;
typedef int FT_Memory ;
typedef scalar_t__ FT_Error ;
typedef int FT_Byte ;


 TYPE_11__* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int ,TYPE_3__*) ;
 scalar_t__ FUNC_9 (TYPE_4__*,int) ;
 int FUNC_10 (TYPE_4__*) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_15 (int) ;
 int VAR_4 ;
 int FUNC_16 (int,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_17 (TYPE_4__*,int ,int ,int ,int*,int*) ;

__attribute__((used)) static FT_Error
  FUNC_18( FT_Stream VAR_7,
                     PCF_Face VAR_8 )
  {
    FT_Error VAR_9;
    FT_Memory VAR_10 = FUNC_0( VAR_8 )->memory;
    FT_ULong VAR_11, VAR_12;
    PCF_Enc VAR_13 = &VAR_8->enc;
    FT_ULong VAR_14;
    FT_UShort* VAR_15;
    FT_UShort VAR_16, VAR_17;
    FT_UShort VAR_18, VAR_19;
    FT_UShort VAR_20, VAR_21;
    FT_Byte* VAR_22;


    VAR_9 = FUNC_17( VAR_7,
                                    VAR_8->toc.tables,
                                    VAR_8->toc.count,
                                    VAR_3,
                                    &VAR_11,
                                    &VAR_12 );
    if ( VAR_9 )
      goto Bail;

    if ( FUNC_7( VAR_11 ) )
      goto Bail;

    FUNC_13(( "pcf_get_encodings:\n"
                "  format: 0x%lX (%s)\n",
                VAR_11,
                FUNC_15( VAR_11 ) == VAR_2 ? "MSB" : "LSB" ));

    if ( !FUNC_16( VAR_11, VAR_4 ) &&
         !FUNC_16( VAR_11, VAR_3 ) )
      return FUNC_11( VAR_0 );

    if ( FUNC_15( VAR_11 ) == VAR_2 )
    {
      if ( FUNC_8( VAR_6, VAR_13 ) )
        goto Bail;
    }
    else
    {
      if ( FUNC_8( VAR_5, VAR_13 ) )
        goto Bail;
    }

    FUNC_13(( "  firstCol 0x%X, lastCol 0x%X\n"
                "  firstRow 0x%X, lastRow 0x%X\n"
                "  defaultChar 0x%X\n",
                VAR_13->firstCol, VAR_13->lastCol,
                VAR_13->firstRow, VAR_13->lastRow,
                VAR_13->defaultChar ));


    if ( VAR_13->firstCol > VAR_13->lastCol ||
         VAR_13->lastCol > 0xFF ||
         VAR_13->firstRow > VAR_13->lastRow ||
         VAR_13->lastRow > 0xFF )
      return FUNC_11( VAR_1 );

    VAR_14 = (FT_ULong)( VAR_13->lastCol - VAR_13->firstCol + 1 ) *
                (FT_ULong)( VAR_13->lastRow - VAR_13->firstRow + 1 );

    if ( FUNC_4( VAR_13->offset, VAR_14 ) )
      goto Bail;

    VAR_9 = FUNC_9( VAR_7, 2 * VAR_14 );
    if ( VAR_9 )
      goto Exit;

    FUNC_14(( "\n" ));

    VAR_16 = VAR_13->defaultChar >> 8;
    VAR_17 = VAR_13->defaultChar & 0xFF;


    if ( VAR_16 < VAR_13->firstRow ||
         VAR_16 > VAR_13->lastRow ||
         VAR_17 < VAR_13->firstCol ||
         VAR_17 > VAR_13->lastCol )
    {
      VAR_13->defaultChar = VAR_13->firstRow * 256U + VAR_13->firstCol;
      FUNC_12(( "pcf_get_encodings:"
                  " Invalid default character set to %u\n",
                  VAR_13->defaultChar ));

      VAR_16 = VAR_13->firstRow;
      VAR_17 = VAR_13->firstCol;
    }
    VAR_22 = VAR_7->cursor +
            2 * ( ( VAR_16 - VAR_13->firstRow ) *
                  ( VAR_13->lastCol - VAR_13->firstCol + 1 ) +
                    VAR_17 - VAR_13->firstCol );

    if ( FUNC_15( VAR_11 ) == VAR_2 )
      VAR_19 = FUNC_5( VAR_22 );
    else
      VAR_19 = FUNC_6( VAR_22 );

    if ( VAR_19 >= VAR_8->nmetrics )
    {
      FUNC_12(( "pcf_get_encodings:"
                  " Invalid glyph index for default character,"
                  " setting to zero\n" ));
      VAR_19 = 0;
    }

    if ( VAR_19 )
    {

      PCF_MetricRec VAR_23 = VAR_8->metrics[VAR_19];


      VAR_8->metrics[VAR_19] = VAR_8->metrics[0];
      VAR_8->metrics[0] = VAR_23;
    }

    VAR_15 = VAR_13->offset;
    for ( VAR_20 = VAR_13->firstRow; VAR_20 <= VAR_13->lastRow; VAR_20++ )
    {
      for ( VAR_21 = VAR_13->firstCol; VAR_21 <= VAR_13->lastCol; VAR_21++ )
      {




        if ( FUNC_15( VAR_11 ) == VAR_2 )
          VAR_18 = FUNC_2();
        else
          VAR_18 = FUNC_3();

        if ( VAR_18 != 0xFFFFU )
        {
          if ( VAR_18 == VAR_19 )
            VAR_18 = 0;
          else if ( VAR_18 == 0 )
            VAR_18 = VAR_19;
        }

        *VAR_15++ = VAR_18;
      }
    }
    FUNC_10( VAR_7 );

    return VAR_9;

  Exit:
    FUNC_1( VAR_13->offset );

  Bail:
    return VAR_9;
  }
