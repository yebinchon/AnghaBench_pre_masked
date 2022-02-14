
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int uint8 ;
typedef int uint16 ;
struct TYPE_17__ {int depth; int bpp; scalar_t__ no_translate_image; } ;
struct TYPE_18__ {int server_depth; TYPE_1__ xwin; } ;
typedef TYPE_2__ RDPCLIENT ;


 int FUNC_0 (TYPE_2__*,int *,int *,int *) ;
 int FUNC_1 (TYPE_2__*,int *,int *,int *) ;
 int FUNC_2 (TYPE_2__*,int *,int *,int *) ;
 int FUNC_3 (TYPE_2__*,int *,int *,int *) ;
 int FUNC_4 (TYPE_2__*,int *,int *,int *) ;
 int FUNC_5 (TYPE_2__*,int *,int *,int *) ;
 int FUNC_6 (TYPE_2__*,int *,int *,int *) ;
 int FUNC_7 (TYPE_2__*,int *,int *,int *) ;
 int FUNC_8 (TYPE_2__*,int *,int *,int *) ;
 int FUNC_9 (TYPE_2__*,int *,int *,int *) ;
 int FUNC_10 (TYPE_2__*,int *,int *,int *) ;
 int FUNC_11 (TYPE_2__*,int *,int *,int *) ;
 int FUNC_12 (TYPE_2__*,int *,int *,int *) ;
 scalar_t__ FUNC_13 (int) ;

__attribute__((used)) static uint8 *
FUNC_14(RDPCLIENT * VAR_0, int VAR_1, int VAR_2, uint8 * VAR_3)
{
 int VAR_4;
 uint8 *VAR_5;
 uint8 *VAR_6;
 if (VAR_0->xwin.no_translate_image)
 {
  if ((VAR_0->xwin.depth == 15 && VAR_0->server_depth == 15) ||
      (VAR_0->xwin.depth == 16 && VAR_0->server_depth == 16) ||
      (VAR_0->xwin.depth == 24 && VAR_0->server_depth == 24))
   return VAR_3;
 }

 VAR_4 = VAR_1 * VAR_2 * (VAR_0->xwin.bpp / 8);
 VAR_5 = (uint8 *) FUNC_13(VAR_4);
 VAR_6 = VAR_5 + VAR_4;

 switch (VAR_0->server_depth)
 {
  case 24:
   switch (VAR_0->xwin.bpp)
   {
    case 32:
     FUNC_8(VAR_0, VAR_3, VAR_5, VAR_6);
     break;
    case 24:
     FUNC_7(VAR_0, VAR_3, VAR_5, VAR_6);
     break;
    case 16:
     FUNC_6(VAR_0, VAR_3, VAR_5, VAR_6);
     break;
   }
   break;
  case 16:
   switch (VAR_0->xwin.bpp)
   {
    case 32:
     FUNC_5(VAR_0, (uint16 *) VAR_3, VAR_5, VAR_6);
     break;
    case 24:
     FUNC_4(VAR_0, (uint16 *) VAR_3, VAR_5, VAR_6);
     break;
    case 16:
     FUNC_3(VAR_0, (uint16 *) VAR_3, VAR_5, VAR_6);
     break;
   }
   break;
  case 15:
   switch (VAR_0->xwin.bpp)
   {
    case 32:
     FUNC_2(VAR_0, (uint16 *) VAR_3, VAR_5, VAR_6);
     break;
    case 24:
     FUNC_1(VAR_0, (uint16 *) VAR_3, VAR_5, VAR_6);
     break;
    case 16:
     FUNC_0(VAR_0, (uint16 *) VAR_3, VAR_5, VAR_6);
     break;
   }
   break;
  case 8:
   switch (VAR_0->xwin.bpp)
   {
    case 8:
     FUNC_12(VAR_0, VAR_3, VAR_5, VAR_6);
     break;
    case 16:
     FUNC_9(VAR_0, VAR_3, VAR_5, VAR_6);
     break;
    case 24:
     FUNC_10(VAR_0, VAR_3, VAR_5, VAR_6);
     break;
    case 32:
     FUNC_11(VAR_0, VAR_3, VAR_5, VAR_6);
     break;
   }
   break;
 }
 return VAR_5;
}
