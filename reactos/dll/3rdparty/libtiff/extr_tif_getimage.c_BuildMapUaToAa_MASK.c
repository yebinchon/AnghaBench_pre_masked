
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8 ;
typedef int uint16 ;
struct TYPE_5__ {scalar_t__* UaToAa; TYPE_1__* tif; } ;
struct TYPE_4__ {int tif_clientdata; } ;
typedef TYPE_2__ TIFFRGBAImage ;


 int FUNC_0 (int ,char const*,char*) ;
 scalar_t__* FUNC_1 (int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(TIFFRGBAImage* VAR_0)
{
 static const char VAR_1[]="BuildMapUaToAa";
 uint8* VAR_2;
 uint16 VAR_3,VAR_4;
 FUNC_2(VAR_0->UaToAa==((void*)0));
 VAR_0->UaToAa=FUNC_1(65536);
 if (VAR_0->UaToAa==((void*)0))
 {
  FUNC_0(VAR_0->tif->tif_clientdata,VAR_1,"Out of memory");
  return(0);
 }
 VAR_2=VAR_0->UaToAa;
 for (VAR_3=0; VAR_3<256; VAR_3++)
 {
  for (VAR_4=0; VAR_4<256; VAR_4++)
   *VAR_2++=(uint8)((VAR_4*VAR_3+127)/255);
 }
 return(1);
}
