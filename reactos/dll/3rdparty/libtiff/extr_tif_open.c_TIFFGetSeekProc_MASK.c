
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tif_seekproc; } ;
typedef int TIFFSeekProc ;
typedef TYPE_1__ TIFF ;



TIFFSeekProc
FUNC_0(TIFF* VAR_0)
{
 return (VAR_0->tif_seekproc);
}
