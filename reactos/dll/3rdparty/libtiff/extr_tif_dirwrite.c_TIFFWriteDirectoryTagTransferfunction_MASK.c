
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32 ;
typedef int uint16 ;
struct TYPE_5__ {int td_bitspersample; int td_samplesperpixel; int td_extrasamples; int * td_transferfunction; } ;
struct TYPE_6__ {TYPE_1__ tif_dir; int tif_clientdata; } ;
typedef int TIFFDirEntry ;
typedef TYPE_2__ TIFF ;


 int FUNC_0 (int ,char const*,char*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*,int*,int *,int ,int,int*) ;
 int FUNC_2 (int*) ;
 int* FUNC_3 (int) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int*,int ,int) ;

__attribute__((used)) static int
FUNC_6(TIFF* VAR_1, uint32* VAR_2, TIFFDirEntry* VAR_3)
{
 static const char VAR_4[] = "TIFFWriteDirectoryTagTransferfunction";
 uint32 VAR_5;
 uint16 VAR_6;
 uint16* VAR_7;
 int VAR_8;
 if (VAR_3==((void*)0))
 {
  (*VAR_2)++;
  return(1);
 }
 VAR_5=(1<<VAR_1->tif_dir.td_bitspersample);
 VAR_6=VAR_1->tif_dir.td_samplesperpixel-VAR_1->tif_dir.td_extrasamples;






 if (VAR_6>3)
  VAR_6=3;
 if (VAR_6==3)
 {
  if (!FUNC_4(VAR_1->tif_dir.td_transferfunction[0],VAR_1->tif_dir.td_transferfunction[2],VAR_5*sizeof(uint16)))
   VAR_6=2;
 }
 if (VAR_6==2)
 {
  if (!FUNC_4(VAR_1->tif_dir.td_transferfunction[0],VAR_1->tif_dir.td_transferfunction[1],VAR_5*sizeof(uint16)))
   VAR_6=1;
 }
 if (VAR_6==0)
  VAR_6=1;
 VAR_7=FUNC_3(VAR_6*VAR_5*sizeof(uint16));
 if (VAR_7==((void*)0))
 {
  FUNC_0(VAR_1->tif_clientdata,VAR_4,"Out of memory");
  return(0);
 }
 FUNC_5(&VAR_7[0],VAR_1->tif_dir.td_transferfunction[0],VAR_5*sizeof(uint16));
 if (VAR_6>1)
  FUNC_5(&VAR_7[VAR_5],VAR_1->tif_dir.td_transferfunction[1],VAR_5*sizeof(uint16));
 if (VAR_6>2)
  FUNC_5(&VAR_7[2*VAR_5],VAR_1->tif_dir.td_transferfunction[2],VAR_5*sizeof(uint16));
 VAR_8=FUNC_1(VAR_1,VAR_2,VAR_3,VAR_0,VAR_6*VAR_5,VAR_7);
 FUNC_2(VAR_7);
 return(VAR_8);
}
