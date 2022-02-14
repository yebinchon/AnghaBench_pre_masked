
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32 ;
typedef int uint16 ;
typedef float int32 ;
struct TYPE_4__ {int tif_flags; int tif_clientdata; } ;
typedef int TIFFDirEntry ;
typedef TYPE_1__ TIFF ;


 int FUNC_0 (int ,char const*,char*) ;
 int FUNC_1 (int*,int) ;
 int FUNC_2 (TYPE_1__*,int*,int *,int ,int ,int,int,float*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (float*) ;
 float* FUNC_4 (int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int
FUNC_6(TIFF* VAR_2, uint32* VAR_3, TIFFDirEntry* VAR_4, uint16 VAR_5, uint32 VAR_6, float* VAR_7)
{
 static const char VAR_8[] = "TIFFWriteDirectoryTagCheckedSrationalArray";
 int32* VAR_9;
 float* VAR_10;
 int32* VAR_11;
 uint32 VAR_12;
 int VAR_13;
 FUNC_5(sizeof(int32)==4);
 VAR_9=FUNC_4(VAR_6*2*sizeof(int32));
 if (VAR_9==((void*)0))
 {
  FUNC_0(VAR_2->tif_clientdata,VAR_8,"Out of memory");
  return(0);
 }
 for (VAR_10=VAR_7, VAR_11=VAR_9, VAR_12=0; VAR_12<VAR_6; VAR_10++, VAR_11+=2, VAR_12++)
 {
  if (*VAR_10<0.0)
  {
   if (*VAR_10==(int32)(*VAR_10))
   {
    VAR_11[0]=(int32)(*VAR_10);
    VAR_11[1]=1;
   }
   else if (*VAR_10>-1.0)
   {
    VAR_11[0]=-(int32)((double)(-*VAR_10)*0x7FFFFFFF);
    VAR_11[1]=0x7FFFFFFF;
   }
   else
   {
    VAR_11[0]=-0x7FFFFFFF;
    VAR_11[1]=(int32)((double)0x7FFFFFFF/(-*VAR_10));
   }
  }
  else
  {
   if (*VAR_10==(int32)(*VAR_10))
   {
    VAR_11[0]=(int32)(*VAR_10);
    VAR_11[1]=1;
   }
   else if (*VAR_10<1.0)
   {
    VAR_11[0]=(int32)((double)(*VAR_10)*0x7FFFFFFF);
    VAR_11[1]=0x7FFFFFFF;
   }
   else
   {
    VAR_11[0]=0x7FFFFFFF;
    VAR_11[1]=(int32)((double)0x7FFFFFFF/(*VAR_10));
   }
  }
 }
 if (VAR_2->tif_flags&VAR_1)
  FUNC_1((uint32*)VAR_9,VAR_6*2);
 VAR_13=FUNC_2(VAR_2,VAR_3,VAR_4,VAR_5,VAR_0,VAR_6,VAR_6*8,&VAR_9[0]);
 FUNC_3(VAR_9);
 return(VAR_13);
}
