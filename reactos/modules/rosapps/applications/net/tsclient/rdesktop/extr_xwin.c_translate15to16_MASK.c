
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8 ;
typedef int uint16 ;
struct TYPE_4__ {scalar_t__ host_be; scalar_t__ xserver_be; } ;
struct TYPE_5__ {TYPE_1__ xwin; } ;
typedef TYPE_2__ RDPCLIENT ;
typedef int PixelColour ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void
FUNC_5(RDPCLIENT * VAR_0, const uint16 * VAR_1, uint8 * VAR_2, uint8 * VAR_3)
{
 uint16 VAR_4;
 uint16 VAR_5;
 PixelColour VAR_6;

 if (VAR_0->xwin.xserver_be)
 {
  while (VAR_2 < VAR_3)
  {
   VAR_4 = *(VAR_1++);
   if (VAR_0->xwin.host_be)
   {
    FUNC_1(VAR_4);
   }
   FUNC_4(VAR_4, VAR_6);
   VAR_5 = FUNC_3(VAR_6);
   FUNC_0(VAR_2, VAR_5);
  }
 }
 else
 {
  while (VAR_2 < VAR_3)
  {
   VAR_4 = *(VAR_1++);
   if (VAR_0->xwin.host_be)
   {
    FUNC_1(VAR_4);
   }
   FUNC_4(VAR_4, VAR_6);
   VAR_5 = FUNC_3(VAR_6);
   FUNC_2(VAR_2, VAR_5);
  }
 }
}
