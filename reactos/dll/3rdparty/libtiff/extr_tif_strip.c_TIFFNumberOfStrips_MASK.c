
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32 ;
struct TYPE_5__ {scalar_t__ td_rowsperstrip; scalar_t__ td_planarconfig; scalar_t__ td_samplesperpixel; int td_imagelength; } ;
struct TYPE_6__ {TYPE_1__ tif_dir; } ;
typedef TYPE_1__ TIFFDirectory ;
typedef TYPE_2__ TIFF ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_2__*,scalar_t__,scalar_t__,char*) ;

uint32
FUNC_2(TIFF* VAR_1)
{
 TIFFDirectory *VAR_2 = &VAR_1->tif_dir;
 uint32 VAR_3;

 VAR_3 = (VAR_2->td_rowsperstrip == (uint32) -1 ? 1 :
      FUNC_0(VAR_2->td_imagelength, VAR_2->td_rowsperstrip));
 if (VAR_2->td_planarconfig == VAR_0)
  VAR_3 = FUNC_1(VAR_1, VAR_3, (uint32)VAR_2->td_samplesperpixel,
      "TIFFNumberOfStrips");
 return (VAR_3);
}
