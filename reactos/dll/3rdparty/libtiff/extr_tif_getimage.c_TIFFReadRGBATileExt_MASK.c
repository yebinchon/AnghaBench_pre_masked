
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ uint32 ;
struct TYPE_13__ {int tif_clientdata; } ;
struct TYPE_12__ {scalar_t__ height; scalar_t__ width; scalar_t__ col_offset; scalar_t__ row_offset; } ;
typedef TYPE_1__ TIFFRGBAImage ;
typedef TYPE_2__ TIFF ;


 int FUNC_0 (int ,int ,char*,...) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ,scalar_t__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*,int,char*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,scalar_t__*,scalar_t__,scalar_t__) ;
 int FUNC_7 (TYPE_2__*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_8 (scalar_t__*,int ,int) ;
 int FUNC_9 (scalar_t__*,scalar_t__*,scalar_t__) ;

int
FUNC_10(TIFF* VAR_2, uint32 VAR_3, uint32 VAR_4, uint32 * VAR_5, int VAR_6 )
{
    char VAR_7[1024] = "";
    TIFFRGBAImage VAR_8;
    int VAR_9;
    uint32 VAR_10, VAR_11;
    uint32 VAR_12, VAR_13;
    uint32 VAR_14;






    if( !FUNC_3( VAR_2 ) )
    {
  FUNC_0(VAR_2->tif_clientdata, FUNC_1(VAR_2),
      "Can't use TIFFReadRGBATile() with stripped file.");
  return (0);
    }

    FUNC_2(VAR_2, VAR_1, &VAR_10);
    FUNC_2(VAR_2, VAR_0, &VAR_11);
    if( (VAR_3 % VAR_10) != 0 || (VAR_4 % VAR_11) != 0 )
    {
  FUNC_0(VAR_2->tif_clientdata, FUNC_1(VAR_2),
                  "Row/col passed to TIFFReadRGBATile() must be top"
                  "left corner of a tile.");
 return (0);
    }





    if (!FUNC_7(VAR_2, VAR_7)
 || !FUNC_4(&VAR_8, VAR_2, VAR_6, VAR_7)) {
     FUNC_0(VAR_2->tif_clientdata, FUNC_1(VAR_2), "%s", VAR_7);
     return( 0 );
    }
    if( VAR_4 + VAR_11 > VAR_8.height )
        VAR_13 = VAR_8.height - VAR_4;
    else
        VAR_13 = VAR_11;

    if( VAR_3 + VAR_10 > VAR_8.width )
        VAR_12 = VAR_8.width - VAR_3;
    else
        VAR_12 = VAR_10;





    VAR_8.row_offset = VAR_4;
    VAR_8.col_offset = VAR_3;

    VAR_9 = FUNC_6(&VAR_8, VAR_5, VAR_12, VAR_13 );

    FUNC_5(&VAR_8);
    if( VAR_12 == VAR_10 && VAR_13 == VAR_11 )
        return( VAR_9 );

    for( VAR_14 = 0; VAR_14 < VAR_13; VAR_14++ ) {
        FUNC_9( VAR_5 + (VAR_11 - VAR_14 - 1) * VAR_10,
                 VAR_5 + (VAR_13 - VAR_14 - 1) * VAR_12,
                 VAR_12 * sizeof(uint32) );
        FUNC_8( VAR_5 + (VAR_11 - VAR_14 - 1) * VAR_10+VAR_12,
                     0, sizeof(uint32) * (VAR_10 - VAR_12) );
    }

    for( VAR_14 = VAR_13; VAR_14 < VAR_11; VAR_14++ ) {
        FUNC_8( VAR_5 + (VAR_11 - VAR_14 - 1) * VAR_10,
                     0, sizeof(uint32) * VAR_10 );
    }

    return (VAR_9);
}
