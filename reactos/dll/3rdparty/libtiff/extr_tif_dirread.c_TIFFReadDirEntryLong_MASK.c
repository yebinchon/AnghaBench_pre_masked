
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8 ;
typedef int uint64 ;
typedef int uint32 ;
typedef int uint16 ;
typedef int int8 ;
typedef int int64 ;
typedef int int32 ;
typedef int int16 ;
typedef enum TIFFReadDirEntryErr { ____Placeholder_TIFFReadDirEntryErr } TIFFReadDirEntryErr ;
struct TYPE_11__ {int tdir_count; int tdir_type; } ;
typedef TYPE_1__ TIFFDirEntry ;
typedef int TIFF ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,TYPE_1__*,int *) ;
 int FUNC_6 (int *,TYPE_1__*,int *) ;
 int FUNC_7 (int *,TYPE_1__*,int *) ;
 int FUNC_8 (int *,TYPE_1__*,int *) ;
 int FUNC_9 (int *,TYPE_1__*,int *) ;
 int FUNC_10 (int *,TYPE_1__*,int *) ;
 int FUNC_11 (int *,TYPE_1__*,int *) ;
 int FUNC_12 (int *,TYPE_1__*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
__attribute__((used)) static enum TIFFReadDirEntryErr FUNC_13(TIFF* VAR_3, TIFFDirEntry* VAR_4, uint32* VAR_5)
{
 enum TIFFReadDirEntryErr VAR_6;
 if (VAR_4->tdir_count!=1)
  return(VAR_0);
 switch (VAR_4->tdir_type)
 {
  case 135:
   {
    uint8 VAR_7;
    FUNC_5(VAR_3,VAR_4,&VAR_7);
    *VAR_5=(uint32)VAR_7;
    return(VAR_1);
   }
  case 132:
   {
    int8 VAR_8;
    FUNC_8(VAR_3,VAR_4,&VAR_8);
    VAR_6=FUNC_1(VAR_8);
    if (VAR_6!=VAR_1)
     return(VAR_6);
    *VAR_5=(uint32)VAR_8;
    return(VAR_1);
   }
  case 131:
   {
    uint16 VAR_9;
    FUNC_9(VAR_3,VAR_4,&VAR_9);
    *VAR_5=(uint32)VAR_9;
    return(VAR_1);
   }
  case 128:
   {
    int16 VAR_10;
    FUNC_12(VAR_3,VAR_4,&VAR_10);
    VAR_6=FUNC_4(VAR_10);
    if (VAR_6!=VAR_1)
     return(VAR_6);
    *VAR_5=(uint32)VAR_10;
    return(VAR_1);
   }
  case 134:
   FUNC_6(VAR_3,VAR_4,VAR_5);
   return(VAR_1);
  case 130:
   {
    int32 VAR_11;
    FUNC_10(VAR_3,VAR_4,&VAR_11);
    VAR_6=FUNC_2(VAR_11);
    if (VAR_6!=VAR_1)
     return(VAR_6);
    *VAR_5=(uint32)VAR_11;
    return(VAR_1);
   }
  case 133:
   {
    uint64 VAR_12;
    VAR_6=FUNC_7(VAR_3,VAR_4,&VAR_12);
    if (VAR_6!=VAR_1)
     return(VAR_6);
    VAR_6=FUNC_0(VAR_12);
    if (VAR_6!=VAR_1)
     return(VAR_6);
    *VAR_5=(uint32)VAR_12;
    return(VAR_1);
   }
  case 129:
   {
    int64 VAR_13;
    VAR_6=FUNC_11(VAR_3,VAR_4,&VAR_13);
    if (VAR_6!=VAR_1)
     return(VAR_6);
    VAR_6=FUNC_3(VAR_13);
    if (VAR_6!=VAR_1)
     return(VAR_6);
    *VAR_5=(uint32)VAR_13;
    return(VAR_1);
   }
  default:
   return(VAR_2);
 }
}
