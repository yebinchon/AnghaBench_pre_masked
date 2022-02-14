
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_9__ {int blue; int green; int red; } ;
struct TYPE_8__ {int server_depth; } ;
typedef TYPE_1__ RDPCLIENT ;
typedef TYPE_2__ PixelColour ;


 int FUNC_0 (TYPE_2__) ;
 int FUNC_1 (int ,TYPE_2__) ;
 int FUNC_2 (int ,TYPE_2__) ;
 int FUNC_3 (int ,TYPE_2__) ;

__attribute__((used)) static uint32
FUNC_4(RDPCLIENT * VAR_0, uint32 VAR_1)
{
 PixelColour VAR_2;
 switch (VAR_0->server_depth)
 {
  case 15:
   FUNC_1(VAR_1, VAR_2);
   break;
  case 16:
   FUNC_2(VAR_1, VAR_2);
   break;
  case 24:
   FUNC_3(VAR_1, VAR_2);
   break;
  default:

   VAR_2.red = 0;
   VAR_2.green = 0;
   VAR_2.blue = 0;
   break;
 }
 return FUNC_0(VAR_2);
}
