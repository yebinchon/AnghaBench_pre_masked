
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64 ;
typedef scalar_t__ tmsize_t ;
struct TYPE_4__ {int tif_clientdata; } ;
typedef TYPE_1__ TIFF ;


 int FUNC_0 (int ,char const*,char*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;

tmsize_t
FUNC_2(TIFF* VAR_0)
{
 static const char VAR_1[] = "TIFFScanlineSize";
 uint64 VAR_2;
 tmsize_t VAR_3;
 VAR_2=FUNC_1(VAR_0);
 VAR_3=(tmsize_t)VAR_2;
 if ((uint64)VAR_3!=VAR_2) {
  FUNC_0(VAR_0->tif_clientdata,VAR_1,"Integer arithmetic overflow");
  VAR_3=0;
 }
 return(VAR_3);
}
