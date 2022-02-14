
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int tif_clientdata; } ;
typedef int TIFFField ;
typedef TYPE_1__ TIFF ;


 int FUNC_0 (int ,char*,char*,char const*) ;
 int VAR_0 ;
 int * FUNC_1 (TYPE_1__*,char const*,int ) ;

const TIFFField*
FUNC_2(TIFF* VAR_1, const char *VAR_2)
{
 const TIFFField* VAR_3 =
  FUNC_1(VAR_1, VAR_2, VAR_0);
 if (!VAR_3) {
  FUNC_0(VAR_1->tif_clientdata, "TIFFFieldWithName",
        "Internal error, unknown tag %s", VAR_2);
 }
 return (VAR_3);
}
