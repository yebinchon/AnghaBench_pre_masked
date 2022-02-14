
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8 ;
typedef scalar_t__ uint32 ;
typedef int tmsize_t ;
struct TYPE_7__ {scalar_t__ td_nstrips; scalar_t__ td_planarconfig; scalar_t__ td_stripsperimage; scalar_t__ td_rowsperstrip; int td_imagelength; } ;
struct TYPE_8__ {scalar_t__ tif_row; int tif_clientdata; scalar_t__ tif_curstrip; TYPE_1__ tif_dir; } ;
typedef TYPE_1__ TIFFDirectory ;
typedef TYPE_2__ TIFF ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*,scalar_t__,int *,int ) ;
 int FUNC_1 (int ,char const*,char*) ;
 int FUNC_2 (TYPE_2__*,int,char const*) ;
 scalar_t__ FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (TYPE_2__*,char const*) ;

tmsize_t
FUNC_5(TIFF* VAR_1, uint32 VAR_2, void* VAR_3, tmsize_t VAR_4)
{
 static const char VAR_5[] = "TIFFWriteRawStrip";
 TIFFDirectory *VAR_6 = &VAR_1->tif_dir;

 if (!FUNC_4(VAR_1, VAR_5))
  return ((tmsize_t) -1);
 if (VAR_2 >= VAR_6->td_nstrips) {
  if (VAR_6->td_planarconfig == VAR_0) {
   FUNC_1(VAR_1->tif_clientdata, VAR_5,
       "Can not grow image by strips when using separate planes");
   return ((tmsize_t) -1);
  }





  if (VAR_2 >= VAR_6->td_stripsperimage)
   VAR_6->td_stripsperimage =
       FUNC_3(VAR_6->td_imagelength,VAR_6->td_rowsperstrip);
  if (!FUNC_2(VAR_1, 1, VAR_5))
   return ((tmsize_t) -1);
 }
 VAR_1->tif_curstrip = VAR_2;
        if (VAR_6->td_stripsperimage == 0) {
                FUNC_1(VAR_1->tif_clientdata, VAR_5,"Zero strips per image");
                return ((tmsize_t) -1);
        }
 VAR_1->tif_row = (VAR_2 % VAR_6->td_stripsperimage) * VAR_6->td_rowsperstrip;
 return (FUNC_0(VAR_1, VAR_2, (uint8*) VAR_3, VAR_4) ?
     VAR_4 : (tmsize_t) -1);
}
