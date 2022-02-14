
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32 ;
typedef scalar_t__ uint16 ;
struct TYPE_5__ {int td_samplesperpixel; } ;
struct TYPE_6__ {TYPE_1__ tif_dir; int tif_clientdata; } ;
typedef int TIFFDirEntry ;
typedef TYPE_2__ TIFF ;


 int FUNC_0 (int ,char const*,char*) ;
 int FUNC_1 (TYPE_2__*,int *,int *,scalar_t__,scalar_t__,scalar_t__*) ;
 int FUNC_2 (scalar_t__*) ;
 scalar_t__* FUNC_3 (int) ;

__attribute__((used)) static int
FUNC_4(TIFF* VAR_0, uint32* VAR_1, TIFFDirEntry* VAR_2, uint16 VAR_3, uint16 VAR_4)
{
 static const char VAR_5[] = "TIFFWriteDirectoryTagShortPerSample";
 uint16* VAR_6;
 uint16* VAR_7;
 uint16 VAR_8;
 int VAR_9;
 if (VAR_2==((void*)0))
 {
  (*VAR_1)++;
  return(1);
 }
 VAR_6=FUNC_3(VAR_0->tif_dir.td_samplesperpixel*sizeof(uint16));
 if (VAR_6==((void*)0))
 {
  FUNC_0(VAR_0->tif_clientdata,VAR_5,"Out of memory");
  return(0);
 }
 for (VAR_7=VAR_6, VAR_8=0; VAR_8<VAR_0->tif_dir.td_samplesperpixel; VAR_7++, VAR_8++)
  *VAR_7=VAR_4;
 VAR_9=FUNC_1(VAR_0,VAR_1,VAR_2,VAR_3,VAR_0->tif_dir.td_samplesperpixel,VAR_6);
 FUNC_2(VAR_6);
 return(VAR_9);
}
