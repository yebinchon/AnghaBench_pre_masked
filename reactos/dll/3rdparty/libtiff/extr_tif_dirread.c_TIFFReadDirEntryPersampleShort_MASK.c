
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint64 ;
typedef scalar_t__ uint16 ;
typedef enum TIFFReadDirEntryErr { ____Placeholder_TIFFReadDirEntryErr } TIFFReadDirEntryErr ;
struct TYPE_8__ {scalar_t__ td_samplesperpixel; } ;
struct TYPE_10__ {TYPE_1__ tif_dir; } ;
struct TYPE_9__ {scalar_t__ tdir_count; } ;
typedef TYPE_2__ TIFFDirEntry ;
typedef TYPE_3__ TIFF ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,TYPE_2__*,scalar_t__**) ;
 int FUNC_1 (scalar_t__*) ;

__attribute__((used)) static enum TIFFReadDirEntryErr FUNC_2(TIFF* VAR_3, TIFFDirEntry* VAR_4, uint16* VAR_5)
{
 enum TIFFReadDirEntryErr VAR_6;
 uint16* VAR_7;
 uint16* VAR_8;
 uint16 VAR_9;
 if (VAR_4->tdir_count<(uint64)VAR_3->tif_dir.td_samplesperpixel)
  return(VAR_0);
 VAR_6=FUNC_0(VAR_3,VAR_4,&VAR_7);
 if (VAR_6!=VAR_1 || VAR_7 == ((void*)0))
  return(VAR_6);
 VAR_8=VAR_7;
 VAR_9=VAR_3->tif_dir.td_samplesperpixel;
 *VAR_5=*VAR_8++;
 VAR_9--;
 while (VAR_9>0)
 {
  if (*VAR_8++!=*VAR_5)
  {
   VAR_6=VAR_2;
   break;
  }
  VAR_9--;
 }
 FUNC_1(VAR_7);
 return(VAR_6);
}
