
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint64 ;
typedef int uint32 ;
typedef int uint16 ;
struct TYPE_12__ {scalar_t__ tiff_diroff; } ;
struct TYPE_11__ {scalar_t__ tiff_diroff; } ;
struct TYPE_13__ {TYPE_2__ big; TYPE_1__ classic; } ;
struct TYPE_14__ {scalar_t__ tif_diroff; int tif_flags; char const* tif_name; int tif_clientdata; TYPE_3__ tif_header; } ;
typedef TYPE_4__ TIFF ;


 int FUNC_0 (TYPE_4__*,int*,int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_4__*,int) ;
 int FUNC_2 (int ,char const*,char*) ;
 int FUNC_3 (TYPE_4__*,int,int ) ;
 int FUNC_4 (int*) ;
 int FUNC_5 (int*) ;
 int FUNC_6 (int*) ;
 int FUNC_7 (TYPE_4__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_8 (TYPE_4__*,int*,int) ;

int
FUNC_9( TIFF *VAR_3 )
{
 static const char VAR_4[] = "TIFFRewriteDirectory";


 if( VAR_3->tif_diroff == 0 )
  return FUNC_7( VAR_3 );






 if (!(VAR_3->tif_flags&VAR_1))
 {
  if (VAR_3->tif_header.classic.tiff_diroff == VAR_3->tif_diroff)
  {
   VAR_3->tif_header.classic.tiff_diroff = 0;
   VAR_3->tif_diroff = 0;

   FUNC_3(VAR_3,4,VAR_0);
   if (!FUNC_8(VAR_3, &(VAR_3->tif_header.classic.tiff_diroff),4))
   {
    FUNC_2(VAR_3->tif_clientdata, VAR_3->tif_name,
        "Error updating TIFF header");
    return (0);
   }
  }
  else
  {
   uint32 VAR_5;
   VAR_5 = VAR_3->tif_header.classic.tiff_diroff;
   while(1) {
    uint16 VAR_6;
    uint32 VAR_7;

    if (!FUNC_1(VAR_3, VAR_5) ||
        !FUNC_0(VAR_3, &VAR_6, 2)) {
     FUNC_2(VAR_3->tif_clientdata, VAR_4,
          "Error fetching directory count");
     return (0);
    }
    if (VAR_3->tif_flags & VAR_2)
     FUNC_6(&VAR_6);
    (void) FUNC_3(VAR_3,
        VAR_5+2+VAR_6*12, VAR_0);
    if (!FUNC_0(VAR_3, &VAR_7, 4)) {
     FUNC_2(VAR_3->tif_clientdata, VAR_4,
          "Error fetching directory link");
     return (0);
    }
    if (VAR_3->tif_flags & VAR_2)
     FUNC_4(&VAR_7);
    if (VAR_7==VAR_3->tif_diroff)
    {
     uint32 VAR_8;
     VAR_8=0;
     (void) FUNC_3(VAR_3,
         VAR_5+2+VAR_6*12, VAR_0);
     if (!FUNC_8(VAR_3, &VAR_8, 4)) {
      FUNC_2(VAR_3->tif_clientdata, VAR_4,
           "Error writing directory link");
      return (0);
     }
     VAR_3->tif_diroff=0;
     break;
    }
    VAR_5=VAR_7;
   }
  }
 }
 else
 {
  if (VAR_3->tif_header.big.tiff_diroff == VAR_3->tif_diroff)
  {
   VAR_3->tif_header.big.tiff_diroff = 0;
   VAR_3->tif_diroff = 0;

   FUNC_3(VAR_3,8,VAR_0);
   if (!FUNC_8(VAR_3, &(VAR_3->tif_header.big.tiff_diroff),8))
   {
    FUNC_2(VAR_3->tif_clientdata, VAR_3->tif_name,
        "Error updating TIFF header");
    return (0);
   }
  }
  else
  {
   uint64 VAR_9;
   VAR_9 = VAR_3->tif_header.big.tiff_diroff;
   while(1) {
    uint64 VAR_10;
    uint16 VAR_11;
    uint64 VAR_12;

    if (!FUNC_1(VAR_3, VAR_9) ||
        !FUNC_0(VAR_3, &VAR_10, 8)) {
     FUNC_2(VAR_3->tif_clientdata, VAR_4,
          "Error fetching directory count");
     return (0);
    }
    if (VAR_3->tif_flags & VAR_2)
     FUNC_5(&VAR_10);
    if (VAR_10>0xFFFF)
    {
     FUNC_2(VAR_3->tif_clientdata, VAR_4,
          "Sanity check on tag count failed, likely corrupt TIFF");
     return (0);
    }
    VAR_11=(uint16)VAR_10;
    (void) FUNC_3(VAR_3,
        VAR_9+8+VAR_11*20, VAR_0);
    if (!FUNC_0(VAR_3, &VAR_12, 8)) {
     FUNC_2(VAR_3->tif_clientdata, VAR_4,
          "Error fetching directory link");
     return (0);
    }
    if (VAR_3->tif_flags & VAR_2)
     FUNC_5(&VAR_12);
    if (VAR_12==VAR_3->tif_diroff)
    {
     uint64 VAR_13;
     VAR_13=0;
     (void) FUNC_3(VAR_3,
         VAR_9+8+VAR_11*20, VAR_0);
     if (!FUNC_8(VAR_3, &VAR_13, 8)) {
      FUNC_2(VAR_3->tif_clientdata, VAR_4,
           "Error writing directory link");
      return (0);
     }
     VAR_3->tif_diroff=0;
     break;
    }
    VAR_9=VAR_12;
   }
  }
 }





 return FUNC_7( VAR_3 );
}
