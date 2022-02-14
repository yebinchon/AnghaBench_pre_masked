
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int uint8 ;
typedef int uint64 ;
typedef size_t uint32 ;
typedef scalar_t__ uint16 ;
typedef scalar_t__ tmsize_t ;
struct TYPE_16__ {size_t td_nstrips; scalar_t__ td_planarconfig; size_t td_stripsperimage; size_t td_rowsperstrip; scalar_t__* td_stripbytecount; scalar_t__ td_compression; int td_fillorder; int td_imagelength; } ;
struct TYPE_17__ {int tif_flags; size_t tif_curstrip; size_t tif_row; scalar_t__ tif_rawdatasize; scalar_t__ tif_rawcc; int * tif_rawdata; int * tif_rawcp; int (* tif_postencode ) (TYPE_2__*) ;int (* tif_encodestrip ) (TYPE_2__*,int *,scalar_t__,scalar_t__) ;int (* tif_postdecode ) (TYPE_2__*,int *,scalar_t__) ;int (* tif_preencode ) (TYPE_2__*,scalar_t__) ;scalar_t__ tif_curoff; int (* tif_setupencode ) (TYPE_2__*) ;int tif_clientdata; TYPE_1__ tif_dir; } ;
typedef TYPE_1__ TIFFDirectory ;
typedef TYPE_2__ TIFF ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_2__*,size_t,int *,scalar_t__) ;
 int FUNC_2 (int ,char const*,char*) ;
 int FUNC_3 (TYPE_2__*,int,char const*) ;
 int FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (TYPE_2__*,int *,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t FUNC_6 (int ,size_t) ;
 scalar_t__ FUNC_7 (int ,int) ;
 int FUNC_8 (TYPE_2__*,char const*) ;
 int FUNC_9 (TYPE_2__*,int ) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*,int *,scalar_t__) ;
 int FUNC_12 (TYPE_2__*,scalar_t__) ;
 int FUNC_13 (TYPE_2__*,int *,scalar_t__) ;
 int FUNC_14 (TYPE_2__*,int *,scalar_t__,scalar_t__) ;
 int FUNC_15 (TYPE_2__*) ;

tmsize_t
FUNC_16(TIFF* VAR_6, uint32 VAR_7, void* VAR_8, tmsize_t VAR_9)
{
 static const char VAR_10[] = "TIFFWriteEncodedStrip";
 TIFFDirectory *VAR_11 = &VAR_6->tif_dir;
 uint16 VAR_12;

 if (!FUNC_8(VAR_6, VAR_10))
  return ((tmsize_t) -1);
 if (VAR_7 >= VAR_11->td_nstrips) {
  if (VAR_11->td_planarconfig == VAR_1) {
   FUNC_2(VAR_6->tif_clientdata, VAR_10,
       "Can not grow image by strips when using separate planes");
   return ((tmsize_t) -1);
  }
  if (!FUNC_3(VAR_6, 1, VAR_10))
   return ((tmsize_t) -1);
  VAR_11->td_stripsperimage =
      FUNC_6(VAR_11->td_imagelength, VAR_11->td_rowsperstrip);
 }





 if (!FUNC_0(VAR_6))
  return ((tmsize_t) -1);

        VAR_6->tif_flags |= VAR_2;
 VAR_6->tif_curstrip = VAR_7;

        if (VAR_11->td_stripsperimage == 0) {
                FUNC_2(VAR_6->tif_clientdata, VAR_10, "Zero strips per image");
                return ((tmsize_t) -1);
        }

 VAR_6->tif_row = (VAR_7 % VAR_11->td_stripsperimage) * VAR_11->td_rowsperstrip;
 if ((VAR_6->tif_flags & VAR_3) == 0) {
  if (!(*VAR_6->tif_setupencode)(VAR_6))
   return ((tmsize_t) -1);
  VAR_6->tif_flags |= VAR_3;
 }

 if( VAR_11->td_stripbytecount[VAR_7] > 0 )
        {




            if( VAR_6->tif_rawdatasize <= (tmsize_t)VAR_11->td_stripbytecount[VAR_7] )
            {
                if( !(FUNC_5(VAR_6, ((void*)0),
                    (tmsize_t)FUNC_7((uint64)(VAR_11->td_stripbytecount[VAR_7] + 1), 1024))) )
                    return ((tmsize_t)(-1));
            }



            VAR_6->tif_curoff = 0;
        }

    VAR_6->tif_rawcc = 0;
    VAR_6->tif_rawcp = VAR_6->tif_rawdata;

 VAR_6->tif_flags &= ~VAR_5;


    if( VAR_11->td_compression == VAR_0 )
    {

        VAR_6->tif_postdecode( VAR_6, (uint8*) VAR_8, VAR_9 );

        if (!FUNC_9(VAR_6, VAR_11->td_fillorder) &&
            (VAR_6->tif_flags & VAR_4) == 0)
            FUNC_4((uint8*) VAR_8, VAR_9);

        if (VAR_9 > 0 &&
            !FUNC_1(VAR_6, VAR_7, (uint8*) VAR_8, VAR_9))
            return ((tmsize_t) -1);
        return (VAR_9);
    }

 VAR_12 = (uint16)(VAR_7 / VAR_11->td_stripsperimage);
 if (!(*VAR_6->tif_preencode)(VAR_6, VAR_12))
  return ((tmsize_t) -1);


 VAR_6->tif_postdecode( VAR_6, (uint8*) VAR_8, VAR_9 );

 if (!(*VAR_6->tif_encodestrip)(VAR_6, (uint8*) VAR_8, VAR_9, VAR_12))
  return ((tmsize_t) -1);
 if (!(*VAR_6->tif_postencode)(VAR_6))
  return ((tmsize_t) -1);
 if (!FUNC_9(VAR_6, VAR_11->td_fillorder) &&
     (VAR_6->tif_flags & VAR_4) == 0)
  FUNC_4(VAR_6->tif_rawdata, VAR_6->tif_rawcc);
 if (VAR_6->tif_rawcc > 0 &&
     !FUNC_1(VAR_6, VAR_7, VAR_6->tif_rawdata, VAR_6->tif_rawcc))
  return ((tmsize_t) -1);
 VAR_6->tif_rawcc = 0;
 VAR_6->tif_rawcp = VAR_6->tif_rawdata;
 return (VAR_9);
}
