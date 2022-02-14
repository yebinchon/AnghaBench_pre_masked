
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int thandle_t ;
struct TYPE_3__ {int tif_clientdata; } ;
typedef TYPE_1__ TIFF ;



thandle_t
FUNC_0(TIFF* VAR_0, thandle_t VAR_1)
{
 thandle_t VAR_2 = VAR_0->tif_clientdata;
 VAR_0->tif_clientdata = VAR_1;
 return VAR_2;
}
