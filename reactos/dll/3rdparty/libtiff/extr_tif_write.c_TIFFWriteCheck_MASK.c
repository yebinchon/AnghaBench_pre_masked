
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ tmsize_t ;
struct TYPE_10__ {int td_samplesperpixel; scalar_t__ td_nstrips; int * td_stripoffset; int td_planarconfig; } ;
struct TYPE_11__ {scalar_t__ tif_mode; scalar_t__ tif_tilesize; scalar_t__ tif_scanlinesize; int tif_flags; int tif_clientdata; TYPE_1__ tif_dir; } ;
typedef TYPE_2__ TIFF ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char const*,char*,...) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int VAR_4 ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;

int
FUNC_7(TIFF* VAR_5, int VAR_6, const char* VAR_7)
{
 if (VAR_5->tif_mode == VAR_2) {
  FUNC_0(VAR_5->tif_clientdata, VAR_7, "File not open for writing");
  return (0);
 }
 if (VAR_6 ^ FUNC_6(VAR_5)) {
  FUNC_0(VAR_5->tif_clientdata, VAR_7, VAR_6 ?
      "Can not write tiles to a stripped image" :
      "Can not write scanlines to a tiled image");
  return (0);
 }

        FUNC_5( VAR_5 );
 if (!FUNC_1(VAR_5, VAR_0)) {
  FUNC_0(VAR_5->tif_clientdata, VAR_7,
      "Must set \"ImageWidth\" before writing data");
  return (0);
 }
 if (VAR_5->tif_dir.td_samplesperpixel == 1) {






  if (!FUNC_1(VAR_5, VAR_1))
                    VAR_5->tif_dir.td_planarconfig = VAR_3;
 } else {
  if (!FUNC_1(VAR_5, VAR_1)) {
   FUNC_0(VAR_5->tif_clientdata, VAR_7,
       "Must set \"PlanarConfiguration\" before writing data");
   return (0);
  }
 }
 if (VAR_5->tif_dir.td_stripoffset == ((void*)0) && !FUNC_3(VAR_5)) {
  VAR_5->tif_dir.td_nstrips = 0;
  FUNC_0(VAR_5->tif_clientdata, VAR_7, "No space for %s arrays",
      FUNC_6(VAR_5) ? "tile" : "strip");
  return (0);
 }
 if (FUNC_6(VAR_5))
 {
  VAR_5->tif_tilesize = FUNC_4(VAR_5);
  if (VAR_5->tif_tilesize == 0)
   return (0);
 }
 else
  VAR_5->tif_tilesize = (tmsize_t)(-1);
 VAR_5->tif_scanlinesize = FUNC_2(VAR_5);
 if (VAR_5->tif_scanlinesize == 0)
  return (0);
 VAR_5->tif_flags |= VAR_4;
 return (1);
}
