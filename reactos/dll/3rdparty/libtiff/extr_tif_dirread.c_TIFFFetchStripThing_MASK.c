
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64 ;
typedef scalar_t__ uint32 ;
typedef enum TIFFReadDirEntryErr { ____Placeholder_TIFFReadDirEntryErr } TIFFReadDirEntryErr ;
struct TYPE_7__ {scalar_t__ tdir_count; int tdir_tag; } ;
struct TYPE_6__ {char* field_name; } ;
typedef TYPE_1__ TIFFField ;
typedef TYPE_2__ TIFFDirEntry ;
typedef int TIFF ;


 TYPE_1__* FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,TYPE_2__*,scalar_t__**,scalar_t__) ;
 int FUNC_2 (int *,int,char const*,char*,int) ;
 scalar_t__ FUNC_3 (int *,scalar_t__,int,char*) ;
 int FUNC_4 (scalar_t__*) ;
 int FUNC_5 (scalar_t__*,scalar_t__*,scalar_t__) ;
 int FUNC_6 (scalar_t__*,int ,scalar_t__) ;
 scalar_t__ FUNC_7 (char const*) ;
 char* FUNC_8 (char*) ;

__attribute__((used)) static int
FUNC_9(TIFF* VAR_2, TIFFDirEntry* VAR_3, uint32 VAR_4, uint64** VAR_5)
{
 static const char VAR_6[] = "TIFFFetchStripThing";
 enum TIFFReadDirEntryErr VAR_7;
 uint64* VAR_8;
 VAR_7=FUNC_1(VAR_2,VAR_3,&VAR_8,VAR_4);
 if (VAR_7!=VAR_1)
 {
  const TIFFField* VAR_9 = FUNC_0(VAR_2,VAR_3->tdir_tag);
  FUNC_2(VAR_2,VAR_7,VAR_6,VAR_9 ? VAR_9->field_name : "unknown tagname",0);
  return(0);
 }
 if (VAR_3->tdir_count<(uint64)VAR_4)
 {
  uint64* VAR_10;
  const TIFFField* VAR_11 = FUNC_0(VAR_2,VAR_3->tdir_tag);
  const char* VAR_12 = FUNC_8("LIBTIFF_STRILE_ARRAY_MAX_RESIZE_COUNT");
  uint32 VAR_13 = 1000000;
  if( VAR_12 )
   VAR_13 = (uint32) FUNC_7(VAR_12);
  FUNC_2(VAR_2,VAR_0,
              VAR_6,
              VAR_11 ? VAR_11->field_name : "unknown tagname",
              ( VAR_4 <= VAR_13 ) );

  if( VAR_4 > VAR_13 )
  {
   FUNC_4(VAR_8);
   return(0);
  }

  VAR_10=(uint64*)FUNC_3(VAR_2,VAR_4,sizeof(uint64),"for strip array");
  if (VAR_10==0) {
   FUNC_4(VAR_8);
   return(0);
  }
                FUNC_5(VAR_10,VAR_8,(uint32)VAR_3->tdir_count*sizeof(uint64));
                FUNC_6(VAR_10+(uint32)VAR_3->tdir_count,0,(VAR_4-(uint32)VAR_3->tdir_count)*sizeof(uint64));
  FUNC_4(VAR_8);
  VAR_8=VAR_10;
 }
 *VAR_5=VAR_8;
 return(1);
}
