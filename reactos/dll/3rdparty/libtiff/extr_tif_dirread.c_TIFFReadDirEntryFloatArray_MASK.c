
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8 ;
typedef int uint64 ;
typedef int uint32 ;
typedef int uint16 ;
typedef int int8 ;
typedef int int64 ;
typedef scalar_t__ int32 ;
typedef int int16 ;
typedef enum TIFFReadDirEntryErr { ____Placeholder_TIFFReadDirEntryErr } TIFFReadDirEntryErr ;
struct TYPE_9__ {int tif_flags; } ;
struct TYPE_8__ {int tdir_type; } ;
typedef TYPE_1__ TIFFDirEntry ;
typedef TYPE_2__ TIFF ;


 double VAR_0 ;
 int FUNC_0 (TYPE_2__*,int,...) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*,int*,int,void**) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int*,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_4 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (void*) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static enum TIFFReadDirEntryErr FUNC_10(TIFF* VAR_5, TIFFDirEntry* VAR_6, float** VAR_7)
{
 enum TIFFReadDirEntryErr VAR_8;
 uint32 VAR_9;
 void* VAR_10;
 float* VAR_11;
 switch (VAR_6->tdir_type)
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
   return(VAR_3);
 }
 VAR_8=FUNC_1(VAR_5,VAR_6,&VAR_9,4,&VAR_10);
 if ((VAR_8!=VAR_2)||(VAR_10==0))
 {
  *VAR_7=0;
  return(VAR_8);
 }
 switch (VAR_6->tdir_type)
 {
  case 137:
   if (VAR_5->tif_flags&VAR_4)
    FUNC_2((uint32*)VAR_10,VAR_9);
   FUNC_0(VAR_5,VAR_9,(float*)VAR_10);
   *VAR_7=(float*)VAR_10;
   return(VAR_2);
 }
 VAR_11=(float*)FUNC_9(VAR_9*sizeof(float));
 if (VAR_11==0)
 {
  FUNC_8(VAR_10);
  return(VAR_1);
 }
 switch (VAR_6->tdir_type)
 {
  case 139:
   {
    uint8* VAR_12;
    float* VAR_13;
    uint32 VAR_14;
    VAR_12=(uint8*)VAR_10;
    VAR_13=VAR_11;
    for (VAR_14=0; VAR_14<VAR_9; VAR_14++)
     *VAR_13++=(float)(*VAR_12++);
   }
   break;
  case 133:
   {
    int8* VAR_15;
    float* VAR_16;
    uint32 VAR_17;
    VAR_15=(int8*)VAR_10;
    VAR_16=VAR_11;
    for (VAR_17=0; VAR_17<VAR_9; VAR_17++)
     *VAR_16++=(float)(*VAR_15++);
   }
   break;
  case 132:
   {
    uint16* VAR_18;
    float* VAR_19;
    uint32 VAR_20;
    VAR_18=(uint16*)VAR_10;
    VAR_19=VAR_11;
    for (VAR_20=0; VAR_20<VAR_9; VAR_20++)
    {
     if (VAR_5->tif_flags&VAR_4)
      FUNC_6(VAR_18);
     *VAR_19++=(float)(*VAR_18++);
    }
   }
   break;
  case 128:
   {
    int16* VAR_21;
    float* VAR_22;
    uint32 VAR_23;
    VAR_21=(int16*)VAR_10;
    VAR_22=VAR_11;
    for (VAR_23=0; VAR_23<VAR_9; VAR_23++)
    {
     if (VAR_5->tif_flags&VAR_4)
      FUNC_6((uint16*)VAR_21);
     *VAR_22++=(float)(*VAR_21++);
    }
   }
   break;
  case 136:
   {
    uint32* VAR_24;
    float* VAR_25;
    uint32 VAR_26;
    VAR_24=(uint32*)VAR_10;
    VAR_25=VAR_11;
    for (VAR_26=0; VAR_26<VAR_9; VAR_26++)
    {
     if (VAR_5->tif_flags&VAR_4)
      FUNC_4(VAR_24);
     *VAR_25++=(float)(*VAR_24++);
    }
   }
   break;
  case 131:
   {
    int32* VAR_27;
    float* VAR_28;
    uint32 VAR_29;
    VAR_27=(int32*)VAR_10;
    VAR_28=VAR_11;
    for (VAR_29=0; VAR_29<VAR_9; VAR_29++)
    {
     if (VAR_5->tif_flags&VAR_4)
      FUNC_4((uint32*)VAR_27);
     *VAR_28++=(float)(*VAR_27++);
    }
   }
   break;
  case 135:
   {
    uint64* VAR_30;
    float* VAR_31;
    uint32 VAR_32;
    VAR_30=(uint64*)VAR_10;
    VAR_31=VAR_11;
    for (VAR_32=0; VAR_32<VAR_9; VAR_32++)
    {
     if (VAR_5->tif_flags&VAR_4)
      FUNC_5(VAR_30);
     *VAR_31++ = (float)(*VAR_30++);

    }
   }
   break;
  case 130:
   {
    int64* VAR_33;
    float* VAR_34;
    uint32 VAR_35;
    VAR_33=(int64*)VAR_10;
    VAR_34=VAR_11;
    for (VAR_35=0; VAR_35<VAR_9; VAR_35++)
    {
     if (VAR_5->tif_flags&VAR_4)
      FUNC_5((uint64*)VAR_33);
     *VAR_34++=(float)(*VAR_33++);
    }
   }
   break;
  case 134:
   {
    uint32* VAR_36;
    uint32 VAR_37;
    uint32 VAR_38;
    float* VAR_39;
    uint32 VAR_40;
    VAR_36=(uint32*)VAR_10;
    VAR_39=VAR_11;
    for (VAR_40=0; VAR_40<VAR_9; VAR_40++)
    {
     if (VAR_5->tif_flags&VAR_4)
      FUNC_4(VAR_36);
     VAR_37=*VAR_36++;
     if (VAR_5->tif_flags&VAR_4)
      FUNC_4(VAR_36);
     VAR_38=*VAR_36++;
     if (VAR_38==0)
      *VAR_39++=0.0;
     else
      *VAR_39++=(float)VAR_37/(float)VAR_38;
    }
   }
   break;
  case 129:
   {
    uint32* VAR_41;
    int32 VAR_42;
    uint32 VAR_43;
    float* VAR_44;
    uint32 VAR_45;
    VAR_41=(uint32*)VAR_10;
    VAR_44=VAR_11;
    for (VAR_45=0; VAR_45<VAR_9; VAR_45++)
    {
     if (VAR_5->tif_flags&VAR_4)
      FUNC_4(VAR_41);
     VAR_42=*(int32*)VAR_41;
     VAR_41++;
     if (VAR_5->tif_flags&VAR_4)
      FUNC_4(VAR_41);
     VAR_43=*VAR_41++;
     if (VAR_43==0)
      *VAR_44++=0.0;
     else
      *VAR_44++=(float)VAR_42/(float)VAR_43;
    }
   }
   break;
  case 138:
   {
    double* VAR_46;
    float* VAR_47;
    uint32 VAR_48;
    if (VAR_5->tif_flags&VAR_4)
     FUNC_3((uint64*)VAR_10,VAR_9);
    FUNC_0(VAR_5,VAR_9,(double*)VAR_10);
    VAR_46=(double*)VAR_10;
    VAR_47=VAR_11;
    for (VAR_48=0; VAR_48<VAR_9; VAR_48++)
                                {
                                    double VAR_49 = *VAR_46++;
                                    if( VAR_49 > VAR_0 )
                                        VAR_49 = VAR_0;
                                    else if( VAR_49 < -VAR_0 )
                                        VAR_49 = -VAR_0;
                                    *VAR_47++=(float)VAR_49;
                                }
   }
   break;
 }
 FUNC_8(VAR_10);
 *VAR_7=VAR_11;
 return(VAR_2);
}
