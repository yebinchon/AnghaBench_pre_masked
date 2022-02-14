
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64 ;
typedef int uint32 ;
typedef int int64 ;
typedef enum TIFFReadDirEntryErr { ____Placeholder_TIFFReadDirEntryErr } TIFFReadDirEntryErr ;
struct TYPE_9__ {int tif_flags; } ;
struct TYPE_7__ {int toff_long; } ;
struct TYPE_8__ {TYPE_1__ tdir_offset; } ;
typedef TYPE_2__ TIFFDirEntry ;
typedef TYPE_3__ TIFF ;


 int FUNC_0 (TYPE_3__*,int ,int,int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static enum TIFFReadDirEntryErr FUNC_3(TIFF* VAR_3, TIFFDirEntry* VAR_4, int64* VAR_5)
{
 if (!(VAR_3->tif_flags&VAR_1))
 {
  enum TIFFReadDirEntryErr VAR_6;
  uint32 VAR_7 = VAR_4->tdir_offset.toff_long;
  if (VAR_3->tif_flags&VAR_2)
   FUNC_1(&VAR_7);
  VAR_6=FUNC_0(VAR_3,VAR_7,8,VAR_5);
  if (VAR_6!=VAR_0)
   return(VAR_6);
 }
 else
  *VAR_5=*(int64*)(&VAR_4->tdir_offset);
 if (VAR_3->tif_flags&VAR_2)
  FUNC_2((uint64*)VAR_5);
 return(VAR_0);
}
