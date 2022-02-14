
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8 ;
typedef scalar_t__ uint32 ;
typedef int tmsize_t ;
struct TYPE_6__ {scalar_t__ td_nstrips; } ;
struct TYPE_7__ {TYPE_1__ tif_dir; int tif_clientdata; } ;
typedef TYPE_2__ TIFF ;


 scalar_t__ FUNC_0 (TYPE_2__*,scalar_t__,int *,int ) ;
 int FUNC_1 (int ,char const*,char*,unsigned long,unsigned long) ;
 int FUNC_2 (TYPE_2__*,char const*) ;

tmsize_t
FUNC_3(TIFF* VAR_0, uint32 VAR_1, void* VAR_2, tmsize_t VAR_3)
{
 static const char VAR_4[] = "TIFFWriteRawTile";

 if (!FUNC_2(VAR_0, VAR_4))
  return ((tmsize_t)(-1));
 if (VAR_1 >= VAR_0->tif_dir.td_nstrips) {
  FUNC_1(VAR_0->tif_clientdata, VAR_4, "Tile %lu out of range, max %lu",
      (unsigned long) VAR_1,
      (unsigned long) VAR_0->tif_dir.td_nstrips);
  return ((tmsize_t)(-1));
 }
 return (FUNC_0(VAR_0, VAR_1, (uint8*) VAR_2, VAR_3) ?
     VAR_3 : (tmsize_t)(-1));
}
