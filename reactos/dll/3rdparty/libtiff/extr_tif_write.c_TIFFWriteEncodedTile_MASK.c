
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int uint8 ;
typedef int uint64 ;
typedef size_t uint32 ;
typedef scalar_t__ uint16 ;
typedef scalar_t__ tmsize_t ;
struct TYPE_15__ {size_t td_nstrips; scalar_t__* td_stripbytecount; size_t td_tilelength; size_t td_tilewidth; scalar_t__ td_compression; size_t td_stripsperimage; int td_fillorder; int td_imagewidth; int td_imagelength; } ;
struct TYPE_16__ {int tif_flags; size_t tif_curtile; scalar_t__ tif_rawdatasize; scalar_t__ tif_rawcc; size_t tif_row; size_t tif_col; scalar_t__ tif_tilesize; int * tif_rawdata; int * tif_rawcp; int (* tif_postencode ) (TYPE_2__*) ;int (* tif_encodetile ) (TYPE_2__*,int *,scalar_t__,scalar_t__) ;int (* tif_postdecode ) (TYPE_2__*,int *,scalar_t__) ;int (* tif_preencode ) (TYPE_2__*,scalar_t__) ;int (* tif_setupencode ) (TYPE_2__*) ;int tif_clientdata; scalar_t__ tif_curoff; TYPE_1__ tif_dir; } ;
typedef TYPE_1__ TIFFDirectory ;
typedef TYPE_2__ TIFF ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_2__*,size_t,int *,scalar_t__) ;
 int FUNC_2 (int ,char const*,char*,...) ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (TYPE_2__*,int *,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t FUNC_5 (int ,size_t) ;
 scalar_t__ FUNC_6 (int ,int) ;
 int FUNC_7 (TYPE_2__*,char const*) ;
 int FUNC_8 (TYPE_2__*,int ) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*,int *,scalar_t__) ;
 int FUNC_11 (TYPE_2__*,scalar_t__) ;
 int FUNC_12 (TYPE_2__*,int *,scalar_t__) ;
 int FUNC_13 (TYPE_2__*,int *,scalar_t__,scalar_t__) ;
 int FUNC_14 (TYPE_2__*) ;

tmsize_t
FUNC_15(TIFF* VAR_5, uint32 VAR_6, void* VAR_7, tmsize_t VAR_8)
{
 static const char VAR_9[] = "TIFFWriteEncodedTile";
 TIFFDirectory *VAR_10;
 uint16 VAR_11;
        uint32 VAR_12;

 if (!FUNC_7(VAR_5, VAR_9))
  return ((tmsize_t)(-1));
 VAR_10 = &VAR_5->tif_dir;
 if (VAR_6 >= VAR_10->td_nstrips) {
  FUNC_2(VAR_5->tif_clientdata, VAR_9, "Tile %lu out of range, max %lu",
      (unsigned long) VAR_6, (unsigned long) VAR_10->td_nstrips);
  return ((tmsize_t)(-1));
 }





 if (!FUNC_0(VAR_5))
  return ((tmsize_t)(-1));

        VAR_5->tif_flags |= VAR_1;
 VAR_5->tif_curtile = VAR_6;

 if( VAR_10->td_stripbytecount[VAR_6] > 0 )
        {




            if( VAR_5->tif_rawdatasize <= (tmsize_t) VAR_10->td_stripbytecount[VAR_6] )
            {
                if( !(FUNC_4(VAR_5, ((void*)0),
                    (tmsize_t)FUNC_6((uint64)(VAR_10->td_stripbytecount[VAR_6] + 1), 1024))) )
                    return ((tmsize_t)(-1));
            }



            VAR_5->tif_curoff = 0;
        }

 VAR_5->tif_rawcc = 0;
 VAR_5->tif_rawcp = VAR_5->tif_rawdata;





        VAR_12=FUNC_5(VAR_10->td_imagelength, VAR_10->td_tilelength);
        if (VAR_12 == 0) {
                 FUNC_2(VAR_5->tif_clientdata,VAR_9,"Zero tiles");
                return ((tmsize_t)(-1));
        }
 VAR_5->tif_row = (VAR_6 % VAR_12) * VAR_10->td_tilelength;
        VAR_12=FUNC_5(VAR_10->td_imagewidth, VAR_10->td_tilewidth);
        if (VAR_12 == 0) {
                 FUNC_2(VAR_5->tif_clientdata,VAR_9,"Zero tiles");
                return ((tmsize_t)(-1));
        }
 VAR_5->tif_col = (VAR_6 % VAR_12) * VAR_10->td_tilewidth;

 if ((VAR_5->tif_flags & VAR_2) == 0) {
  if (!(*VAR_5->tif_setupencode)(VAR_5))
   return ((tmsize_t)(-1));
  VAR_5->tif_flags |= VAR_2;
 }
 VAR_5->tif_flags &= ~VAR_4;






 if ( VAR_8 < 1 || VAR_8 > VAR_5->tif_tilesize)
  VAR_8 = VAR_5->tif_tilesize;


    if( VAR_10->td_compression == VAR_0 )
    {

        VAR_5->tif_postdecode( VAR_5, (uint8*) VAR_7, VAR_8 );

        if (!FUNC_8(VAR_5, VAR_10->td_fillorder) &&
            (VAR_5->tif_flags & VAR_3) == 0)
            FUNC_3((uint8*) VAR_7, VAR_8);

        if (VAR_8 > 0 &&
            !FUNC_1(VAR_5, VAR_6, (uint8*) VAR_7, VAR_8))
            return ((tmsize_t) -1);
        return (VAR_8);
    }

    VAR_11 = (uint16)(VAR_6/VAR_10->td_stripsperimage);
    if (!(*VAR_5->tif_preencode)(VAR_5, VAR_11))
        return ((tmsize_t)(-1));

    VAR_5->tif_postdecode( VAR_5, (uint8*) VAR_7, VAR_8 );

    if (!(*VAR_5->tif_encodetile)(VAR_5, (uint8*) VAR_7, VAR_8, VAR_11))
            return ((tmsize_t) -1);
    if (!(*VAR_5->tif_postencode)(VAR_5))
            return ((tmsize_t)(-1));
    if (!FUNC_8(VAR_5, VAR_10->td_fillorder) &&
        (VAR_5->tif_flags & VAR_3) == 0)
            FUNC_3((uint8*)VAR_5->tif_rawdata, VAR_5->tif_rawcc);
    if (VAR_5->tif_rawcc > 0 && !FUNC_1(VAR_5, VAR_6,
        VAR_5->tif_rawdata, VAR_5->tif_rawcc))
            return ((tmsize_t)(-1));
    VAR_5->tif_rawcc = 0;
    VAR_5->tif_rawcp = VAR_5->tif_rawdata;
    return (VAR_8);
}
