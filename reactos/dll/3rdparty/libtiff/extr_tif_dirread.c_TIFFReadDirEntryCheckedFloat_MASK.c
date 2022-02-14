
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32 ;
typedef int float_union ;
struct TYPE_6__ {int tif_flags; } ;
struct TYPE_5__ {int tdir_offset; } ;
typedef TYPE_1__ TIFFDirEntry ;
typedef TYPE_2__ TIFF ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(TIFF* VAR_1, TIFFDirEntry* VAR_2, float* VAR_3)
{
         union
  {
    float f;
    uint32 i;
  } VAR_4;
 FUNC_1(sizeof(float)==4);
 FUNC_1(sizeof(uint32)==4);
 FUNC_1(sizeof(VAR_4)==4);
 VAR_4.i=*(uint32*)(&VAR_2->tdir_offset);
 *VAR_3=VAR_4.f;
 if (VAR_1->tif_flags&VAR_0)
  FUNC_0((uint32*)VAR_3);
}
