
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int xcb_generic_event_t ;
typedef int xcb_connection_t ;
struct TYPE_9__ {TYPE_2__* cur_swap; TYPE_1__* plat; } ;
typedef TYPE_4__ gs_device_t ;
typedef enum swap_type { ____Placeholder_swap_type } swap_type ;
typedef int XID ;
struct TYPE_8__ {int window; } ;
struct TYPE_7__ {TYPE_3__* wi; } ;
struct TYPE_6__ {int * display; } ;
typedef int Display ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;




 int * FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int * FUNC_6 (int *) ;

extern void FUNC_7(gs_device_t *VAR_3)
{
 static bool VAR_4 = 0;
 static enum swap_type VAR_5 = 129;

 Display *VAR_6 = VAR_3->plat->display;
 XID VAR_7 = VAR_3->cur_swap->wi->window;

 if (!VAR_4) {
  if (VAR_0)
   VAR_5 = 131;
  else if (VAR_1)
   VAR_5 = 130;
  else if (VAR_2)
   VAR_5 = 128;

  VAR_4 = 1;
 }

 xcb_connection_t *VAR_8 = FUNC_0(VAR_6);
 xcb_generic_event_t *VAR_9;
 while ((VAR_9 = FUNC_6(VAR_8))) {

  FUNC_1(VAR_9);
 }

 switch (VAR_5) {
 case 131:
  FUNC_3(VAR_6, VAR_7, 0);
  break;
 case 130:
  FUNC_4(0);
  break;
 case 128:
  FUNC_5(0);
  break;
 case 129:;
 }

 FUNC_2(VAR_6, VAR_7);
}
