
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64 ;
typedef int uint32 ;
typedef scalar_t__ tmsize_t ;
struct TYPE_4__ {int tif_clientdata; } ;
typedef TYPE_1__ TIFF ;


 int FUNC_0 (int ,char const*,char*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ) ;

tmsize_t
FUNC_2(TIFF* VAR_0, uint32 VAR_1)
{
 static const char VAR_2[] = "TIFFVTileSize";
 uint64 VAR_3;
 tmsize_t VAR_4;
 VAR_3=FUNC_1(VAR_0,VAR_1);
 VAR_4=(tmsize_t)VAR_3;
 if ((uint64)VAR_4!=VAR_3)
 {
  FUNC_0(VAR_0->tif_clientdata,VAR_2,"Integer overflow");
  VAR_4=0;
 }
 return(VAR_4);
}
