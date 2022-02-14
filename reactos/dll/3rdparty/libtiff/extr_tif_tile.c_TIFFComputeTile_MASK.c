
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32 ;
typedef scalar_t__ uint16 ;
struct TYPE_4__ {scalar_t__ td_tilewidth; scalar_t__ td_tilelength; scalar_t__ td_tiledepth; int td_imagedepth; scalar_t__ td_imagewidth; scalar_t__ td_imagelength; scalar_t__ td_planarconfig; } ;
struct TYPE_5__ {TYPE_1__ tif_dir; } ;
typedef TYPE_1__ TIFFDirectory ;
typedef TYPE_2__ TIFF ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;

uint32
FUNC_1(TIFF* VAR_1, uint32 VAR_2, uint32 VAR_3, uint32 VAR_4, uint16 VAR_5)
{
 TIFFDirectory *VAR_6 = &VAR_1->tif_dir;
 uint32 VAR_7 = VAR_6->td_tilewidth;
 uint32 VAR_8 = VAR_6->td_tilelength;
 uint32 VAR_9 = VAR_6->td_tiledepth;
 uint32 VAR_10 = 1;

 if (VAR_6->td_imagedepth == 1)
  VAR_4 = 0;
 if (VAR_7 == (uint32) -1)
  VAR_7 = VAR_6->td_imagewidth;
 if (VAR_8 == (uint32) -1)
  VAR_8 = VAR_6->td_imagelength;
 if (VAR_9 == (uint32) -1)
  VAR_9 = VAR_6->td_imagedepth;
 if (VAR_7 != 0 && VAR_8 != 0 && VAR_9 != 0) {
  uint32 VAR_11 = FUNC_0(VAR_6->td_imagewidth, VAR_7);
  uint32 VAR_12 = FUNC_0(VAR_6->td_imagelength, VAR_8);
  uint32 VAR_13 = FUNC_0(VAR_6->td_imagedepth, VAR_9);

  if (VAR_6->td_planarconfig == VAR_0)
   VAR_10 = (VAR_11*VAR_12*VAR_13)*VAR_5 +
        (VAR_11*VAR_12)*(VAR_4/VAR_9) +
        VAR_11*(VAR_3/VAR_8) +
        VAR_2/VAR_7;
  else
   VAR_10 = (VAR_11*VAR_12)*(VAR_4/VAR_9) + VAR_11*(VAR_3/VAR_8) + VAR_2/VAR_7;
 }
 return (VAR_10);
}
