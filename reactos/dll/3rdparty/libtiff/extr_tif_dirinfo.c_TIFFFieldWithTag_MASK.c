
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32 ;
struct TYPE_4__ {int tif_clientdata; } ;
typedef int TIFFField ;
typedef TYPE_1__ TIFF ;


 int FUNC_0 (int ,char*,char*,unsigned int) ;
 int * FUNC_1 (TYPE_1__*,scalar_t__,int ) ;
 int VAR_0 ;

const TIFFField*
FUNC_2(TIFF* VAR_1, uint32 VAR_2)
{
 const TIFFField* VAR_3 = FUNC_1(VAR_1, VAR_2, VAR_0);
 if (!VAR_3) {
  FUNC_0(VAR_1->tif_clientdata, "TIFFFieldWithTag",
        "Internal error, unknown tag 0x%x",
        (unsigned int) VAR_2);
 }
 return (VAR_3);
}
