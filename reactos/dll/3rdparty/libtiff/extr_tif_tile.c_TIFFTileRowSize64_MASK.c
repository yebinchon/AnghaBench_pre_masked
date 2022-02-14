
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64 ;
struct TYPE_5__ {scalar_t__ td_tilelength; scalar_t__ td_tilewidth; scalar_t__ td_bitspersample; scalar_t__ td_planarconfig; scalar_t__ td_samplesperpixel; } ;
struct TYPE_6__ {int tif_clientdata; TYPE_1__ tif_dir; } ;
typedef TYPE_1__ TIFFDirectory ;
typedef TYPE_2__ TIFF ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char const*,char*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_2__*,scalar_t__,scalar_t__,char*) ;

uint64
FUNC_3(TIFF* VAR_1)
{
        static const char VAR_2[] = "TIFFTileRowSize64";
 TIFFDirectory *VAR_3 = &VAR_1->tif_dir;
 uint64 VAR_4;
 uint64 VAR_5;

 if (VAR_3->td_tilelength == 0)
        {
                FUNC_0(VAR_1->tif_clientdata,VAR_2,"Tile length is zero");
                return 0;
        }
        if (VAR_3->td_tilewidth == 0)
        {
                FUNC_0(VAR_1->tif_clientdata,VAR_2,"Tile width is zero");
  return (0);
        }
 VAR_4 = FUNC_2(VAR_1, VAR_3->td_bitspersample, VAR_3->td_tilewidth,
     "TIFFTileRowSize");
 if (VAR_3->td_planarconfig == VAR_0)
        {
                if (VAR_3->td_samplesperpixel == 0)
                {
                        FUNC_0(VAR_1->tif_clientdata,VAR_2,"Samples per pixel is zero");
                        return 0;
                }
  VAR_4 = FUNC_2(VAR_1, VAR_4, VAR_3->td_samplesperpixel,
      "TIFFTileRowSize");
        }
        VAR_5=FUNC_1(VAR_4);
        if (VAR_5 == 0)
        {
                FUNC_0(VAR_1->tif_clientdata,VAR_2,"Computed tile row size is zero");
                return 0;
        }
 return (VAR_5);
}
