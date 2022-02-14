
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tif_clientdata; } ;
typedef TYPE_1__ TIFF ;


 int FUNC_0 (int ,char const*,char*,char const*) ;

__attribute__((used)) static void
FUNC_1(TIFF* VAR_0, const char* VAR_1)
{
 static const char VAR_2[] = "MissingRequired";

 FUNC_0(VAR_0->tif_clientdata, VAR_2,
     "TIFF directory is missing required \"%s\" field",
     VAR_1);
}
