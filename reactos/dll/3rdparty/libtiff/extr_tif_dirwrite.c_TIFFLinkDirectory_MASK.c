
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
typedef int uint16 ;
typedef int toff_t ;
struct TYPE_11__ {int tiff_diroff; } ;
struct TYPE_10__ {scalar_t__ tiff_diroff; } ;
struct TYPE_12__ {TYPE_2__ big; TYPE_1__ classic; } ;
struct TYPE_13__ {int tif_diroff; int tif_flags; int tif_subifdoff; char const* tif_name; int tif_clientdata; TYPE_3__ tif_header; scalar_t__ tif_nsubifd; } ;
typedef TYPE_4__ TIFF ;


 int FUNC_0 (TYPE_4__*,int*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_4__*,int) ;
 int FUNC_2 (int ,char const*,char*) ;
 int FUNC_3 (TYPE_4__*,int,int ) ;
 int FUNC_4 (int*) ;
 int FUNC_5 (int*) ;
 int FUNC_6 (int*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (TYPE_4__*,int*,int) ;

__attribute__((used)) static int
FUNC_8(TIFF* VAR_5)
{
 static const char VAR_6[] = "TIFFLinkDirectory";

 VAR_5->tif_diroff = (FUNC_3(VAR_5,0,VAR_0)+1) & (~((toff_t)1));




 if (VAR_5->tif_flags & VAR_3)
 {
  if (!(VAR_5->tif_flags&VAR_2))
  {
   uint32 VAR_7;
   VAR_7 = (uint32)VAR_5->tif_diroff;
   if (VAR_5->tif_flags & VAR_4)
    FUNC_4(&VAR_7);
   (void) FUNC_3(VAR_5, VAR_5->tif_subifdoff, VAR_1);
   if (!FUNC_7(VAR_5, &VAR_7, 4)) {
    FUNC_2(VAR_5->tif_clientdata, VAR_6,
         "Error writing SubIFD directory link");
    return (0);
   }





   if (--VAR_5->tif_nsubifd)
    VAR_5->tif_subifdoff += 4;
   else
    VAR_5->tif_flags &= ~VAR_3;
   return (1);
  }
  else
  {
   uint64 VAR_8;
   VAR_8 = VAR_5->tif_diroff;
   if (VAR_5->tif_flags & VAR_4)
    FUNC_5(&VAR_8);
   (void) FUNC_3(VAR_5, VAR_5->tif_subifdoff, VAR_1);
   if (!FUNC_7(VAR_5, &VAR_8, 8)) {
    FUNC_2(VAR_5->tif_clientdata, VAR_6,
         "Error writing SubIFD directory link");
    return (0);
   }





   if (--VAR_5->tif_nsubifd)
    VAR_5->tif_subifdoff += 8;
   else
    VAR_5->tif_flags &= ~VAR_3;
   return (1);
  }
 }

 if (!(VAR_5->tif_flags&VAR_2))
 {
  uint32 VAR_9;
  uint32 VAR_10;
  VAR_9 = (uint32)(VAR_5->tif_diroff);
  if (VAR_5->tif_flags & VAR_4)
   FUNC_4(&VAR_9);
  if (VAR_5->tif_header.classic.tiff_diroff == 0) {



   VAR_5->tif_header.classic.tiff_diroff = (uint32) VAR_5->tif_diroff;
   (void) FUNC_3(VAR_5,4, VAR_1);
   if (!FUNC_7(VAR_5, &VAR_9, 4)) {
    FUNC_2(VAR_5->tif_clientdata, VAR_5->tif_name,
          "Error writing TIFF header");
    return (0);
   }
   return (1);
  }



  VAR_10 = VAR_5->tif_header.classic.tiff_diroff;
  while(1) {
   uint16 VAR_11;
   uint32 VAR_12;

   if (!FUNC_1(VAR_5, VAR_10) ||
       !FUNC_0(VAR_5, &VAR_11, 2)) {
    FUNC_2(VAR_5->tif_clientdata, VAR_6,
          "Error fetching directory count");
    return (0);
   }
   if (VAR_5->tif_flags & VAR_4)
    FUNC_6(&VAR_11);
   (void) FUNC_3(VAR_5,
       VAR_10+2+VAR_11*12, VAR_1);
   if (!FUNC_0(VAR_5, &VAR_12, 4)) {
    FUNC_2(VAR_5->tif_clientdata, VAR_6,
          "Error fetching directory link");
    return (0);
   }
   if (VAR_5->tif_flags & VAR_4)
    FUNC_4(&VAR_12);
   if (VAR_12==0)
   {
    (void) FUNC_3(VAR_5,
        VAR_10+2+VAR_11*12, VAR_1);
    if (!FUNC_7(VAR_5, &VAR_9, 4)) {
     FUNC_2(VAR_5->tif_clientdata, VAR_6,
          "Error writing directory link");
     return (0);
    }
    break;
   }
   VAR_10=VAR_12;
  }
 }
 else
 {
  uint64 VAR_13;
  uint64 VAR_14;
  VAR_13 = VAR_5->tif_diroff;
  if (VAR_5->tif_flags & VAR_4)
   FUNC_5(&VAR_13);
  if (VAR_5->tif_header.big.tiff_diroff == 0) {



   VAR_5->tif_header.big.tiff_diroff = VAR_5->tif_diroff;
   (void) FUNC_3(VAR_5,8, VAR_1);
   if (!FUNC_7(VAR_5, &VAR_13, 8)) {
    FUNC_2(VAR_5->tif_clientdata, VAR_5->tif_name,
          "Error writing TIFF header");
    return (0);
   }
   return (1);
  }



  VAR_14 = VAR_5->tif_header.big.tiff_diroff;
  while(1) {
   uint64 VAR_15;
   uint16 VAR_16;
   uint64 VAR_17;

   if (!FUNC_1(VAR_5, VAR_14) ||
       !FUNC_0(VAR_5, &VAR_15, 8)) {
    FUNC_2(VAR_5->tif_clientdata, VAR_6,
          "Error fetching directory count");
    return (0);
   }
   if (VAR_5->tif_flags & VAR_4)
    FUNC_5(&VAR_15);
   if (VAR_15>0xFFFF)
   {
    FUNC_2(VAR_5->tif_clientdata, VAR_6,
          "Sanity check on tag count failed, likely corrupt TIFF");
    return (0);
   }
   VAR_16=(uint16)VAR_15;
   (void) FUNC_3(VAR_5,
       VAR_14+8+VAR_16*20, VAR_1);
   if (!FUNC_0(VAR_5, &VAR_17, 8)) {
    FUNC_2(VAR_5->tif_clientdata, VAR_6,
          "Error fetching directory link");
    return (0);
   }
   if (VAR_5->tif_flags & VAR_4)
    FUNC_5(&VAR_17);
   if (VAR_17==0)
   {
    (void) FUNC_3(VAR_5,
        VAR_14+8+VAR_16*20, VAR_1);
    if (!FUNC_7(VAR_5, &VAR_13, 8)) {
     FUNC_2(VAR_5->tif_clientdata, VAR_6,
          "Error writing directory link");
     return (0);
    }
    break;
   }
   VAR_14=VAR_17;
  }
 }
 return (1);
}
