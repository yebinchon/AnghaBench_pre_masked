
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* tif_name; } ;
typedef TYPE_1__ TIFF ;



const char *
FUNC_0(TIFF* VAR_0, const char *VAR_1)
{
 const char* VAR_2 = VAR_0->tif_name;
 VAR_0->tif_name = (char *)VAR_1;
 return (VAR_2);
}
