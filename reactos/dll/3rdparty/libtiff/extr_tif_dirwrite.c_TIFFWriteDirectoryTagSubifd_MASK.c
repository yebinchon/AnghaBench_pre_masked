
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64 ;
typedef scalar_t__ uint32 ;
typedef scalar_t__ uint16 ;
struct TYPE_6__ {int td_nsubifd; int* td_subifd; } ;
struct TYPE_7__ {int tif_dataoff; int tif_flags; scalar_t__ tif_nsubifd; int tif_subifdoff; TYPE_1__ tif_dir; int tif_clientdata; } ;
typedef int TIFFDirEntry ;
typedef TYPE_2__ TIFF ;


 int FUNC_0 (int ,char const*,char*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*,scalar_t__*,int *,int ,scalar_t__,int*) ;
 int FUNC_2 (TYPE_2__*,scalar_t__*,int *,int ,scalar_t__,scalar_t__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (scalar_t__*) ;
 scalar_t__* FUNC_4 (int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int
FUNC_6(TIFF* VAR_3, uint32* VAR_4, TIFFDirEntry* VAR_5)
{
 static const char VAR_6[] = "TIFFWriteDirectoryTagSubifd";
 uint64 VAR_7;
 int VAR_8;
 if (VAR_3->tif_dir.td_nsubifd==0)
  return(1);
 if (VAR_5==((void*)0))
 {
  (*VAR_4)++;
  return(1);
 }
 VAR_7=VAR_3->tif_dataoff;
 if (!(VAR_3->tif_flags&VAR_1))
 {
  uint32* VAR_9;
  uint64* VAR_10;
  uint32* VAR_11;
  uint16 VAR_12;
  VAR_9=FUNC_4(VAR_3->tif_dir.td_nsubifd*sizeof(uint32));
  if (VAR_9==((void*)0))
  {
   FUNC_0(VAR_3->tif_clientdata,VAR_6,"Out of memory");
   return(0);
  }
  VAR_10=VAR_3->tif_dir.td_subifd;
  VAR_11=VAR_9;
  for (VAR_12=0; VAR_12 < VAR_3->tif_dir.td_nsubifd; VAR_12++)
  {
                        FUNC_5(VAR_10 != 0);


                        if( *VAR_10 > 0xFFFFFFFFUL)
                        {
                            FUNC_0(VAR_3->tif_clientdata,VAR_6,"Illegal value for SubIFD tag");
                            FUNC_3(VAR_9);
                            return(0);
                        }
   *VAR_11++=(uint32)(*VAR_10++);
  }
  VAR_8=FUNC_2(VAR_3,VAR_4,VAR_5,VAR_0,VAR_3->tif_dir.td_nsubifd,VAR_9);
  FUNC_3(VAR_9);
 }
 else
  VAR_8=FUNC_1(VAR_3,VAR_4,VAR_5,VAR_0,VAR_3->tif_dir.td_nsubifd,VAR_3->tif_dir.td_subifd);
 if (!VAR_8)
  return(0);
 VAR_3->tif_flags|=VAR_2;
 VAR_3->tif_nsubifd=VAR_3->tif_dir.td_nsubifd;
 if (VAR_3->tif_dir.td_nsubifd==1)
  VAR_3->tif_subifdoff=0;
 else
  VAR_3->tif_subifdoff=VAR_7;
 return(1);
}
