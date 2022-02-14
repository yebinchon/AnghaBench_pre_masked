
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint64 ;
typedef int uint32 ;
typedef enum TIFFReadDirEntryErr { ____Placeholder_TIFFReadDirEntryErr } TIFFReadDirEntryErr ;
struct TYPE_9__ {scalar_t__* i; int l; } ;
typedef TYPE_2__ UInt64Aligned_t ;
struct TYPE_11__ {int tif_flags; } ;
struct TYPE_8__ {int toff_long8; int toff_long; } ;
struct TYPE_10__ {TYPE_1__ tdir_offset; } ;
typedef TYPE_3__ TIFFDirEntry ;
typedef TYPE_4__ TIFF ;


 int FUNC_0 (TYPE_4__*,int ,int,scalar_t__*) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__*,int) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int) ;

__attribute__((used)) static enum TIFFReadDirEntryErr FUNC_4(TIFF* VAR_3, TIFFDirEntry* VAR_4, double* VAR_5)
{
 UInt64Aligned_t VAR_6;

 FUNC_3(sizeof(double)==8);
 FUNC_3(sizeof(uint64)==8);
 FUNC_3(sizeof(uint32)==4);
 if (!(VAR_3->tif_flags&VAR_1))
 {
  enum TIFFReadDirEntryErr VAR_7;
  uint32 VAR_8 = VAR_4->tdir_offset.toff_long;
  if (VAR_3->tif_flags&VAR_2)
   FUNC_2(&VAR_8);
  VAR_7=FUNC_0(VAR_3,VAR_8,8,VAR_6.i);
  if (VAR_7!=VAR_0)
   return(VAR_7);
 }
 else
  VAR_6.l = VAR_4->tdir_offset.toff_long8;
 if (VAR_3->tif_flags&VAR_2)
  FUNC_1(VAR_6.i,2);



 if (VAR_6.i[0]==0 || VAR_6.i[1]==0)
  *VAR_5=0.0;
 else
  *VAR_5=(double)VAR_6.i[0]/(double)VAR_6.i[1];
 return(VAR_0);
}
