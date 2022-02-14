
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32 ;
typedef int uint16 ;
struct TYPE_4__ {int td_imagewidth; int td_imagelength; int td_imagedepth; scalar_t__ td_planarconfig; int td_samplesperpixel; } ;
struct TYPE_5__ {int tif_name; int tif_clientdata; TYPE_1__ tif_dir; } ;
typedef TYPE_1__ TIFFDirectory ;
typedef TYPE_2__ TIFF ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,char*,unsigned long,unsigned long) ;

int
FUNC_1(TIFF* VAR_1, uint32 VAR_2, uint32 VAR_3, uint32 VAR_4, uint16 VAR_5)
{
 TIFFDirectory *VAR_6 = &VAR_1->tif_dir;

 if (VAR_2 >= VAR_6->td_imagewidth) {
  FUNC_0(VAR_1->tif_clientdata, VAR_1->tif_name,
        "%lu: Col out of range, max %lu",
        (unsigned long) VAR_2,
        (unsigned long) (VAR_6->td_imagewidth - 1));
  return (0);
 }
 if (VAR_3 >= VAR_6->td_imagelength) {
  FUNC_0(VAR_1->tif_clientdata, VAR_1->tif_name,
        "%lu: Row out of range, max %lu",
        (unsigned long) VAR_3,
        (unsigned long) (VAR_6->td_imagelength - 1));
  return (0);
 }
 if (VAR_4 >= VAR_6->td_imagedepth) {
  FUNC_0(VAR_1->tif_clientdata, VAR_1->tif_name,
        "%lu: Depth out of range, max %lu",
        (unsigned long) VAR_4,
        (unsigned long) (VAR_6->td_imagedepth - 1));
  return (0);
 }
 if (VAR_6->td_planarconfig == VAR_0 &&
     VAR_5 >= VAR_6->td_samplesperpixel) {
  FUNC_0(VAR_1->tif_clientdata, VAR_1->tif_name,
        "%lu: Sample out of range, max %lu",
        (unsigned long) VAR_5,
        (unsigned long) (VAR_6->td_samplesperpixel - 1));
  return (0);
 }
 return (1);
}
