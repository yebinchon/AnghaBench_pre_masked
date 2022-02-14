
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64 ;
typedef int uint32 ;
typedef enum TIFFReadDirEntryErr { ____Placeholder_TIFFReadDirEntryErr } TIFFReadDirEntryErr ;
struct TYPE_5__ {int tdir_count; int tdir_type; } ;
typedef TYPE_1__ TIFFDirEntry ;
typedef int TIFF ;


 int FUNC_0 (int *,TYPE_1__*,int *) ;
 int FUNC_1 (int *,TYPE_1__*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





__attribute__((used)) static enum TIFFReadDirEntryErr FUNC_2(TIFF* VAR_3, TIFFDirEntry* VAR_4, uint64* VAR_5)
{
 enum TIFFReadDirEntryErr VAR_6;
 if (VAR_4->tdir_count!=1)
  return(VAR_0);
 switch (VAR_4->tdir_type)
 {
  case 129:
  case 131:
   {
    uint32 VAR_7;
    FUNC_0(VAR_3,VAR_4,&VAR_7);
    *VAR_5=(uint64)VAR_7;
    return(VAR_1);
   }
  case 128:
  case 130:
   VAR_6=FUNC_1(VAR_3,VAR_4,VAR_5);
   return(VAR_6);
  default:
   return(VAR_2);
 }
}
