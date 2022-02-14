
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64 ;
typedef size_t uint32 ;
typedef scalar_t__ tmsize_t ;
struct TYPE_6__ {size_t td_nstrips; scalar_t__* td_stripbytecount; } ;
struct TYPE_7__ {int tif_flags; int tif_clientdata; TYPE_1__ tif_dir; } ;
typedef TYPE_1__ TIFFDirectory ;
typedef TYPE_2__ TIFF ;


 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (int ,char const*,char*,...) ;
 scalar_t__ FUNC_2 (TYPE_2__*,size_t,void*,scalar_t__,char const*) ;
 int VAR_0 ;

tmsize_t
FUNC_3(TIFF* VAR_1, uint32 VAR_2, void* VAR_3, tmsize_t VAR_4)
{
 static const char VAR_5[] = "TIFFReadRawTile";
 TIFFDirectory *VAR_6 = &VAR_1->tif_dir;
 uint64 VAR_7;
 tmsize_t VAR_8;

 if (!FUNC_0(VAR_1, 1))
  return ((tmsize_t)(-1));
 if (VAR_2 >= VAR_6->td_nstrips) {
  FUNC_1(VAR_1->tif_clientdata, VAR_5,
      "%lu: Tile out of range, max %lu",
      (unsigned long) VAR_2, (unsigned long) VAR_6->td_nstrips);
  return ((tmsize_t)(-1));
 }
 if (VAR_1->tif_flags&VAR_0)
 {
  FUNC_1(VAR_1->tif_clientdata, VAR_5,
  "Compression scheme does not support access to raw uncompressed data");
  return ((tmsize_t)(-1));
 }
 VAR_7 = VAR_6->td_stripbytecount[VAR_2];
 if (VAR_4 != (tmsize_t)(-1) && (uint64)VAR_4 < VAR_7)
  VAR_7 = (uint64)VAR_4;
 VAR_8 = (tmsize_t)VAR_7;
 if ((uint64)VAR_8!=VAR_7)
 {
  FUNC_1(VAR_1->tif_clientdata,VAR_5,"Integer overflow");
  return ((tmsize_t)(-1));
 }
 return (FUNC_2(VAR_1, VAR_2, VAR_3, VAR_8, VAR_5));
}
