
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64 ;
typedef int uint32 ;
typedef int uint16 ;
struct TYPE_7__ {scalar_t__ td_planarconfig; scalar_t__ td_photometric; int td_samplesperpixel; int td_imagewidth; int td_bitspersample; } ;
struct TYPE_8__ {int tif_clientdata; TYPE_1__ tif_dir; } ;
typedef TYPE_1__ TIFFDirectory ;
typedef TYPE_2__ TIFF ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char const*,char*) ;
 int FUNC_1 (TYPE_2__*,int ,int*,int*) ;
 int VAR_2 ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (TYPE_2__*,int,int,char const*) ;
 int FUNC_5 (TYPE_2__*) ;

uint64
FUNC_6(TIFF* VAR_3)
{
 static const char VAR_4[] = "TIFFScanlineSize64";
 TIFFDirectory *VAR_5 = &VAR_3->tif_dir;
 uint64 VAR_6;
 if (VAR_5->td_planarconfig==VAR_1)
 {
  if ((VAR_5->td_photometric==VAR_0)&&
      (VAR_5->td_samplesperpixel==3)&&
      (!FUNC_5(VAR_3)))
  {
   uint16 VAR_7[2];
   uint16 VAR_8;
   uint32 VAR_9;
   uint64 VAR_10;
   uint64 VAR_11;
   if(VAR_5->td_samplesperpixel!=3)
   {
                            FUNC_0(VAR_3->tif_clientdata,VAR_4,
                                         "Invalid td_samplesperpixel value");
                            return 0;
   }
   FUNC_1(VAR_3,VAR_2,
                                              VAR_7+0,
                                              VAR_7+1);
   if (((VAR_7[0]!=1)&&(VAR_7[0]!=2)&&(VAR_7[0]!=4)) ||
       ((VAR_7[1]!=1)&&(VAR_7[1]!=2)&&(VAR_7[1]!=4)))
   {
                            FUNC_0(VAR_3->tif_clientdata,VAR_4,
                                         "Invalid YCbCr subsampling");
                            return 0;
   }
   VAR_8 = VAR_7[0]*VAR_7[1]+2;
   VAR_9 = FUNC_2(VAR_5->td_imagewidth,VAR_7[0]);
   VAR_10 = FUNC_4(VAR_3,VAR_9,VAR_8,VAR_4);
   VAR_11 = FUNC_3(FUNC_4(VAR_3,VAR_10,VAR_5->td_bitspersample,VAR_4),8);
   VAR_6 = (VAR_11/VAR_7[1]);
  }
  else
  {
   uint64 VAR_12;
   VAR_12=FUNC_4(VAR_3,VAR_5->td_imagewidth,VAR_5->td_samplesperpixel,VAR_4);
   VAR_6=FUNC_3(FUNC_4(VAR_3,VAR_12,VAR_5->td_bitspersample,VAR_4),8);
  }
 }
 else
        {
  VAR_6=FUNC_3(FUNC_4(VAR_3,VAR_5->td_imagewidth,VAR_5->td_bitspersample,VAR_4),8);
        }
        if (VAR_6 == 0)
        {
                FUNC_0(VAR_3->tif_clientdata,VAR_4,"Computed scanline size is zero");
                return 0;
        }
 return(VAR_6);
}
