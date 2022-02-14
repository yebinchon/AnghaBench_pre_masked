
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8 ;
typedef scalar_t__ uint64 ;
typedef size_t uint32 ;
typedef scalar_t__ tmsize_t ;
typedef scalar_t__ int64 ;
struct TYPE_7__ {scalar_t__* td_stripoffset; scalar_t__ td_nstrips; scalar_t__* td_stripbytecount; } ;
struct TYPE_8__ {scalar_t__ tif_curoff; int tif_flags; scalar_t__ tif_row; int tif_clientdata; TYPE_1__ tif_dir; } ;
typedef TYPE_1__ TIFFDirectory ;
typedef TYPE_2__ TIFF ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,scalar_t__) ;
 int FUNC_1 (int ,char const*,char*,...) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (TYPE_2__*,int *,scalar_t__) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int
FUNC_5(TIFF* VAR_3, uint32 VAR_4, uint8* VAR_5, tmsize_t VAR_6)
{
 static const char VAR_7[] = "TIFFAppendToStrip";
 TIFFDirectory *VAR_8 = &VAR_3->tif_dir;
 uint64 VAR_9;
        int64 VAR_10 = -1;

 if (VAR_8->td_stripoffset[VAR_4] == 0 || VAR_3->tif_curoff == 0) {
            FUNC_4(VAR_8->td_nstrips > 0);

            if( VAR_8->td_stripbytecount[VAR_4] != 0
                && VAR_8->td_stripoffset[VAR_4] != 0
                && VAR_8->td_stripbytecount[VAR_4] >= (uint64) VAR_6 )
            {







                if (!FUNC_0(VAR_3, VAR_8->td_stripoffset[VAR_4])) {
                    FUNC_1(VAR_3->tif_clientdata, VAR_7,
                                 "Seek error at scanline %lu",
                                 (unsigned long)VAR_3->tif_row);
                    return (0);
                }
            }
            else
            {




                VAR_8->td_stripoffset[VAR_4] = FUNC_2(VAR_3, 0, VAR_0);
                VAR_3->tif_flags |= VAR_2;
            }

            VAR_3->tif_curoff = VAR_8->td_stripoffset[VAR_4];




            VAR_10 = VAR_8->td_stripbytecount[VAR_4];
            VAR_8->td_stripbytecount[VAR_4] = 0;
 }

 VAR_9 = VAR_3->tif_curoff+VAR_6;
 if (!(VAR_3->tif_flags&VAR_1))
  VAR_9 = (uint32)VAR_9;
 if ((VAR_9<VAR_3->tif_curoff)||(VAR_9<(uint64)VAR_6))
 {
  FUNC_1(VAR_3->tif_clientdata, VAR_7, "Maximum TIFF file size exceeded");
  return (0);
 }
 if (!FUNC_3(VAR_3, VAR_5, VAR_6)) {
  FUNC_1(VAR_3->tif_clientdata, VAR_7, "Write error at scanline %lu",
      (unsigned long) VAR_3->tif_row);
      return (0);
 }
 VAR_3->tif_curoff = VAR_9;
 VAR_8->td_stripbytecount[VAR_4] += VAR_6;

        if( (int64) VAR_8->td_stripbytecount[VAR_4] != VAR_10 )
            VAR_3->tif_flags |= VAR_2;

 return (1);
}
