
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint64 ;
typedef int uint32 ;
struct TYPE_9__ {int* td_stripbytecount; int* td_stripoffset; scalar_t__ td_planarconfig; scalar_t__ td_photometric; int* td_ycbcrsubsampling; int td_rowsperstrip; int td_stripsperimage; int td_nstrips; int td_stripbytecountsorted; int td_imagelength; } ;
struct TYPE_10__ {scalar_t__ tif_mode; TYPE_1__ tif_dir; } ;
typedef TYPE_1__ TIFFDirectory ;
typedef TYPE_2__ TIFF ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 int VAR_4 ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int,int,char*) ;
 int FUNC_5 (int*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_8(TIFF* VAR_5)
{
 register TIFFDirectory *VAR_6 = &VAR_5->tif_dir;
 uint64 VAR_7;
 uint64 VAR_8;
 uint32 VAR_9;
 uint64 VAR_10;
 uint64 VAR_11;
 uint32 VAR_12;
 uint32 VAR_13;
 uint32 VAR_14;
 uint64* VAR_15;
 uint64* VAR_16;

 VAR_7 = VAR_6->td_stripbytecount[0];



        if( VAR_7 == 0 && VAR_5->tif_mode != VAR_0 )
            return;
 VAR_8 = VAR_6->td_stripoffset[0];
 FUNC_6(VAR_6->td_planarconfig == VAR_2);
 if ((VAR_6->td_photometric == VAR_1)&&
     (!FUNC_7(VAR_5)))
  VAR_9 = VAR_6->td_ycbcrsubsampling[1];
 else
  VAR_9 = 1;
 VAR_10 = FUNC_2(VAR_5, VAR_9);




 if (VAR_10 > VAR_3) {
  VAR_11 = VAR_10;
  VAR_14 = VAR_9;
 } else if (VAR_10 > 0 ) {
  uint32 VAR_17;
  VAR_17 = (uint32) (VAR_3 / VAR_10);
  VAR_14 = VAR_17 * VAR_9;
  VAR_11 = VAR_17 * VAR_10;
 }
 else
     return;




 if (VAR_14 >= VAR_6->td_rowsperstrip)
  return;
        VAR_13 = FUNC_3(VAR_6->td_imagelength, VAR_14);
        if( VAR_13 == 0 )
            return;



        if( VAR_5->tif_mode == VAR_0 &&
            VAR_13 > 1000000 &&
            (VAR_8 >= FUNC_0(VAR_5) ||
             VAR_11 > (FUNC_0(VAR_5) - VAR_8) / (VAR_13 - 1)) )
        {
            return;
        }

 VAR_15 = (uint64*) FUNC_4(VAR_5, VAR_13, sizeof (uint64),
    "for chopped \"StripByteCounts\" array");
 VAR_16 = (uint64*) FUNC_4(VAR_5, VAR_13, sizeof (uint64),
    "for chopped \"StripOffsets\" array");
 if (VAR_15 == ((void*)0) || VAR_16 == ((void*)0)) {




  if (VAR_15 != ((void*)0))
   FUNC_5(VAR_15);
  if (VAR_16 != ((void*)0))
   FUNC_5(VAR_16);
  return;
 }




 for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++) {
  if (VAR_11 > VAR_7)
   VAR_11 = VAR_7;
  VAR_15[VAR_12] = VAR_11;
  VAR_16[VAR_12] = VAR_11 ? VAR_8 : 0;
  VAR_8 += VAR_11;
  VAR_7 -= VAR_11;
 }



 VAR_6->td_stripsperimage = VAR_6->td_nstrips = VAR_13;
 FUNC_1(VAR_5, VAR_4, VAR_14);

 FUNC_5(VAR_6->td_stripbytecount);
 FUNC_5(VAR_6->td_stripoffset);
 VAR_6->td_stripbytecount = VAR_15;
 VAR_6->td_stripoffset = VAR_16;
 VAR_6->td_stripbytecountsorted = 1;
}
