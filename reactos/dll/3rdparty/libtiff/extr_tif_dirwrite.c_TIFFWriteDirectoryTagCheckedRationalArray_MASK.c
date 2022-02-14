
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32 ;
typedef int uint16 ;
struct TYPE_4__ {int tif_flags; int tif_clientdata; } ;
typedef int TIFFDirEntry ;
typedef TYPE_1__ TIFF ;


 int FUNC_0 (int ,char const*,char*) ;
 int FUNC_1 (int*,int) ;
 int FUNC_2 (TYPE_1__*,int*,int *,int ,int ,int,int,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int*) ;
 int* FUNC_4 (int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int
FUNC_6(TIFF* VAR_2, uint32* VAR_3, TIFFDirEntry* VAR_4, uint16 VAR_5, uint32 VAR_6, float* VAR_7)
{
 static const char VAR_8[] = "TIFFWriteDirectoryTagCheckedRationalArray";
 uint32* VAR_9;
 float* VAR_10;
 uint32* VAR_11;
 uint32 VAR_12;
 int VAR_13;
 FUNC_5(sizeof(uint32)==4);
 VAR_9=FUNC_4(VAR_6*2*sizeof(uint32));
 if (VAR_9==((void*)0))
 {
  FUNC_0(VAR_2->tif_clientdata,VAR_8,"Out of memory");
  return(0);
 }
 for (VAR_10=VAR_7, VAR_11=VAR_9, VAR_12=0; VAR_12<VAR_6; VAR_10++, VAR_11+=2, VAR_12++)
 {
  if (*VAR_10<=0.0 || *VAR_10 != *VAR_10)
  {
   VAR_11[0]=0;
   VAR_11[1]=1;
  }
  else if (*VAR_10 >= 0 && *VAR_10 <= (float)0xFFFFFFFFU &&
                         *VAR_10==(float)(uint32)(*VAR_10))
  {
   VAR_11[0]=(uint32)(*VAR_10);
   VAR_11[1]=1;
  }
  else if (*VAR_10<1.0)
  {
   VAR_11[0]=(uint32)((double)(*VAR_10)*0xFFFFFFFF);
   VAR_11[1]=0xFFFFFFFF;
  }
  else
  {
   VAR_11[0]=0xFFFFFFFF;
   VAR_11[1]=(uint32)((double)0xFFFFFFFF/(*VAR_10));
  }
 }
 if (VAR_2->tif_flags&VAR_1)
  FUNC_1(VAR_9,VAR_6*2);
 VAR_13=FUNC_2(VAR_2,VAR_3,VAR_4,VAR_5,VAR_0,VAR_6,VAR_6*8,&VAR_9[0]);
 FUNC_3(VAR_9);
 return(VAR_13);
}
