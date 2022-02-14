
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint8 ;
typedef int uint32 ;
typedef int uint16 ;
typedef int int8 ;
typedef int int32 ;
typedef int int16 ;
struct TYPE_12__ {int td_sampleformat; int td_bitspersample; } ;
struct TYPE_13__ {TYPE_1__ tif_dir; int tif_clientdata; } ;
typedef int TIFFDirEntry ;
typedef TYPE_2__ TIFF ;





 float FUNC_0 (double) ;
 int FUNC_1 (double) ;
 int FUNC_2 (double) ;
 int FUNC_3 (double) ;
 int FUNC_4 (double) ;
 int FUNC_5 (double) ;
 int FUNC_6 (double) ;
 int FUNC_7 (int ,char const*,char*) ;
 int FUNC_8 (TYPE_2__*,int*,int *,int ,int,int *) ;
 int FUNC_9 (TYPE_2__*,int*,int *,int ,int,double*) ;
 int FUNC_10 (TYPE_2__*,int*,int *,int ,int,float*) ;
 int FUNC_11 (TYPE_2__*,int*,int *,int ,int,int*) ;
 int FUNC_12 (TYPE_2__*,int*,int *,int ,int,int *) ;
 int FUNC_13 (TYPE_2__*,int*,int *,int ,int,int *) ;
 int FUNC_14 (TYPE_2__*,int*,int *,int ,int,int *) ;
 int FUNC_15 (TYPE_2__*,int*,int *,int ,int,int *) ;
 int FUNC_16 (void*) ;
 void* FUNC_17 (int) ;

__attribute__((used)) static int
FUNC_18(TIFF* VAR_0, uint32* VAR_1, TIFFDirEntry* VAR_2, uint16 VAR_3, uint32 VAR_4, double* VAR_5)
{
 static const char VAR_6[] = "TIFFWriteDirectoryTagSampleformatArray";
 void* VAR_7;
 uint32 VAR_8;
 int VAR_9;
 VAR_7 = FUNC_17(VAR_4*sizeof(double));
 if (VAR_7 == ((void*)0))
 {
  FUNC_7(VAR_0->tif_clientdata, VAR_6, "Out of memory");
  return (0);
 }

 switch (VAR_0->tif_dir.td_sampleformat)
 {
  case 130:
   if (VAR_0->tif_dir.td_bitspersample<=32)
   {
    for (VAR_8 = 0; VAR_8 < VAR_4; ++VAR_8)
     ((float*)VAR_7)[VAR_8] = FUNC_0(VAR_5[VAR_8]);
    VAR_9 = FUNC_10(VAR_0,VAR_1,VAR_2,VAR_3,VAR_4,(float*)VAR_7);
   }
   else
   {
    VAR_9 = FUNC_9(VAR_0,VAR_1,VAR_2,VAR_3,VAR_4,VAR_5);
   }
   break;
  case 129:
   if (VAR_0->tif_dir.td_bitspersample<=8)
   {
    for (VAR_8 = 0; VAR_8 < VAR_4; ++VAR_8)
     ((int8*)VAR_7)[VAR_8] = FUNC_3(VAR_5[VAR_8]);
    VAR_9 = FUNC_12(VAR_0,VAR_1,VAR_2,VAR_3,VAR_4,(int8*)VAR_7);
   }
   else if (VAR_0->tif_dir.td_bitspersample<=16)
   {
    for (VAR_8 = 0; VAR_8 < VAR_4; ++VAR_8)
     ((int16*)VAR_7)[VAR_8] = FUNC_1(VAR_5[VAR_8]);
    VAR_9 = FUNC_15(VAR_0,VAR_1,VAR_2,VAR_3,VAR_4,(int16*)VAR_7);
   }
   else
   {
    for (VAR_8 = 0; VAR_8 < VAR_4; ++VAR_8)
     ((int32*)VAR_7)[VAR_8] = FUNC_2(VAR_5[VAR_8]);
    VAR_9 = FUNC_14(VAR_0,VAR_1,VAR_2,VAR_3,VAR_4,(int32*)VAR_7);
   }
   break;
  case 128:
   if (VAR_0->tif_dir.td_bitspersample<=8)
   {
    for (VAR_8 = 0; VAR_8 < VAR_4; ++VAR_8)
     ((uint8*)VAR_7)[VAR_8] = FUNC_6(VAR_5[VAR_8]);
    VAR_9 = FUNC_8(VAR_0,VAR_1,VAR_2,VAR_3,VAR_4,(uint8*)VAR_7);
   }
   else if (VAR_0->tif_dir.td_bitspersample<=16)
   {
    for (VAR_8 = 0; VAR_8 < VAR_4; ++VAR_8)
     ((uint16*)VAR_7)[VAR_8] = FUNC_4(VAR_5[VAR_8]);
    VAR_9 = FUNC_13(VAR_0,VAR_1,VAR_2,VAR_3,VAR_4,(uint16*)VAR_7);
   }
   else
   {
    for (VAR_8 = 0; VAR_8 < VAR_4; ++VAR_8)
     ((uint32*)VAR_7)[VAR_8] = FUNC_5(VAR_5[VAR_8]);
    VAR_9 = FUNC_11(VAR_0,VAR_1,VAR_2,VAR_3,VAR_4,(uint32*)VAR_7);
   }
   break;
  default:
   VAR_9 = 0;
 }

 FUNC_16(VAR_7);
 return (VAR_9);
}
