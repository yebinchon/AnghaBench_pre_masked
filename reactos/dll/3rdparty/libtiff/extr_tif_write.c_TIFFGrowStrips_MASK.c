
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64 ;
typedef int uint32 ;
struct TYPE_4__ {scalar_t__ td_planarconfig; int td_nstrips; int * td_stripbytecount; int * td_stripoffset; } ;
struct TYPE_5__ {int tif_flags; int tif_clientdata; TYPE_1__ tif_dir; } ;
typedef TYPE_1__ TIFFDirectory ;
typedef TYPE_2__ TIFF ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char const*,char*) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int
FUNC_5(TIFF* VAR_2, uint32 VAR_3, const char* VAR_4)
{
 TIFFDirectory *VAR_5 = &VAR_2->tif_dir;
 uint64* VAR_6;
 uint64* VAR_7;

 FUNC_4(VAR_5->td_planarconfig == VAR_0);
 VAR_6 = (uint64*)FUNC_3(VAR_5->td_stripoffset,
  (VAR_5->td_nstrips + VAR_3) * sizeof (uint64));
 VAR_7 = (uint64*)FUNC_3(VAR_5->td_stripbytecount,
  (VAR_5->td_nstrips + VAR_3) * sizeof (uint64));
 if (VAR_6 == ((void*)0) || VAR_7 == ((void*)0)) {
  if (VAR_6)
   FUNC_1(VAR_6);
  if (VAR_7)
   FUNC_1(VAR_7);
  VAR_5->td_nstrips = 0;
  FUNC_0(VAR_2->tif_clientdata, VAR_4, "No space to expand strip arrays");
  return (0);
 }
 VAR_5->td_stripoffset = VAR_6;
 VAR_5->td_stripbytecount = VAR_7;
 FUNC_2(VAR_5->td_stripoffset + VAR_5->td_nstrips,
      0, VAR_3*sizeof (uint64));
 FUNC_2(VAR_5->td_stripbytecount + VAR_5->td_nstrips,
      0, VAR_3*sizeof (uint64));
 VAR_5->td_nstrips += VAR_3;
        VAR_2->tif_flags |= VAR_1;

 return (1);
}
