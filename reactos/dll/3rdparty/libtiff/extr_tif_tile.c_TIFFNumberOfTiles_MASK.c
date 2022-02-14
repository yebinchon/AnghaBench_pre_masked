
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32 ;
struct TYPE_5__ {scalar_t__ td_tilewidth; scalar_t__ td_tilelength; scalar_t__ td_tiledepth; scalar_t__ td_imagewidth; scalar_t__ td_imagelength; scalar_t__ td_imagedepth; scalar_t__ td_planarconfig; scalar_t__ td_samplesperpixel; } ;
struct TYPE_6__ {TYPE_1__ tif_dir; } ;
typedef TYPE_1__ TIFFDirectory ;
typedef TYPE_2__ TIFF ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_2__*,scalar_t__,scalar_t__,char*) ;

uint32
FUNC_2(TIFF* VAR_1)
{
 TIFFDirectory *VAR_2 = &VAR_1->tif_dir;
 uint32 VAR_3 = VAR_2->td_tilewidth;
 uint32 VAR_4 = VAR_2->td_tilelength;
 uint32 VAR_5 = VAR_2->td_tiledepth;
 uint32 VAR_6;

 if (VAR_3 == (uint32) -1)
  VAR_3 = VAR_2->td_imagewidth;
 if (VAR_4 == (uint32) -1)
  VAR_4 = VAR_2->td_imagelength;
 if (VAR_5 == (uint32) -1)
  VAR_5 = VAR_2->td_imagedepth;
 VAR_6 = (VAR_3 == 0 || VAR_4 == 0 || VAR_5 == 0) ? 0 :
     FUNC_1(VAR_1, FUNC_1(VAR_1, FUNC_0(VAR_2->td_imagewidth, VAR_3),
     FUNC_0(VAR_2->td_imagelength, VAR_4),
     "TIFFNumberOfTiles"),
     FUNC_0(VAR_2->td_imagedepth, VAR_5), "TIFFNumberOfTiles");
 if (VAR_2->td_planarconfig == VAR_0)
  VAR_6 = FUNC_1(VAR_1, VAR_6, VAR_2->td_samplesperpixel,
      "TIFFNumberOfTiles");
 return (VAR_6);
}
