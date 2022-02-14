
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint64 ;
typedef int uint32 ;
typedef int uint16 ;
struct TYPE_8__ {scalar_t__ td_tilelength; scalar_t__ td_tilewidth; scalar_t__ td_tiledepth; scalar_t__ td_planarconfig; scalar_t__ td_photometric; int td_samplesperpixel; int td_bitspersample; } ;
struct TYPE_9__ {int tif_clientdata; TYPE_1__ tif_dir; } ;
typedef TYPE_1__ TIFFDirectory ;
typedef TYPE_2__ TIFF ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char const*,char*,int,int) ;
 int FUNC_1 (TYPE_2__*,int ,int*,int*) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (TYPE_2__*,int,int,char const*) ;
 int FUNC_6 (TYPE_2__*) ;

uint64
FUNC_7(TIFF* VAR_3, uint32 VAR_4)
{
 static const char VAR_5[] = "TIFFVTileSize64";
 TIFFDirectory *VAR_6 = &VAR_3->tif_dir;
 if (VAR_6->td_tilelength == 0 || VAR_6->td_tilewidth == 0 ||
     VAR_6->td_tiledepth == 0)
  return (0);
 if ((VAR_6->td_planarconfig==VAR_1)&&
     (VAR_6->td_photometric==VAR_0)&&
     (VAR_6->td_samplesperpixel==3)&&
     (!FUNC_6(VAR_3)))
 {
  uint16 VAR_7[2];
  uint16 VAR_8;
  uint32 VAR_9;
  uint32 VAR_10;
  uint64 VAR_11;
  uint64 VAR_12;
  FUNC_1(VAR_3,VAR_2,VAR_7+0,
      VAR_7+1);
  if ((VAR_7[0] != 1 && VAR_7[0] != 2 && VAR_7[0] != 4)
      ||(VAR_7[1] != 1 && VAR_7[1] != 2 && VAR_7[1] != 4))
  {
   FUNC_0(VAR_3->tif_clientdata,VAR_5,
         "Invalid YCbCr subsampling (%dx%d)",
         VAR_7[0],
         VAR_7[1] );
   return 0;
  }
  VAR_8=VAR_7[0]*VAR_7[1]+2;
  VAR_9=FUNC_4(VAR_6->td_tilewidth,VAR_7[0]);
  VAR_10=FUNC_4(VAR_4,VAR_7[1]);
  VAR_11=FUNC_5(VAR_3,VAR_9,VAR_8,VAR_5);
  VAR_12=FUNC_3(FUNC_5(VAR_3,VAR_11,VAR_6->td_bitspersample,VAR_5));
  return(FUNC_5(VAR_3,VAR_12,VAR_10,VAR_5));
 }
 else
  return(FUNC_5(VAR_3,VAR_4,FUNC_2(VAR_3),VAR_5));
}
