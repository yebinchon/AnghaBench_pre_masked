
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
 int FUNC_1 (int*) ;
 int FUNC_2 (TYPE_1__*,int*,int *,int ,int ,int,int,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int) ;

__attribute__((used)) static int
FUNC_4(TIFF* VAR_2, uint32* VAR_3, TIFFDirEntry* VAR_4, uint16 VAR_5, double VAR_6)
{
        static const char VAR_7[] = "TIFFWriteDirectoryTagCheckedRational";
 uint32 VAR_8[2];
 FUNC_3(sizeof(uint32)==4);
        if( VAR_6 < 0 )
        {
            FUNC_0(VAR_2->tif_clientdata,VAR_7,"Negative value is illegal");
            return 0;
        }
        else if( VAR_6 != VAR_6 )
        {
            FUNC_0(VAR_2->tif_clientdata,VAR_7,"Not-a-number value is illegal");
            return 0;
        }
 else if (VAR_6==0.0)
 {
  VAR_8[0]=0;
  VAR_8[1]=1;
 }
 else if (VAR_6 <= 0xFFFFFFFFU && VAR_6==(double)(uint32)VAR_6)
 {
  VAR_8[0]=(uint32)VAR_6;
  VAR_8[1]=1;
 }
 else if (VAR_6<1.0)
 {
  VAR_8[0]=(uint32)(VAR_6*0xFFFFFFFF);
  VAR_8[1]=0xFFFFFFFF;
 }
 else
 {
  VAR_8[0]=0xFFFFFFFF;
  VAR_8[1]=(uint32)(0xFFFFFFFF/VAR_6);
 }
 if (VAR_2->tif_flags&VAR_1)
 {
  FUNC_1(&VAR_8[0]);
  FUNC_1(&VAR_8[1]);
 }
 return(FUNC_2(VAR_2,VAR_3,VAR_4,VAR_5,VAR_0,1,8,&VAR_8[0]));
}
