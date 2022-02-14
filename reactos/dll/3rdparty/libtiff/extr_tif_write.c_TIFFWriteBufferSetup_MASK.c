
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8 ;
typedef int tmsize_t ;
struct TYPE_5__ {int tif_flags; int tif_tilesize; int tif_rawdatasize; int * tif_rawdata; int * tif_rawcp; scalar_t__ tif_rawcc; int tif_clientdata; } ;
typedef TYPE_1__ TIFF ;


 int FUNC_0 (int ,char const*,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 void* FUNC_3 (int) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;

int
FUNC_5(TIFF* VAR_2, void* VAR_3, tmsize_t VAR_4)
{
 static const char VAR_5[] = "TIFFWriteBufferSetup";

 if (VAR_2->tif_rawdata) {
  if (VAR_2->tif_flags & VAR_1) {
   FUNC_2(VAR_2->tif_rawdata);
   VAR_2->tif_flags &= ~VAR_1;
  }
  VAR_2->tif_rawdata = ((void*)0);
 }
 if (VAR_4 == (tmsize_t)(-1)) {
  VAR_4 = (FUNC_4(VAR_2) ?
      VAR_2->tif_tilesize : FUNC_1(VAR_2));



  if (VAR_4 < 8*1024)
   VAR_4 = 8*1024;
  VAR_3 = ((void*)0);
 }
 if (VAR_3 == ((void*)0)) {
  VAR_3 = FUNC_3(VAR_4);
  if (VAR_3 == ((void*)0)) {
   FUNC_0(VAR_2->tif_clientdata, VAR_5, "No space for output buffer");
   return (0);
  }
  VAR_2->tif_flags |= VAR_1;
 } else
  VAR_2->tif_flags &= ~VAR_1;
 VAR_2->tif_rawdata = (uint8*) VAR_3;
 VAR_2->tif_rawdatasize = VAR_4;
 VAR_2->tif_rawcc = 0;
 VAR_2->tif_rawcp = VAR_2->tif_rawdata;
 VAR_2->tif_flags |= VAR_0;
 return (1);
}
