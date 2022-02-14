
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64 ;
struct TYPE_5__ {scalar_t__ td_planarconfig; int td_samplesperpixel; int td_imagewidth; int td_bitspersample; } ;
struct TYPE_6__ {TYPE_1__ tif_dir; } ;
typedef TYPE_1__ TIFFDirectory ;
typedef TYPE_2__ TIFF ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,int ,int ,char const*) ;

uint64
FUNC_2(TIFF* VAR_1)
{
 static const char VAR_2[] = "TIFFRasterScanlineSize64";
 TIFFDirectory *VAR_3 = &VAR_1->tif_dir;
 uint64 VAR_4;

 VAR_4 = FUNC_1(VAR_1, VAR_3->td_bitspersample, VAR_3->td_imagewidth, VAR_2);
 if (VAR_3->td_planarconfig == VAR_0) {
  VAR_4 = FUNC_1(VAR_1, VAR_4, VAR_3->td_samplesperpixel, VAR_2);
  return (FUNC_0(VAR_4));
 } else
  return (FUNC_1(VAR_1, FUNC_0(VAR_4),
      VAR_3->td_samplesperpixel, VAR_2));
}
