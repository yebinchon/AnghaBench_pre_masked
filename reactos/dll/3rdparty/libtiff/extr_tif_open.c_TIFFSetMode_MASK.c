
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tif_mode; } ;
typedef TYPE_1__ TIFF ;



int
FUNC_0(TIFF* VAR_0, int VAR_1)
{
 int VAR_2 = VAR_0->tif_mode;
 VAR_0->tif_mode = VAR_1;
 return (VAR_2);
}
