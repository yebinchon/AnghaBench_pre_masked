
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ tif_mode; int tif_name; int tif_clientdata; } ;
typedef TYPE_1__ TIFF ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_2(TIFF* VAR_1, int VAR_2)
{
 if (VAR_1->tif_mode == VAR_0) {
  FUNC_0(VAR_1->tif_clientdata, VAR_1->tif_name, "File not open for reading");
  return (0);
 }
 if (VAR_2 ^ FUNC_1(VAR_1)) {
  FUNC_0(VAR_1->tif_clientdata, VAR_1->tif_name, VAR_2 ?
      "Can not read tiles from a stripped image" :
      "Can not read scanlines from a tiled image");
  return (0);
 }
 return (1);
}
