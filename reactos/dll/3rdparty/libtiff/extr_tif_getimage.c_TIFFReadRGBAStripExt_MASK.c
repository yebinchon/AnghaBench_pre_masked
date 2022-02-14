
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ uint32 ;
struct TYPE_13__ {int tif_clientdata; } ;
struct TYPE_12__ {scalar_t__ height; int width; scalar_t__ col_offset; scalar_t__ row_offset; } ;
typedef TYPE_1__ TIFFRGBAImage ;
typedef TYPE_2__ TIFF ;


 int FUNC_0 (int ,int ,char*,...) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ,scalar_t__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,TYPE_2__*,int,char*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,scalar_t__*,int ,scalar_t__) ;
 scalar_t__ FUNC_7 (TYPE_2__*,char*) ;
 int VAR_0 ;

int
FUNC_8(TIFF* VAR_1, uint32 VAR_2, uint32 * VAR_3, int VAR_4)

{
    char VAR_5[1024] = "";
    TIFFRGBAImage VAR_6;
    int VAR_7;
    uint32 VAR_8, VAR_9;

    if( FUNC_3( VAR_1 ) )
    {
  FUNC_0(VAR_1->tif_clientdata, FUNC_1(VAR_1),
                  "Can't use TIFFReadRGBAStrip() with tiled file.");
 return (0);
    }

    FUNC_2(VAR_1, VAR_0, &VAR_8);
    if( (VAR_2 % VAR_8) != 0 )
    {
  FUNC_0(VAR_1->tif_clientdata, FUNC_1(VAR_1),
    "Row passed to TIFFReadRGBAStrip() must be first in a strip.");
  return (0);
    }

    if (FUNC_7(VAR_1, VAR_5) && FUNC_4(&VAR_6, VAR_1, VAR_4, VAR_5)) {

        VAR_6.row_offset = VAR_2;
        VAR_6.col_offset = 0;

        if( VAR_2 + VAR_8 > VAR_6.height )
            VAR_9 = VAR_6.height - VAR_2;
        else
            VAR_9 = VAR_8;

 VAR_7 = FUNC_6(&VAR_6, VAR_3, VAR_6.width, VAR_9 );

 FUNC_5(&VAR_6);
    } else {
  FUNC_0(VAR_1->tif_clientdata, FUNC_1(VAR_1), "%s", VAR_5);
  VAR_7 = 0;
    }

    return (VAR_7);
}
