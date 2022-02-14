
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint64 ;
typedef int uint32 ;
typedef enum TIFFReadDirEntryErr { ____Placeholder_TIFFReadDirEntryErr } TIFFReadDirEntryErr ;
struct TYPE_11__ {int* i; scalar_t__ l; } ;
typedef TYPE_2__ UInt64Aligned_t ;
struct TYPE_13__ {int tif_flags; } ;
struct TYPE_10__ {scalar_t__ toff_long8; } ;
struct TYPE_12__ {int tdir_count; scalar_t__ tdir_type; int tdir_tag; TYPE_1__ tdir_offset; } ;
typedef TYPE_3__ TIFFDirEntry ;
typedef TYPE_4__ TIFF ;


 int FUNC_0 (TYPE_4__*,int ,int,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_4__*,int,char const*,char*,int ) ;
 int FUNC_2 (TYPE_4__*,int ,double) ;
 int FUNC_3 (int*,int) ;
 int FUNC_4 (int *) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int) ;

__attribute__((used)) static int
FUNC_6(TIFF* VAR_7, TIFFDirEntry* VAR_8)
{
 static const char VAR_9[] = "TIFFFetchSubjectDistance";
 enum TIFFReadDirEntryErr VAR_10;
 UInt64Aligned_t VAR_11;
    VAR_11.l=0;
 FUNC_5(sizeof(double)==8);
 FUNC_5(sizeof(uint64)==8);
 FUNC_5(sizeof(uint32)==4);
 if (VAR_8->tdir_count!=1)
  VAR_10=VAR_0;
 else if (VAR_8->tdir_type!=VAR_4)
  VAR_10=VAR_2;
 else
 {
  if (!(VAR_7->tif_flags&VAR_3))
  {
   uint32 VAR_12;
   VAR_12=*(uint32*)(&VAR_8->tdir_offset);
   if (VAR_7->tif_flags&VAR_5)
    FUNC_4(&VAR_12);
   VAR_10=FUNC_0(VAR_7,VAR_12,8,VAR_11.i);
  }
  else
  {
   VAR_11.l=VAR_8->tdir_offset.toff_long8;
   VAR_10=VAR_1;
  }
 }
 if (VAR_10==VAR_1)
 {
  double VAR_13;
  if (VAR_7->tif_flags&VAR_5)
   FUNC_3(VAR_11.i,2);
  if (VAR_11.i[0]==0)
   VAR_13=0.0;
  else if (VAR_11.i[0]==0xFFFFFFFF)





   VAR_13=-1.0;
  else
   VAR_13=(double)VAR_11.i[0]/(double)VAR_11.i[1];
  return(FUNC_2(VAR_7,VAR_8->tdir_tag,VAR_13));
 }
 else
 {
  FUNC_1(VAR_7,VAR_10,VAR_9,"SubjectDistance",VAR_6);
  return(0);
 }
}
