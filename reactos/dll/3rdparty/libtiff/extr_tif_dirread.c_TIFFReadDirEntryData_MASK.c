
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64 ;
typedef scalar_t__ tmsize_t ;
typedef enum TIFFReadDirEntryErr { ____Placeholder_TIFFReadDirEntryErr } TIFFReadDirEntryErr ;
struct TYPE_6__ {scalar_t__ tif_base; scalar_t__ tif_size; } ;
typedef TYPE_1__ TIFF ;


 int FUNC_0 (TYPE_1__*,void*,scalar_t__) ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (void*,scalar_t__,scalar_t__) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static enum TIFFReadDirEntryErr
FUNC_5(TIFF* VAR_2, uint64 VAR_3, tmsize_t VAR_4, void* VAR_5)
{
 FUNC_3(VAR_4>0);
 if (!FUNC_4(VAR_2)) {
  if (!FUNC_1(VAR_2,VAR_3))
   return(VAR_0);
  if (!FUNC_0(VAR_2,VAR_5,VAR_4))
   return(VAR_0);
 } else {
  size_t VAR_6,VAR_7;
  VAR_6=(size_t)VAR_3;
  VAR_7=VAR_6+VAR_4;
  if (((uint64)VAR_6!=VAR_3)
      || (VAR_7 < VAR_6)
      || (VAR_7 - VAR_6 != (size_t) VAR_4)
      || (VAR_7 < (size_t)VAR_4)
      || (VAR_7 > (size_t)VAR_2->tif_size)
      )
   return(VAR_0);
  FUNC_2(VAR_5,VAR_2->tif_base+VAR_6,VAR_4);
 }
 return(VAR_1);
}
