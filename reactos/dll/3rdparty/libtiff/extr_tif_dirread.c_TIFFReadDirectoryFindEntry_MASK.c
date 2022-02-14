
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint16 ;
struct TYPE_4__ {scalar_t__ tdir_tag; } ;
typedef TYPE_1__ TIFFDirEntry ;
typedef int TIFF ;



__attribute__((used)) static TIFFDirEntry*
FUNC_0(TIFF* VAR_0, TIFFDirEntry* VAR_1, uint16 VAR_2, uint16 VAR_3)
{
 TIFFDirEntry* VAR_4;
 uint16 VAR_5;
 (void) VAR_0;
 for (VAR_4=VAR_1, VAR_5=0; VAR_5<VAR_2; VAR_4++, VAR_5++)
 {
  if (VAR_4->tdir_tag==VAR_3)
   return(VAR_4);
 }
 return(0);
}
