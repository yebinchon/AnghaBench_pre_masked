
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64 ;
typedef int uint32 ;
typedef int uint16 ;
typedef int int64 ;
struct TYPE_4__ {int tif_flags; int tif_clientdata; } ;
typedef int TIFFDirEntry ;
typedef TYPE_1__ TIFF ;


 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (TYPE_1__*,int*,int *,int ,int ,int,int,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int) ;

__attribute__((used)) static int
FUNC_4(TIFF* VAR_3, uint32* VAR_4, TIFFDirEntry* VAR_5, uint16 VAR_6, uint32 VAR_7, int64* VAR_8)
{
 FUNC_3(VAR_7<0x20000000);
 FUNC_3(sizeof(int64)==8);
 if( !(VAR_3->tif_flags&VAR_0) ) {
  FUNC_0(VAR_3->tif_clientdata,"TIFFWriteDirectoryTagCheckedSlong8Array","SLONG8 not allowed for ClassicTIFF");
  return(0);
 }
 if (VAR_3->tif_flags&VAR_2)
  FUNC_1((uint64*)VAR_8,VAR_7);
 return(FUNC_2(VAR_3,VAR_4,VAR_5,VAR_6,VAR_1,VAR_7,VAR_7*8,VAR_8));
}
