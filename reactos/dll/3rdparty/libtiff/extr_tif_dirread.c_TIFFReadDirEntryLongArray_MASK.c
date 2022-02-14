
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8 ;
typedef int uint64 ;
typedef int uint32 ;
typedef int uint16 ;
typedef int int8 ;
typedef int int64 ;
typedef int int32 ;
typedef int int16 ;
typedef enum TIFFReadDirEntryErr { ____Placeholder_TIFFReadDirEntryErr } TIFFReadDirEntryErr ;
struct TYPE_8__ {int tif_flags; } ;
struct TYPE_7__ {int tdir_type; } ;
typedef TYPE_1__ TIFFDirEntry ;
typedef TYPE_2__ TIFF ;


 int FUNC_0 (TYPE_2__*,TYPE_1__*,int*,int,void**) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (int*,int) ;
 int FUNC_7 (int*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int VAR_3 ;
 int FUNC_10 (int*) ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static enum TIFFReadDirEntryErr FUNC_12(TIFF* VAR_4, TIFFDirEntry* VAR_5, uint32** VAR_6)
{
 enum TIFFReadDirEntryErr VAR_7;
 uint32 VAR_8;
 void* VAR_9;
 uint32* VAR_10;
 switch (VAR_5->tdir_type)
 {
  case 135:
  case 132:
  case 131:
  case 128:
  case 134:
  case 130:
  case 133:
  case 129:
   break;
  default:
   return(VAR_2);
 }
 VAR_7=FUNC_0(VAR_4,VAR_5,&VAR_8,4,&VAR_9);
 if ((VAR_7!=VAR_1)||(VAR_9==0))
 {
  *VAR_6=0;
  return(VAR_7);
 }
 switch (VAR_5->tdir_type)
 {
  case 134:
   *VAR_6=(uint32*)VAR_9;
   if (VAR_4->tif_flags&VAR_3)
    FUNC_6(*VAR_6,VAR_8);
   return(VAR_1);
  case 130:
   {
    int32* VAR_11;
    uint32 VAR_12;
    VAR_11=(int32*)VAR_9;
    for (VAR_12=0; VAR_12<VAR_8; VAR_12++)
    {
     if (VAR_4->tif_flags&VAR_3)
      FUNC_7((uint32*)VAR_11);
     VAR_7=FUNC_3(*VAR_11);
     if (VAR_7!=VAR_1)
     {
      FUNC_10(VAR_9);
      return(VAR_7);
     }
     VAR_11++;
    }
    *VAR_6=(uint32*)VAR_9;
    return(VAR_1);
   }
 }
 VAR_10=(uint32*)FUNC_11(VAR_8*4);
 if (VAR_10==0)
 {
  FUNC_10(VAR_9);
  return(VAR_0);
 }
 switch (VAR_5->tdir_type)
 {
  case 135:
   {
    uint8* VAR_13;
    uint32* VAR_14;
    uint32 VAR_15;
    VAR_13=(uint8*)VAR_9;
    VAR_14=VAR_10;
    for (VAR_15=0; VAR_15<VAR_8; VAR_15++)
     *VAR_14++=(uint32)(*VAR_13++);
   }
   break;
  case 132:
   {
    int8* VAR_16;
    uint32* VAR_17;
    uint32 VAR_18;
    VAR_16=(int8*)VAR_9;
    VAR_17=VAR_10;
    for (VAR_18=0; VAR_18<VAR_8; VAR_18++)
    {
     VAR_7=FUNC_2(*VAR_16);
     if (VAR_7!=VAR_1)
      break;
     *VAR_17++=(uint32)(*VAR_16++);
    }
   }
   break;
  case 131:
   {
    uint16* VAR_19;
    uint32* VAR_20;
    uint32 VAR_21;
    VAR_19=(uint16*)VAR_9;
    VAR_20=VAR_10;
    for (VAR_21=0; VAR_21<VAR_8; VAR_21++)
    {
     if (VAR_4->tif_flags&VAR_3)
      FUNC_9(VAR_19);
     *VAR_20++=(uint32)(*VAR_19++);
    }
   }
   break;
  case 128:
   {
    int16* VAR_22;
    uint32* VAR_23;
    uint32 VAR_24;
    VAR_22=(int16*)VAR_9;
    VAR_23=VAR_10;
    for (VAR_24=0; VAR_24<VAR_8; VAR_24++)
    {
     if (VAR_4->tif_flags&VAR_3)
      FUNC_9((uint16*)VAR_22);
     VAR_7=FUNC_5(*VAR_22);
     if (VAR_7!=VAR_1)
      break;
     *VAR_23++=(uint32)(*VAR_22++);
    }
   }
   break;
  case 133:
   {
    uint64* VAR_25;
    uint32* VAR_26;
    uint32 VAR_27;
    VAR_25=(uint64*)VAR_9;
    VAR_26=VAR_10;
    for (VAR_27=0; VAR_27<VAR_8; VAR_27++)
    {
     if (VAR_4->tif_flags&VAR_3)
      FUNC_8(VAR_25);
     VAR_7=FUNC_1(*VAR_25);
     if (VAR_7!=VAR_1)
      break;
     *VAR_26++=(uint32)(*VAR_25++);
    }
   }
   break;
  case 129:
   {
    int64* VAR_28;
    uint32* VAR_29;
    uint32 VAR_30;
    VAR_28=(int64*)VAR_9;
    VAR_29=VAR_10;
    for (VAR_30=0; VAR_30<VAR_8; VAR_30++)
    {
     if (VAR_4->tif_flags&VAR_3)
      FUNC_8((uint64*)VAR_28);
     VAR_7=FUNC_4(*VAR_28);
     if (VAR_7!=VAR_1)
      break;
     *VAR_29++=(uint32)(*VAR_28++);
    }
   }
   break;
 }
 FUNC_10(VAR_9);
 if (VAR_7!=VAR_1)
 {
  FUNC_10(VAR_10);
  return(VAR_7);
 }
 *VAR_6=VAR_10;
 return(VAR_1);
}
