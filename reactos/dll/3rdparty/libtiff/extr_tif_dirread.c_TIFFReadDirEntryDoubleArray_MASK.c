
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8 ;
typedef int uint64 ;
typedef int uint32 ;
typedef int uint16 ;
typedef int int8 ;
typedef int int64 ;
typedef scalar_t__ int32 ;
typedef int int16 ;
typedef enum TIFFReadDirEntryErr { ____Placeholder_TIFFReadDirEntryErr } TIFFReadDirEntryErr ;
struct TYPE_10__ {int tif_flags; } ;
struct TYPE_9__ {int tdir_type; } ;
typedef TYPE_1__ TIFFDirEntry ;
typedef TYPE_2__ TIFF ;


 int FUNC_0 (TYPE_2__*,int,double*) ;
 int FUNC_1 (TYPE_2__*,int,float*) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*,int*,int,void**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int*,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_3 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (void*) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static enum TIFFReadDirEntryErr
FUNC_11(TIFF* VAR_4, TIFFDirEntry* VAR_5, double** VAR_6)
{
 enum TIFFReadDirEntryErr VAR_7;
 uint32 VAR_8;
 void* VAR_9;
 double* VAR_10;
 switch (VAR_5->tdir_type)
 {
  case 139:
  case 133:
  case 132:
  case 128:
  case 136:
  case 131:
  case 135:
  case 130:
  case 134:
  case 129:
  case 137:
  case 138:
   break;
  default:
   return(VAR_2);
 }
 VAR_7=FUNC_2(VAR_4,VAR_5,&VAR_8,8,&VAR_9);
 if ((VAR_7!=VAR_1)||(VAR_9==0))
 {
  *VAR_6=0;
  return(VAR_7);
 }
 switch (VAR_5->tdir_type)
 {
  case 138:
   if (VAR_4->tif_flags&VAR_3)
    FUNC_4((uint64*)VAR_9,VAR_8);
   FUNC_0(VAR_4,VAR_8,(double*)VAR_9);
   *VAR_6=(double*)VAR_9;
   return(VAR_1);
 }
 VAR_10=(double*)FUNC_10(VAR_8*sizeof(double));
 if (VAR_10==0)
 {
  FUNC_9(VAR_9);
  return(VAR_0);
 }
 switch (VAR_5->tdir_type)
 {
  case 139:
   {
    uint8* VAR_11;
    double* VAR_12;
    uint32 VAR_13;
    VAR_11=(uint8*)VAR_9;
    VAR_12=VAR_10;
    for (VAR_13=0; VAR_13<VAR_8; VAR_13++)
     *VAR_12++=(double)(*VAR_11++);
   }
   break;
  case 133:
   {
    int8* VAR_14;
    double* VAR_15;
    uint32 VAR_16;
    VAR_14=(int8*)VAR_9;
    VAR_15=VAR_10;
    for (VAR_16=0; VAR_16<VAR_8; VAR_16++)
     *VAR_15++=(double)(*VAR_14++);
   }
   break;
  case 132:
   {
    uint16* VAR_17;
    double* VAR_18;
    uint32 VAR_19;
    VAR_17=(uint16*)VAR_9;
    VAR_18=VAR_10;
    for (VAR_19=0; VAR_19<VAR_8; VAR_19++)
    {
     if (VAR_4->tif_flags&VAR_3)
      FUNC_7(VAR_17);
     *VAR_18++=(double)(*VAR_17++);
    }
   }
   break;
  case 128:
   {
    int16* VAR_20;
    double* VAR_21;
    uint32 VAR_22;
    VAR_20=(int16*)VAR_9;
    VAR_21=VAR_10;
    for (VAR_22=0; VAR_22<VAR_8; VAR_22++)
    {
     if (VAR_4->tif_flags&VAR_3)
      FUNC_7((uint16*)VAR_20);
     *VAR_21++=(double)(*VAR_20++);
    }
   }
   break;
  case 136:
   {
    uint32* VAR_23;
    double* VAR_24;
    uint32 VAR_25;
    VAR_23=(uint32*)VAR_9;
    VAR_24=VAR_10;
    for (VAR_25=0; VAR_25<VAR_8; VAR_25++)
    {
     if (VAR_4->tif_flags&VAR_3)
      FUNC_5(VAR_23);
     *VAR_24++=(double)(*VAR_23++);
    }
   }
   break;
  case 131:
   {
    int32* VAR_26;
    double* VAR_27;
    uint32 VAR_28;
    VAR_26=(int32*)VAR_9;
    VAR_27=VAR_10;
    for (VAR_28=0; VAR_28<VAR_8; VAR_28++)
    {
     if (VAR_4->tif_flags&VAR_3)
      FUNC_5((uint32*)VAR_26);
     *VAR_27++=(double)(*VAR_26++);
    }
   }
   break;
  case 135:
   {
    uint64* VAR_29;
    double* VAR_30;
    uint32 VAR_31;
    VAR_29=(uint64*)VAR_9;
    VAR_30=VAR_10;
    for (VAR_31=0; VAR_31<VAR_8; VAR_31++)
    {
     if (VAR_4->tif_flags&VAR_3)
      FUNC_6(VAR_29);
     *VAR_30++ = (double)(*VAR_29++);

    }
   }
   break;
  case 130:
   {
    int64* VAR_32;
    double* VAR_33;
    uint32 VAR_34;
    VAR_32=(int64*)VAR_9;
    VAR_33=VAR_10;
    for (VAR_34=0; VAR_34<VAR_8; VAR_34++)
    {
     if (VAR_4->tif_flags&VAR_3)
      FUNC_6((uint64*)VAR_32);
     *VAR_33++=(double)(*VAR_32++);
    }
   }
   break;
  case 134:
   {
    uint32* VAR_35;
    uint32 VAR_36;
    uint32 VAR_37;
    double* VAR_38;
    uint32 VAR_39;
    VAR_35=(uint32*)VAR_9;
    VAR_38=VAR_10;
    for (VAR_39=0; VAR_39<VAR_8; VAR_39++)
    {
     if (VAR_4->tif_flags&VAR_3)
      FUNC_5(VAR_35);
     VAR_36=*VAR_35++;
     if (VAR_4->tif_flags&VAR_3)
      FUNC_5(VAR_35);
     VAR_37=*VAR_35++;
     if (VAR_37==0)
      *VAR_38++=0.0;
     else
      *VAR_38++=(double)VAR_36/(double)VAR_37;
    }
   }
   break;
  case 129:
   {
    uint32* VAR_40;
    int32 VAR_41;
    uint32 VAR_42;
    double* VAR_43;
    uint32 VAR_44;
    VAR_40=(uint32*)VAR_9;
    VAR_43=VAR_10;
    for (VAR_44=0; VAR_44<VAR_8; VAR_44++)
    {
     if (VAR_4->tif_flags&VAR_3)
      FUNC_5(VAR_40);
     VAR_41=*(int32*)VAR_40;
     VAR_40++;
     if (VAR_4->tif_flags&VAR_3)
      FUNC_5(VAR_40);
     VAR_42=*VAR_40++;
     if (VAR_42==0)
      *VAR_43++=0.0;
     else
      *VAR_43++=(double)VAR_41/(double)VAR_42;
    }
   }
   break;
  case 137:
   {
    float* VAR_45;
    double* VAR_46;
    uint32 VAR_47;
    if (VAR_4->tif_flags&VAR_3)
     FUNC_3((uint32*)VAR_9,VAR_8);
    FUNC_1(VAR_4,VAR_8,(float*)VAR_9);
    VAR_45=(float*)VAR_9;
    VAR_46=VAR_10;
    for (VAR_47=0; VAR_47<VAR_8; VAR_47++)
     *VAR_46++=(double)(*VAR_45++);
   }
   break;
 }
 FUNC_9(VAR_9);
 *VAR_6=VAR_10;
 return(VAR_1);
}
