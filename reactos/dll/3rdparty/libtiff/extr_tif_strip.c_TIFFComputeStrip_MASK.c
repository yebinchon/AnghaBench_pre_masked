
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32 ;
typedef scalar_t__ uint16 ;
struct TYPE_4__ {int td_rowsperstrip; scalar_t__ td_planarconfig; scalar_t__ td_samplesperpixel; int td_stripsperimage; } ;
struct TYPE_5__ {int tif_clientdata; TYPE_1__ tif_dir; } ;
typedef TYPE_1__ TIFFDirectory ;
typedef TYPE_2__ TIFF ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char const*,char*,unsigned long,unsigned long) ;

uint32
FUNC_1(TIFF* VAR_1, uint32 VAR_2, uint16 VAR_3)
{
 static const char VAR_4[] = "TIFFComputeStrip";
 TIFFDirectory *VAR_5 = &VAR_1->tif_dir;
 uint32 VAR_6;

 VAR_6 = VAR_2 / VAR_5->td_rowsperstrip;
 if (VAR_5->td_planarconfig == VAR_0) {
  if (VAR_3 >= VAR_5->td_samplesperpixel) {
   FUNC_0(VAR_1->tif_clientdata, VAR_4,
       "%lu: Sample out of range, max %lu",
       (unsigned long) VAR_3, (unsigned long) VAR_5->td_samplesperpixel);
   return (0);
  }
  VAR_6 += (uint32)VAR_3*VAR_5->td_stripsperimage;
 }
 return (VAR_6);
}
