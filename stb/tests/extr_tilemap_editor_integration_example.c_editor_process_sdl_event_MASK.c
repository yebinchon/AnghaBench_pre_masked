
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int mod; int scancode; int sym; } ;
struct TYPE_7__ {TYPE_1__ keysym; } ;
struct TYPE_8__ {int type; TYPE_2__ key; } ;
typedef TYPE_3__ SDL_Event ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
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
 int FUNC_0 (int ) ;
 float VAR_18 ;
 int VAR_19 ;
 int FUNC_1 (int ,TYPE_3__*,float,float,int ,int ) ;

void FUNC_2(SDL_Event *VAR_20)
{
   switch (VAR_20->type) {
      case 141:
      case 143:
      case 142:
      case 140:
         FUNC_1(VAR_17, VAR_20, 1.0f/VAR_18,1.0f/VAR_18,0,0);
         break;

      case 144:
         if (VAR_19) {
            switch (VAR_20->key.keysym.sym) {
               case 146: FUNC_0(VAR_9); break;
               case 147 : FUNC_0(VAR_8 ); break;
               case 145 : FUNC_0(VAR_10 ); break;
               case 148 : FUNC_0(VAR_7 ); break;
            }
            switch (VAR_20->key.keysym.scancode) {
               case 132: FUNC_0(VAR_16); break;
               case 139: FUNC_0(VAR_11 ); break;
               case 137: FUNC_0(VAR_12 ); break;
               case 133: FUNC_0(VAR_15 ); break;
               case 135: FUNC_0(VAR_13); break;
               case 134: FUNC_0(VAR_14); break;
               case 136: FUNC_0(VAR_5); break;
            }
            if ((VAR_20->key.keysym.mod & VAR_0) && !(VAR_20->key.keysym.mod & ~VAR_0)) {
               switch (VAR_20->key.keysym.scancode) {
                  case 130: FUNC_0(VAR_2 ); break;
                  case 138: FUNC_0(VAR_1 ); break;
                  case 131: FUNC_0(VAR_3); break;
                  case 128: FUNC_0(VAR_6 ); break;
                  case 129: FUNC_0(VAR_4 ); break;
               }
            }
         }
         break;
   }
}
