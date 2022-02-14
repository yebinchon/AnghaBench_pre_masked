
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16 ;
typedef int int16 ;
struct TYPE_6__ {int tif_flags; } ;
struct TYPE_5__ {int tdir_offset; } ;
typedef TYPE_1__ TIFFDirEntry ;
typedef TYPE_2__ TIFF ;


 int FUNC_0 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(TIFF* VAR_1, TIFFDirEntry* VAR_2, int16* VAR_3)
{
 *VAR_3=*(int16*)(&VAR_2->tdir_offset);
 if (VAR_1->tif_flags&VAR_0)
  FUNC_0((uint16*)VAR_3);
}
