
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
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 double FUNC_12 (scalar_t__) ;

__attribute__((used)) static enum TIFFReadDirEntryErr FUNC_13(TIFF* VAR_3, TIFFDirEntry* VAR_4, double* VAR_5)
{
 enum TIFFReadDirEntryErr VAR_6;
 if (VAR_4->tdir_count!=1)
  return(VAR_0);
 switch (VAR_4->tdir_type)
 {
  case 139:
   {
    uint8 VAR_7;
    FUNC_0(VAR_3,VAR_4,&VAR_7);
    *VAR_5=(double)VAR_7;
    return(VAR_1);
   }
  case 133:
   {
    int8 VAR_8;
    FUNC_6(VAR_3,VAR_4,&VAR_8);
    *VAR_5=(double)VAR_8;
    return(VAR_1);
   }
  case 132:
   {
    uint16 VAR_9;
    FUNC_7(VAR_3,VAR_4,&VAR_9);
    *VAR_5=(double)VAR_9;
    return(VAR_1);
   }
  case 128:
   {
    int16 VAR_10;
    FUNC_11(VAR_3,VAR_4,&VAR_10);
    *VAR_5=(double)VAR_10;
    return(VAR_1);
   }
  case 136:
   {
    uint32 VAR_11;
    FUNC_3(VAR_3,VAR_4,&VAR_11);
    *VAR_5=(double)VAR_11;
    return(VAR_1);
   }
  case 131:
   {
    int32 VAR_12;
    FUNC_8(VAR_3,VAR_4,&VAR_12);
    *VAR_5=(double)VAR_12;
    return(VAR_1);
   }
  case 135:
   {
    uint64 VAR_13;
    VAR_6=FUNC_4(VAR_3,VAR_4,&VAR_13);
    if (VAR_6!=VAR_1)
     return(VAR_6);
    *VAR_5 = (double)VAR_13;

    return(VAR_1);
   }
  case 130:
   {
    int64 VAR_14;
    VAR_6=FUNC_9(VAR_3,VAR_4,&VAR_14);
    if (VAR_6!=VAR_1)
     return(VAR_6);
    *VAR_5=(double)VAR_14;
    return(VAR_1);
   }
  case 134:
   VAR_6=FUNC_5(VAR_3,VAR_4,VAR_5);
   return(VAR_6);
  case 129:
   VAR_6=FUNC_10(VAR_3,VAR_4,VAR_5);
   return(VAR_6);
  case 137:
   {
    float VAR_15;
    FUNC_2(VAR_3,VAR_4,&VAR_15);
    *VAR_5=(double)VAR_15;
    return(VAR_1);
   }
  case 138:
   VAR_6=FUNC_1(VAR_3,VAR_4,VAR_5);
   return(VAR_6);
  default:
   return(VAR_2);
 }
}
