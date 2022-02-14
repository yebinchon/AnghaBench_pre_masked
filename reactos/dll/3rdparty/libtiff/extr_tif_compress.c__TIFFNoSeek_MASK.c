
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_3__ {int tif_name; int tif_clientdata; } ;
typedef TYPE_1__ TIFF ;


 int FUNC_0 (int ,int ,char*) ;

int
FUNC_1(TIFF* VAR_0, uint32 VAR_1)
{
 (void) VAR_1;
 FUNC_0(VAR_0->tif_clientdata, VAR_0->tif_name,
       "Compression algorithm does not support random access");
 return (0);
}
