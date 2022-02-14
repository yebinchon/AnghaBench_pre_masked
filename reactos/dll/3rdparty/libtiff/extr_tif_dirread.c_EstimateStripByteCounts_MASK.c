
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint64 ;
typedef scalar_t__ uint32 ;
typedef int uint16 ;
struct TYPE_14__ {int* td_stripbytecount; scalar_t__ td_nstrips; scalar_t__ td_compression; scalar_t__ td_planarconfig; int td_samplesperpixel; int* td_stripoffset; scalar_t__ td_imagelength; scalar_t__ td_stripsperimage; scalar_t__ td_rowsperstrip; } ;
struct TYPE_16__ {int tif_flags; int tif_clientdata; TYPE_1__ tif_dir; } ;
struct TYPE_15__ {int tdir_count; scalar_t__ tdir_type; } ;
typedef int TIFFHeaderClassic ;
typedef int TIFFHeaderBig ;
typedef TYPE_1__ TIFFDirectory ;
typedef TYPE_2__ TIFFDirEntry ;
typedef int TIFFDataType ;
typedef TYPE_3__ TIFF ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,char const*,char*,scalar_t__) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,int ) ;
 int FUNC_6 (TYPE_3__*) ;
 int VAR_4 ;
 scalar_t__ FUNC_7 (TYPE_3__*,scalar_t__,int,char*) ;
 int FUNC_8 (TYPE_3__*,int ) ;
 int FUNC_9 (int*) ;
 scalar_t__ FUNC_10 (TYPE_3__*) ;

__attribute__((used)) static int
FUNC_11(TIFF* VAR_5, TIFFDirEntry* VAR_6, uint16 VAR_7)
{
 static const char VAR_8[] = "EstimateStripByteCounts";

 TIFFDirEntry *VAR_9;
 TIFFDirectory *VAR_10 = &VAR_5->tif_dir;
 uint32 VAR_11;


        if( !FUNC_8( VAR_5, 0 ) )
            return -1;

 if (VAR_10->td_stripbytecount)
  FUNC_9(VAR_10->td_stripbytecount);
 VAR_10->td_stripbytecount = (uint64*)
     FUNC_7(VAR_5, VAR_10->td_nstrips, sizeof (uint64),
  "for \"StripByteCounts\" array");
        if( VAR_10->td_stripbytecount == ((void*)0) )
            return -1;

 if (VAR_10->td_compression != VAR_0) {
  uint64 VAR_12;
  uint64 VAR_13;
  uint16 VAR_14;
  VAR_13 = FUNC_3(VAR_5);
  if (!(VAR_5->tif_flags&VAR_4))
   VAR_12=sizeof(TIFFHeaderClassic)+2+VAR_7*12+4;
  else
   VAR_12=sizeof(TIFFHeaderBig)+8+VAR_7*20+8;

  for (VAR_9 = VAR_6, VAR_14 = VAR_7; VAR_14 > 0; VAR_14--, VAR_9++)
  {
   uint32 VAR_15;
   uint64 VAR_16;
   VAR_15 = FUNC_0((TIFFDataType) VAR_9->tdir_type);
   if (VAR_15 == 0) {
    FUNC_1(VAR_5->tif_clientdata, VAR_8,
        "Cannot determine size of unknown tag type %d",
        VAR_9->tdir_type);
    return -1;
   }
   VAR_16=(uint64)VAR_15*VAR_9->tdir_count;
   if (!(VAR_5->tif_flags&VAR_4))
   {
    if (VAR_16<=4)
     VAR_16=0;
   }
   else
   {
    if (VAR_16<=8)
     VAR_16=0;
   }
   VAR_12+=VAR_16;
  }
  if( VAR_13 < VAR_12 )

                    VAR_12 = VAR_13;
                else
                    VAR_12 = VAR_13 - VAR_12;
  if (VAR_10->td_planarconfig == VAR_3)
   VAR_12 /= VAR_10->td_samplesperpixel;
  for (VAR_11 = 0; VAR_11 < VAR_10->td_nstrips; VAR_11++)
   VAR_10->td_stripbytecount[VAR_11] = VAR_12;







  VAR_11--;
  if (VAR_10->td_stripoffset[VAR_11]+VAR_10->td_stripbytecount[VAR_11] > VAR_13)
   VAR_10->td_stripbytecount[VAR_11] = VAR_13 - VAR_10->td_stripoffset[VAR_11];
 } else if (FUNC_10(VAR_5)) {
  uint64 VAR_17 = FUNC_6(VAR_5);

  for (VAR_11 = 0; VAR_11 < VAR_10->td_nstrips; VAR_11++)
      VAR_10->td_stripbytecount[VAR_11] = VAR_17;
 } else {
  uint64 VAR_18 = FUNC_4(VAR_5);
  uint32 VAR_19 = VAR_10->td_imagelength/VAR_10->td_stripsperimage;
  for (VAR_11 = 0; VAR_11 < VAR_10->td_nstrips; VAR_11++)
   VAR_10->td_stripbytecount[VAR_11] = VAR_18 * VAR_19;
 }
 FUNC_5(VAR_5, VAR_2);
 if (!FUNC_2(VAR_5, VAR_1))
  VAR_10->td_rowsperstrip = VAR_10->td_imagelength;
 return 1;
}
