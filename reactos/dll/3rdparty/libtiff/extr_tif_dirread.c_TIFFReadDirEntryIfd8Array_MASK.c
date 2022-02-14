
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64 ;
typedef int uint32 ;
typedef enum TIFFReadDirEntryErr { ____Placeholder_TIFFReadDirEntryErr } TIFFReadDirEntryErr ;
struct TYPE_8__ {int tif_flags; } ;
struct TYPE_7__ {int tdir_type; } ;
typedef TYPE_1__ TIFFDirEntry ;
typedef TYPE_2__ TIFF ;


 int FUNC_0 (TYPE_2__*,TYPE_1__*,int*,int,void**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int*) ;




 int VAR_3 ;
 int FUNC_3 (void*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static enum TIFFReadDirEntryErr FUNC_5(TIFF* VAR_4, TIFFDirEntry* VAR_5, uint64** VAR_6)
{
 enum TIFFReadDirEntryErr VAR_7;
 uint32 VAR_8;
 void* VAR_9;
 uint64* VAR_10;
 switch (VAR_5->tdir_type)
 {
  case 129:
  case 128:
  case 131:
  case 130:
   break;
  default:
   return(VAR_2);
 }
 VAR_7=FUNC_0(VAR_4,VAR_5,&VAR_8,8,&VAR_9);
 if ((VAR_7!=VAR_1)||(VAR_9==0))
 {
  *VAR_6=0;
  return(VAR_7);
 }
 switch (VAR_5->tdir_type)
 {
  case 128:
  case 130:
   *VAR_6=(uint64*)VAR_9;
   if (VAR_4->tif_flags&VAR_3)
    FUNC_1(*VAR_6,VAR_8);
   return(VAR_1);
 }
 VAR_10=(uint64*)FUNC_4(VAR_8*8);
 if (VAR_10==0)
 {
  FUNC_3(VAR_9);
  return(VAR_0);
 }
 switch (VAR_5->tdir_type)
 {
  case 129:
  case 131:
   {
    uint32* VAR_11;
    uint64* VAR_12;
    uint32 VAR_13;
    VAR_11=(uint32*)VAR_9;
    VAR_12=VAR_10;
    for (VAR_13=0; VAR_13<VAR_8; VAR_13++)
    {
     if (VAR_4->tif_flags&VAR_3)
      FUNC_2(VAR_11);
     *VAR_12++=(uint64)(*VAR_11++);
    }
   }
   break;
 }
 FUNC_3(VAR_9);
 *VAR_6=VAR_10;
 return(VAR_1);
}
