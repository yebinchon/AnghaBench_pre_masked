
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_3__ {int tif_clientdata; } ;
typedef TYPE_1__ TIFF ;


 int FUNC_0 (int ,char const*,char*,char const*) ;

uint32
FUNC_1(TIFF* VAR_0, uint32 VAR_1, uint32 VAR_2, const char* VAR_3)
{
 uint32 VAR_4 = VAR_1 * VAR_2;

 if (VAR_2 && VAR_4 / VAR_2 != VAR_1) {
  FUNC_0(VAR_0->tif_clientdata, VAR_3, "Integer overflow in %s", VAR_3);
  VAR_4 = 0;
 }

 return VAR_4;
}
