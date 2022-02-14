
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int member_0; int member_1; int member_2; int red; int green; int blue; } ;
struct TYPE_5__ {scalar_t__ blue; scalar_t__ green; scalar_t__ red; } ;
typedef TYPE_1__* PCBUSYLIGHT_COLOR ;
typedef int DWORD ;
typedef int BYTE ;
typedef TYPE_2__ BUSYLIGHT_COLOR ;



BUSYLIGHT_COLOR FUNC_0(PCBUSYLIGHT_COLOR VAR_0, BYTE VAR_1)
{
 BUSYLIGHT_COLOR VAR_2 = {
  (BYTE) (((DWORD) VAR_0->red * VAR_1) / 100),
  (BYTE) (((DWORD) VAR_0->green * VAR_1) / 100),
  (BYTE) (((DWORD) VAR_0->blue * VAR_1) / 100)
 };
 if(!VAR_2.red && VAR_1 && VAR_0->red)
  VAR_2.red = 1;
 if(!VAR_2.green && VAR_1 && VAR_0->green)
  VAR_2.green = 1;
 if(!VAR_2.blue && VAR_1 && VAR_0->blue)
  VAR_2.blue = 1;
 return VAR_2;
}
