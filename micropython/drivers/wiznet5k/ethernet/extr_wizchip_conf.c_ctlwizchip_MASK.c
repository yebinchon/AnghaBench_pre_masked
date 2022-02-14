
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wiz_PhyConf ;
typedef int uint8_t ;
typedef int uint16_t ;
typedef int intr_kind ;
typedef int int8_t ;
typedef int ctlwizchip_type ;
struct TYPE_2__ {int * id; } ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 (int *) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ) ;

int8_t FUNC_14(ctlwizchip_type VAR_2, void* VAR_3)
{
   uint8_t VAR_4 = 0;
   uint8_t* VAR_5[2] = {0,0};
   switch(VAR_2)
   {
      case 132:
         FUNC_7();
         break;
      case 134:
         if(VAR_3 != 0)
         {
            VAR_5[0] = (uint8_t*)VAR_3;
            VAR_5[1] = VAR_5[0] + VAR_1;
         }
         return FUNC_5(VAR_5[0], VAR_5[1]);
      case 143:
         FUNC_2(*((intr_kind*)VAR_3));
         break;
      case 141:
        *((intr_kind*)VAR_3) = FUNC_3();
         break;
      case 131:
         FUNC_6(*((intr_kind*)VAR_3));
         break;
      case 140:
         *((intr_kind*)VAR_3) = FUNC_4();
         break;
      case 142:
         ((uint8_t*)VAR_3)[0] = VAR_0.id[0];
         ((uint8_t*)VAR_3)[1] = VAR_0.id[1];
         ((uint8_t*)VAR_3)[2] = VAR_0.id[2];
         ((uint8_t*)VAR_3)[3] = VAR_0.id[3];
         ((uint8_t*)VAR_3)[4] = VAR_0.id[4];
         ((uint8_t*)VAR_3)[5] = 0;
         break;
      case 136:
         VAR_4 = FUNC_10();
         if((int8_t)VAR_4 == -1) return -1;
         *(uint8_t*)VAR_3 = VAR_4;
         break;
      case 137:
         VAR_4 = FUNC_9();
         if((int8_t)VAR_4 == -1) return -1;
         *(uint8_t*)VAR_3 = VAR_4;
         break;
      default:
         return -1;
   }
   return 0;
}
