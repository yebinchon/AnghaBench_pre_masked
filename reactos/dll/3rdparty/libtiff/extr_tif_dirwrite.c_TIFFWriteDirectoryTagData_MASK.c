
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t uint64 ;
typedef size_t uint32 ;
typedef scalar_t__ uint16 ;
typedef int tmsize_t ;
struct TYPE_10__ {size_t toff_long8; } ;
struct TYPE_9__ {int tif_flags; size_t tif_dataoff; int tif_clientdata; } ;
struct TYPE_8__ {scalar_t__ tdir_tag; size_t tdir_count; TYPE_3__ tdir_offset; scalar_t__ tdir_type; } ;
typedef TYPE_1__ TIFFDirEntry ;
typedef TYPE_2__ TIFF ;


 int FUNC_0 (TYPE_2__*,size_t) ;
 int FUNC_1 (int ,char const*,char*) ;
 int FUNC_2 (size_t*) ;
 int FUNC_3 (size_t*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (TYPE_2__*,void*,int ) ;
 int FUNC_5 (TYPE_3__*,size_t*,int) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int
FUNC_7(TIFF* VAR_2, uint32* VAR_3, TIFFDirEntry* VAR_4, uint16 VAR_5, uint16 VAR_6, uint32 VAR_7, uint32 VAR_8, void* VAR_9)
{
 static const char VAR_10[] = "TIFFWriteDirectoryTagData";
 uint32 VAR_11;
 VAR_11=0;
 while (VAR_11<(*VAR_3))
 {
  FUNC_6(VAR_4[VAR_11].tdir_tag!=VAR_5);
  if (VAR_4[VAR_11].tdir_tag>VAR_5)
   break;
  VAR_11++;
 }
 if (VAR_11<(*VAR_3))
 {
  uint32 VAR_12;
  for (VAR_12=*VAR_3; VAR_12>VAR_11; VAR_12--)
   VAR_4[VAR_12]=VAR_4[VAR_12-1];
 }
 VAR_4[VAR_11].tdir_tag=VAR_5;
 VAR_4[VAR_11].tdir_type=VAR_6;
 VAR_4[VAR_11].tdir_count=VAR_7;
 VAR_4[VAR_11].tdir_offset.toff_long8 = 0;
 if (VAR_8<=((VAR_2->tif_flags&VAR_0)?0x8U:0x4U))
  FUNC_5(&VAR_4[VAR_11].tdir_offset,VAR_9,VAR_8);
 else
 {
  uint64 VAR_13,VAR_14;
  VAR_13=VAR_2->tif_dataoff;
  VAR_14=VAR_13+VAR_8;
  if (!(VAR_2->tif_flags&VAR_0))
   VAR_14=(uint32)VAR_14;
  if ((VAR_14<VAR_13)||(VAR_14<VAR_8))
  {
   FUNC_1(VAR_2->tif_clientdata,VAR_10,"Maximum TIFF file size exceeded");
   return(0);
  }
  if (!FUNC_0(VAR_2,VAR_13))
  {
   FUNC_1(VAR_2->tif_clientdata,VAR_10,"IO error writing tag data");
   return(0);
  }
  FUNC_6(VAR_8<0x80000000UL);
  if (!FUNC_4(VAR_2,VAR_9,(tmsize_t)VAR_8))
  {
   FUNC_1(VAR_2->tif_clientdata,VAR_10,"IO error writing tag data");
   return(0);
  }
  VAR_2->tif_dataoff=VAR_14;
  if (VAR_2->tif_dataoff&1)
   VAR_2->tif_dataoff++;
  if (!(VAR_2->tif_flags&VAR_0))
  {
   uint32 VAR_15;
   VAR_15=(uint32)VAR_13;
   if (VAR_2->tif_flags&VAR_1)
    FUNC_2(&VAR_15);
   FUNC_5(&VAR_4[VAR_11].tdir_offset,&VAR_15,4);
  }
  else
  {
   VAR_4[VAR_11].tdir_offset.toff_long8 = VAR_13;
   if (VAR_2->tif_flags&VAR_1)
    FUNC_3(&VAR_4[VAR_11].tdir_offset.toff_long8);
  }
 }
 (*VAR_3)++;
 return(1);
}
