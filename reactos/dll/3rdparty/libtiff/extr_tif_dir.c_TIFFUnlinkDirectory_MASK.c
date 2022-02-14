
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ uint64 ;
typedef scalar_t__ uint32 ;
typedef scalar_t__ uint16 ;
struct TYPE_13__ {scalar_t__ tiff_diroff; } ;
struct TYPE_12__ {scalar_t__ tiff_diroff; } ;
struct TYPE_14__ {TYPE_2__ big; TYPE_1__ classic; } ;
struct TYPE_15__ {scalar_t__ tif_mode; int tif_flags; scalar_t__ tif_curstrip; scalar_t__ tif_row; scalar_t__ tif_curoff; scalar_t__ tif_nextdiroff; scalar_t__ tif_diroff; scalar_t__ tif_rawdataloaded; scalar_t__ tif_rawdataoff; scalar_t__ tif_rawcc; int * tif_rawdata; int (* tif_cleanup ) (TYPE_4__*) ;int tif_clientdata; TYPE_3__ tif_header; } ;
typedef TYPE_4__ TIFF ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*,scalar_t__*,scalar_t__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int ,char const*,char*,...) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*,scalar_t__,int ) ;
 int FUNC_5 (scalar_t__*) ;
 int FUNC_6 (scalar_t__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (TYPE_4__*,scalar_t__*,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int) ;
 int FUNC_10 (TYPE_4__*) ;

int
FUNC_11(TIFF* VAR_9, uint16 VAR_10)
{
 static const char VAR_11[] = "TIFFUnlinkDirectory";
 uint64 VAR_12;
 uint64 VAR_13;
 uint16 VAR_14;

 if (VAR_9->tif_mode == VAR_0) {
  FUNC_2(VAR_9->tif_clientdata, VAR_11,
                             "Can not unlink directory in read-only file");
  return (0);
 }





 if (!(VAR_9->tif_flags&VAR_3))
 {
  VAR_12 = VAR_9->tif_header.classic.tiff_diroff;
  VAR_13 = 4;
 }
 else
 {
  VAR_12 = VAR_9->tif_header.big.tiff_diroff;
  VAR_13 = 8;
 }
 for (VAR_14 = VAR_10-1; VAR_14 > 0; VAR_14--) {
  if (VAR_12 == 0) {
   FUNC_2(VAR_9->tif_clientdata, VAR_11, "Directory %d does not exist", VAR_10);
   return (0);
  }
  if (!FUNC_0(VAR_9, &VAR_12, &VAR_13))
   return (0);
 }




 if (!FUNC_0(VAR_9, &VAR_12, ((void*)0)))
  return (0);





 (void) FUNC_4(VAR_9, VAR_13, VAR_1);
 if (!(VAR_9->tif_flags&VAR_3))
 {
  uint32 VAR_15;
  VAR_15=(uint32)VAR_12;
  FUNC_9((uint64)VAR_15==VAR_12);
  if (VAR_9->tif_flags & VAR_8)
   FUNC_5(&VAR_15);
  if (!FUNC_7(VAR_9, &VAR_15, sizeof (uint32))) {
   FUNC_2(VAR_9->tif_clientdata, VAR_11, "Error writing directory link");
   return (0);
  }
 }
 else
 {
  if (VAR_9->tif_flags & VAR_8)
   FUNC_6(&VAR_12);
  if (!FUNC_7(VAR_9, &VAR_12, sizeof (uint64))) {
   FUNC_2(VAR_9->tif_clientdata, VAR_11, "Error writing directory link");
   return (0);
  }
 }







 (*VAR_9->tif_cleanup)(VAR_9);
 if ((VAR_9->tif_flags & VAR_6) && VAR_9->tif_rawdata) {
  FUNC_8(VAR_9->tif_rawdata);
  VAR_9->tif_rawdata = ((void*)0);
  VAR_9->tif_rawcc = 0;
                VAR_9->tif_rawdataoff = 0;
                VAR_9->tif_rawdataloaded = 0;
 }
 VAR_9->tif_flags &= ~(VAR_2|VAR_5|VAR_7|VAR_4);
 FUNC_3(VAR_9);
 FUNC_1(VAR_9);
 VAR_9->tif_diroff = 0;
 VAR_9->tif_nextdiroff = 0;
 VAR_9->tif_curoff = 0;
 VAR_9->tif_row = (uint32) -1;
 VAR_9->tif_curstrip = (uint32) -1;
 return (1);
}
