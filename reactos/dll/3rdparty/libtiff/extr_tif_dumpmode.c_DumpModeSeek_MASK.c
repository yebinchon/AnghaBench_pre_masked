
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_3__ {int tif_rawcp; int tif_scanlinesize; int tif_rawcc; } ;
typedef TYPE_1__ TIFF ;



__attribute__((used)) static int
FUNC_0(TIFF* VAR_0, uint32 VAR_1)
{
 VAR_0->tif_rawcp += VAR_1 * VAR_0->tif_scanlinesize;
 VAR_0->tif_rawcc -= VAR_1 * VAR_0->tif_scanlinesize;
 return (1);
}
