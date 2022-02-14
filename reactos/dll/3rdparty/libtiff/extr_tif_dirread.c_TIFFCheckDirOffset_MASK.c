
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64 ;
typedef size_t uint16 ;
struct TYPE_4__ {int tif_dirnumber; scalar_t__* tif_dirlist; int tif_dirlistsize; int tif_clientdata; } ;
typedef TYPE_1__ TIFF ;


 int FUNC_0 (int ,char*,char*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,scalar_t__*,int,int,char*) ;

__attribute__((used)) static int
FUNC_2(TIFF* VAR_0, uint64 VAR_1)
{
 uint16 VAR_2;

 if (VAR_1 == 0)
  return 0;
 if (VAR_0->tif_dirnumber == 65535) {
     FUNC_0(VAR_0->tif_clientdata, "TIFFCheckDirOffset",
    "Cannot handle more than 65535 TIFF directories");
     return 0;
 }

 for (VAR_2 = 0; VAR_2 < VAR_0->tif_dirnumber && VAR_0->tif_dirlist; VAR_2++) {
  if (VAR_0->tif_dirlist[VAR_2] == VAR_1)
   return 0;
 }

 VAR_0->tif_dirnumber++;

 if (VAR_0->tif_dirlist == ((void*)0) || VAR_0->tif_dirnumber > VAR_0->tif_dirlistsize) {
  uint64* VAR_3;





  VAR_3 = (uint64*)FUNC_1(VAR_0, VAR_0->tif_dirlist,
      VAR_0->tif_dirnumber, 2 * sizeof(uint64), "for IFD list");
  if (!VAR_3)
   return 0;
  if( VAR_0->tif_dirnumber >= 32768 )
      VAR_0->tif_dirlistsize = 65535;
  else
      VAR_0->tif_dirlistsize = 2 * VAR_0->tif_dirnumber;
  VAR_0->tif_dirlist = VAR_3;
 }

 VAR_0->tif_dirlist[VAR_0->tif_dirnumber - 1] = VAR_1;

 return 1;
}
