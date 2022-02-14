
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8 ;
typedef int uint64 ;
typedef int uint32 ;
typedef int uint16 ;
typedef scalar_t__ tmsize_t ;
struct TYPE_13__ {int tif_diroff; int tif_flags; scalar_t__ tif_size; scalar_t__ tif_base; int tif_clientdata; int tif_name; } ;
struct TYPE_11__ {void* toff_long8; } ;
struct TYPE_12__ {int tdir_tag; int tdir_type; int tdir_count; TYPE_1__ tdir_offset; } ;
typedef TYPE_2__ TIFFDirEntry ;
typedef TYPE_3__ TIFF ;


 int FUNC_0 (TYPE_3__*,int*,int) ;
 int FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (int ,char const*,char*,...) ;
 void* FUNC_3 (int *) ;
 int FUNC_4 (int*) ;
 int FUNC_5 (int*) ;
 int FUNC_6 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_7 (TYPE_3__*,int,int,char*) ;
 int FUNC_8 (void*) ;
 int FUNC_9 (int*,scalar_t__,int) ;
 int FUNC_10 (TYPE_2__**) ;
 int FUNC_11 (TYPE_3__*) ;

__attribute__((used)) static uint16
FUNC_12(TIFF* VAR_2, uint64 VAR_3, TIFFDirEntry** VAR_4,
                   uint64 *VAR_5)
{
 static const char VAR_6[] = "TIFFFetchDirectory";

 void* VAR_7;
 uint16 VAR_8;
 uint32 VAR_9;
 TIFFDirEntry* VAR_10;
 uint8* VAR_11;
 TIFFDirEntry* VAR_12;
 uint16 VAR_13;

 FUNC_10(VAR_4);

 VAR_2->tif_diroff = VAR_3;
 if (VAR_5)
  *VAR_5 = 0;
 if (!FUNC_11(VAR_2)) {
  if (!FUNC_1(VAR_2, VAR_2->tif_diroff)) {
   FUNC_2(VAR_2->tif_clientdata, VAR_6,
    "%s: Seek error accessing TIFF directory",
    VAR_2->tif_name);
   return 0;
  }
  if (!(VAR_2->tif_flags&VAR_0))
  {
   if (!FUNC_0(VAR_2, &VAR_8, sizeof (uint16))) {
    FUNC_2(VAR_2->tif_clientdata, VAR_6,
        "%s: Can not read TIFF directory count",
        VAR_2->tif_name);
    return 0;
   }
   if (VAR_2->tif_flags & VAR_1)
    FUNC_6(&VAR_8);
   if (VAR_8>4096)
   {
    FUNC_2(VAR_2->tif_clientdata, VAR_6,
        "Sanity check on directory count failed, this is probably not a valid IFD offset");
    return 0;
   }
   VAR_9 = 12;
  } else {
   uint64 VAR_14;
   if (!FUNC_0(VAR_2, &VAR_14, sizeof (uint64))) {
    FUNC_2(VAR_2->tif_clientdata, VAR_6,
     "%s: Can not read TIFF directory count",
     VAR_2->tif_name);
    return 0;
   }
   if (VAR_2->tif_flags & VAR_1)
    FUNC_5(&VAR_14);
   if (VAR_14>4096)
   {
    FUNC_2(VAR_2->tif_clientdata, VAR_6,
        "Sanity check on directory count failed, this is probably not a valid IFD offset");
    return 0;
   }
   VAR_8 = (uint16)VAR_14;
   VAR_9 = 20;
  }
  VAR_7 = FUNC_7(VAR_2, VAR_8,
      VAR_9, "to read TIFF directory");
  if (VAR_7 == ((void*)0))
   return 0;
  if (!FUNC_0(VAR_2, VAR_7, (tmsize_t)(VAR_8*VAR_9))) {
   FUNC_2(VAR_2->tif_clientdata, VAR_6,
    "%.100s: Can not read TIFF directory",
    VAR_2->tif_name);
   FUNC_8(VAR_7);
   return 0;
  }




  if (VAR_5)
  {
   if (!(VAR_2->tif_flags&VAR_0))
   {
    uint32 VAR_15;
    if (!FUNC_0(VAR_2, &VAR_15, sizeof(uint32)))
     VAR_15 = 0;
    if (VAR_2->tif_flags&VAR_1)
     FUNC_4(&VAR_15);
    *VAR_5=VAR_15;
   } else {
    if (!FUNC_0(VAR_2, VAR_5, sizeof(uint64)))
     *VAR_5 = 0;
    if (VAR_2->tif_flags&VAR_1)
     FUNC_5(VAR_5);
   }
  }
 } else {
  tmsize_t VAR_16;
  tmsize_t VAR_17 = (tmsize_t) VAR_2->tif_diroff;
  if ((uint64)VAR_17!=VAR_2->tif_diroff)
  {
   FUNC_2(VAR_2->tif_clientdata,VAR_6,"Can not read TIFF directory count");
   return(0);
  }
  if (!(VAR_2->tif_flags&VAR_0))
  {
   VAR_16=VAR_17+sizeof(uint16);
   if ((VAR_16<VAR_17)||(VAR_16<(tmsize_t)sizeof(uint16))||(VAR_16>VAR_2->tif_size)) {
    FUNC_2(VAR_2->tif_clientdata, VAR_6,
     "Can not read TIFF directory count");
    return 0;
   } else {
    FUNC_9(&VAR_8, VAR_2->tif_base + VAR_17,
         sizeof(uint16));
   }
   VAR_17 += sizeof (uint16);
   if (VAR_2->tif_flags & VAR_1)
    FUNC_6(&VAR_8);
   if (VAR_8>4096)
   {
    FUNC_2(VAR_2->tif_clientdata, VAR_6,
        "Sanity check on directory count failed, this is probably not a valid IFD offset");
    return 0;
   }
   VAR_9 = 12;
  }
  else
  {
   uint64 VAR_18;
   VAR_16=VAR_17+sizeof(uint64);
   if ((VAR_16<VAR_17)||(VAR_16<(tmsize_t)sizeof(uint64))||(VAR_16>VAR_2->tif_size)) {
    FUNC_2(VAR_2->tif_clientdata, VAR_6,
     "Can not read TIFF directory count");
    return 0;
   } else {
    FUNC_9(&VAR_18, VAR_2->tif_base + VAR_17,
         sizeof(uint64));
   }
   VAR_17 += sizeof (uint64);
   if (VAR_2->tif_flags & VAR_1)
    FUNC_5(&VAR_18);
   if (VAR_18>4096)
   {
    FUNC_2(VAR_2->tif_clientdata, VAR_6,
        "Sanity check on directory count failed, this is probably not a valid IFD offset");
    return 0;
   }
   VAR_8 = (uint16)VAR_18;
   VAR_9 = 20;
  }
  if (VAR_8 == 0 )
  {
   FUNC_2(VAR_2->tif_clientdata, VAR_6,
                "Sanity check on directory count failed, zero tag directories not supported");
   return 0;
  }
  VAR_7 = FUNC_7(VAR_2, VAR_8,
      VAR_9,
      "to read TIFF directory");
  if (VAR_7 == ((void*)0))
   return 0;
  VAR_16=VAR_17+VAR_8*VAR_9;
  if ((VAR_16<VAR_17)||(VAR_16<(tmsize_t)(VAR_8*VAR_9))||(VAR_16>VAR_2->tif_size)) {
   FUNC_2(VAR_2->tif_clientdata, VAR_6,
         "Can not read TIFF directory");
   FUNC_8(VAR_7);
   return 0;
  } else {
   FUNC_9(VAR_7, VAR_2->tif_base + VAR_17,
        VAR_8 * VAR_9);
  }
  if (VAR_5) {
   VAR_17 += VAR_8 * VAR_9;
   if (!(VAR_2->tif_flags&VAR_0))
   {
    uint32 VAR_19;
    VAR_16=VAR_17+sizeof(uint32);
    if ((VAR_16<VAR_17)||(VAR_16<(tmsize_t)sizeof(uint32))||(VAR_16>VAR_2->tif_size))
     VAR_19 = 0;
    else
     FUNC_9(&VAR_19, VAR_2->tif_base + VAR_17,
          sizeof (uint32));
    if (VAR_2->tif_flags&VAR_1)
     FUNC_4(&VAR_19);
    *VAR_5 = VAR_19;
   }
   else
   {
    VAR_16=VAR_17+sizeof(uint64);
    if ((VAR_16<VAR_17)||(VAR_16<(tmsize_t)sizeof(uint64))||(VAR_16>VAR_2->tif_size))
     *VAR_5 = 0;
    else
     FUNC_9(VAR_5, VAR_2->tif_base + VAR_17,
          sizeof (uint64));
    if (VAR_2->tif_flags&VAR_1)
     FUNC_5(VAR_5);
   }
  }
 }
 VAR_10 = (TIFFDirEntry*)FUNC_7(VAR_2, VAR_8,
      sizeof(TIFFDirEntry),
      "to read TIFF directory");
 if (VAR_10==0)
 {
  FUNC_8(VAR_7);
  return 0;
 }
 VAR_11=(uint8*)VAR_7;
 VAR_12=VAR_10;
 for (VAR_13=0; VAR_13<VAR_8; VAR_13++)
 {
  if (VAR_2->tif_flags&VAR_1)
   FUNC_6((uint16*)VAR_11);
  VAR_12->tdir_tag=*(uint16*)VAR_11;
  VAR_11+=sizeof(uint16);
  if (VAR_2->tif_flags&VAR_1)
   FUNC_6((uint16*)VAR_11);
  VAR_12->tdir_type=*(uint16*)VAR_11;
  VAR_11+=sizeof(uint16);
  if (!(VAR_2->tif_flags&VAR_0))
  {
   if (VAR_2->tif_flags&VAR_1)
    FUNC_4((uint32*)VAR_11);
   VAR_12->tdir_count=(uint64)(*(uint32*)VAR_11);
   VAR_11+=sizeof(uint32);
   *(uint32*)(&VAR_12->tdir_offset)=*(uint32*)VAR_11;
   VAR_11+=sizeof(uint32);
  }
  else
  {
   if (VAR_2->tif_flags&VAR_1)
    FUNC_5((uint64*)VAR_11);
                        VAR_12->tdir_count=FUNC_3(VAR_11);
   VAR_11+=sizeof(uint64);
   VAR_12->tdir_offset.toff_long8=FUNC_3(VAR_11);
   VAR_11+=sizeof(uint64);
  }
  VAR_12++;
 }
 FUNC_8(VAR_7);
 *VAR_4 = VAR_10;
 return VAR_8;
}
