
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32 ;
typedef scalar_t__ uint16 ;
struct TYPE_4__ {scalar_t__ td_samplesperpixel; } ;
struct TYPE_5__ {int tif_name; int tif_clientdata; TYPE_1__ tif_dir; } ;
typedef TYPE_1__ TIFFDirectory ;
typedef TYPE_2__ TIFF ;


 int FUNC_0 (int ,char*,char*,int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static uint32
FUNC_1(TIFF* VAR_0, uint32 VAR_1, const char* VAR_2)
{
 TIFFDirectory* VAR_3 = &VAR_0->tif_dir;
 uint16 VAR_4 = VAR_3->td_samplesperpixel;

 if (VAR_1 > 0) {
  const char* VAR_5 = VAR_2+VAR_1;
  const char* VAR_6 = VAR_2;
  for (; VAR_4 > 0; VAR_4--) {
   for (; VAR_6 < VAR_5 && *VAR_6 != '\0'; VAR_6++) {}
   if (VAR_6 >= VAR_5)
    goto bad;
   VAR_6++;
  }
  return ((uint32)(VAR_6-VAR_2));
 }
bad:
 FUNC_0(VAR_0->tif_clientdata, "TIFFSetField",
     "%s: Invalid InkNames value; expecting %d names, found %d",
     VAR_0->tif_name,
     VAR_3->td_samplesperpixel,
     VAR_3->td_samplesperpixel-VAR_4);
 return (0);
}
