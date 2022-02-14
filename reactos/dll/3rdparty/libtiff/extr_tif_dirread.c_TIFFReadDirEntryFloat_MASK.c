
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_1__ ;


typedef scalar_t__ uint8 ;
typedef scalar_t__ uint64 ;
typedef scalar_t__ uint32 ;
typedef scalar_t__ uint16 ;
typedef scalar_t__ int8 ;
typedef scalar_t__ int64 ;
typedef scalar_t__ int32 ;
typedef scalar_t__ int16 ;
typedef enum TIFFReadDirEntryErr { ____Placeholder_TIFFReadDirEntryErr } TIFFReadDirEntryErr ;
struct TYPE_15__ {int tdir_count; int tdir_type; } ;
typedef TYPE_1__ TIFFDirEntry ;
typedef int TIFF ;


 double VAR_0 ;
 double VAR_1 ;
 int FUNC_0 (int *,TYPE_1__*,scalar_t__*) ;
 int FUNC_1 (int *,TYPE_1__*,double*) ;
 int FUNC_2 (int *,TYPE_1__*,float*) ;
 int FUNC_3 (int *,TYPE_1__*,scalar_t__*) ;
 int FUNC_4 (int *,TYPE_1__*,scalar_t__*) ;
 int FUNC_5 (int *,TYPE_1__*,double*) ;
 int FUNC_6 (int *,TYPE_1__*,scalar_t__*) ;
 int FUNC_7 (int *,TYPE_1__*,scalar_t__*) ;
 int FUNC_8 (int *,TYPE_1__*,scalar_t__*) ;
 int FUNC_9 (int *,TYPE_1__*,scalar_t__*) ;
 int FUNC_10 (int *,TYPE_1__*,double*) ;
 int FUNC_11 (int *,TYPE_1__*,scalar_t__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 float FUNC_12 (scalar_t__) ;

__attribute__((used)) static enum TIFFReadDirEntryErr FUNC_13(TIFF* VAR_6, TIFFDirEntry* VAR_7, float* VAR_8)
{
 enum TIFFReadDirEntryErr VAR_9;
 if (VAR_7->tdir_count!=1)
  return(VAR_2);
 switch (VAR_7->tdir_type)
 {
  case 139:
   {
    uint8 VAR_10;
    FUNC_0(VAR_6,VAR_7,&VAR_10);
    *VAR_8=(float)VAR_10;
    return(VAR_3);
   }
  case 133:
   {
    int8 VAR_11;
    FUNC_6(VAR_6,VAR_7,&VAR_11);
    *VAR_8=(float)VAR_11;
    return(VAR_3);
   }
  case 132:
   {
    uint16 VAR_12;
    FUNC_7(VAR_6,VAR_7,&VAR_12);
    *VAR_8=(float)VAR_12;
    return(VAR_3);
   }
  case 128:
   {
    int16 VAR_13;
    FUNC_11(VAR_6,VAR_7,&VAR_13);
    *VAR_8=(float)VAR_13;
    return(VAR_3);
   }
  case 136:
   {
    uint32 VAR_14;
    FUNC_3(VAR_6,VAR_7,&VAR_14);
    *VAR_8=(float)VAR_14;
    return(VAR_3);
   }
  case 131:
   {
    int32 VAR_15;
    FUNC_8(VAR_6,VAR_7,&VAR_15);
    *VAR_8=(float)VAR_15;
    return(VAR_3);
   }
  case 135:
   {
    uint64 VAR_16;
    VAR_9=FUNC_4(VAR_6,VAR_7,&VAR_16);
    if (VAR_9!=VAR_3)
     return(VAR_9);
    *VAR_8=(float)VAR_16;

    return(VAR_3);
   }
  case 130:
   {
    int64 VAR_17;
    VAR_9=FUNC_9(VAR_6,VAR_7,&VAR_17);
    if (VAR_9!=VAR_3)
     return(VAR_9);
    *VAR_8=(float)VAR_17;
    return(VAR_3);
   }
  case 134:
   {
    double VAR_18;
    VAR_9=FUNC_5(VAR_6,VAR_7,&VAR_18);
    if (VAR_9!=VAR_3)
     return(VAR_9);
    *VAR_8=(float)VAR_18;
    return(VAR_3);
   }
  case 129:
   {
    double VAR_19;
    VAR_9=FUNC_10(VAR_6,VAR_7,&VAR_19);
    if (VAR_9!=VAR_3)
     return(VAR_9);
    *VAR_8=(float)VAR_19;
    return(VAR_3);
   }
  case 137:
   FUNC_2(VAR_6,VAR_7,VAR_8);
   return(VAR_3);
  case 138:
   {
    double VAR_20;
    VAR_9=FUNC_1(VAR_6,VAR_7,&VAR_20);
    if (VAR_9!=VAR_3)
     return(VAR_9);
    if ((VAR_20 > VAR_0) || (VAR_20 < VAR_1))
     return(VAR_4);
    *VAR_8=(float)VAR_20;
    return(VAR_3);
   }
  default:
   return(VAR_5);
 }
}
