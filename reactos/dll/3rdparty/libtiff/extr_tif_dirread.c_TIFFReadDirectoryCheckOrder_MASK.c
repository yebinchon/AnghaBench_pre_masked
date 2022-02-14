
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint16 ;
struct TYPE_6__ {int tif_clientdata; } ;
struct TYPE_5__ {scalar_t__ tdir_tag; } ;
typedef TYPE_1__ TIFFDirEntry ;
typedef TYPE_2__ TIFF ;


 int FUNC_0 (int ,char const*,char*) ;

__attribute__((used)) static void
FUNC_1(TIFF* VAR_0, TIFFDirEntry* VAR_1, uint16 VAR_2)
{
 static const char VAR_3[] = "TIFFReadDirectoryCheckOrder";
 uint16 VAR_4;
 uint16 VAR_5;
 TIFFDirEntry* VAR_6;
 VAR_4=0;
 for (VAR_5=0, VAR_6=VAR_1; VAR_5<VAR_2; VAR_5++, VAR_6++)
 {
  if (VAR_6->tdir_tag<VAR_4)
  {
   FUNC_0(VAR_0->tif_clientdata,VAR_3,
       "Invalid TIFF directory; tags are not sorted in ascending order");
   break;
  }
  VAR_4=VAR_6->tdir_tag+1;
 }
}
