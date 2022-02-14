
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int sym; int scancode; int mod; } ;
struct TYPE_9__ {TYPE_2__ keysym; } ;
struct TYPE_7__ {int data2; int data1; int event; } ;
struct TYPE_10__ {int type; TYPE_3__ key; TYPE_1__ window; } ;
typedef int SDL_Keymod ;
typedef TYPE_4__ SDL_Event ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;


 int VAR_3 ;

 int FUNC_0 () ;






 int VAR_4 ;


 int VAR_5 ;




 int VAR_6 ;



 int VAR_7 ;





 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_4 (int ,int,int ) ;
 int FUNC_5 (TYPE_4__*) ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;

void FUNC_6(SDL_Event *VAR_29)
{
   switch (VAR_29->type) {
      case 143:
         FUNC_5(VAR_29);
         break;
      case 145:
      case 144:
         break;

      case 142:
         VAR_26 = 1;
         break;

      case 129:
         switch (VAR_29->window.event) {
            case 128:
               VAR_27 = VAR_29->window.data1;
               VAR_28 = VAR_29->window.data2;
               FUNC_4(0,1,0);
               break;
         }
         break;

      case 147: {
         int VAR_30 = VAR_29->key.keysym.sym;
         int VAR_31 = VAR_29->key.keysym.scancode;
         SDL_Keymod VAR_32;
         VAR_32 = FUNC_0();
         if (VAR_30 == VAR_2)
            VAR_26 = 1;

         if (VAR_31 == VAR_5) FUNC_2(0);
         if (VAR_31 == VAR_4) FUNC_2(1);
         if (VAR_31 == VAR_7) FUNC_2(2);
         if (VAR_31 == 134) FUNC_2(3);
         if (VAR_30 == VAR_3) FUNC_2(4);
         if (VAR_31 == VAR_6) FUNC_2(5);
         if (VAR_31 == 134) FUNC_2(6);
         if (VAR_31 == VAR_5) FUNC_2(7);
         if (VAR_30 == '1') VAR_25 = !VAR_25;
         if (VAR_30 == '2') VAR_25 = -1;
         break;
      }
      case 146: {
         int VAR_33 = VAR_29->key.keysym.sym;
         int VAR_34 = VAR_29->key.keysym.scancode;
         if (VAR_34 == VAR_5) FUNC_1(0);
         if (VAR_34 == VAR_4) FUNC_1(1);
         if (VAR_34 == VAR_7) FUNC_1(2);
         if (VAR_34 == 134) FUNC_1(3);
         if (VAR_33 == VAR_3) FUNC_1(4);
         if (VAR_34 == VAR_6) FUNC_1(5);
         if (VAR_34 == 134) FUNC_1(6);
         if (VAR_34 == VAR_5) FUNC_1(7);
         break;
      }
   }
}
