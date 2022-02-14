
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8 ;
typedef int uint64 ;
typedef void* tmsize_t ;
struct TYPE_3__ {int tif_flags; scalar_t__ tif_rawdatasize; scalar_t__ tif_row; int tif_clientdata; int * tif_rawdata; } ;
typedef TYPE_1__ TIFF ;


 int FUNC_0 (int ,char const*,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;

int
FUNC_5(TIFF* VAR_3, void* VAR_4, tmsize_t VAR_5)
{
 static const char VAR_6[] = "TIFFReadBufferSetup";

 FUNC_4((VAR_3->tif_flags&VAR_2)==0);
 VAR_3->tif_flags &= ~VAR_0;

 if (VAR_3->tif_rawdata) {
  if (VAR_3->tif_flags & VAR_1)
   FUNC_3(VAR_3->tif_rawdata);
  VAR_3->tif_rawdata = ((void*)0);
  VAR_3->tif_rawdatasize = 0;
 }
 if (VAR_4) {
  VAR_3->tif_rawdatasize = VAR_5;
  VAR_3->tif_rawdata = (uint8*) VAR_4;
  VAR_3->tif_flags &= ~VAR_1;
 } else {
  VAR_3->tif_rawdatasize = (tmsize_t)FUNC_1((uint64)VAR_5, 1024);
  if (VAR_3->tif_rawdatasize==0) {
      FUNC_0(VAR_3->tif_clientdata, VAR_6,
     "Invalid buffer size");
      return (0);
  }


  VAR_3->tif_rawdata = (uint8*) FUNC_2(1, VAR_3->tif_rawdatasize);
  VAR_3->tif_flags |= VAR_1;
 }
 if (VAR_3->tif_rawdata == ((void*)0)) {
  FUNC_0(VAR_3->tif_clientdata, VAR_6,
      "No space for data buffer at scanline %lu",
      (unsigned long) VAR_3->tif_row);
  VAR_3->tif_rawdatasize = 0;
  return (0);
 }
 return (1);
}
