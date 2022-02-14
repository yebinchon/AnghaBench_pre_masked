
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wiz_NetTimeout ;
typedef int wiz_NetInfo ;
typedef int netmode_type ;
typedef int int8_t ;
typedef int ctlnetwork_type ;
 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;

int8_t FUNC_6(ctlnetwork_type VAR_0, void* VAR_1)
{

   switch(VAR_0)
   {
      case 130:
         FUNC_3((wiz_NetInfo*)VAR_1);
         break;
      case 133:
         FUNC_0((wiz_NetInfo*)VAR_1);
         break;
      case 129:
         return FUNC_4(*(netmode_type*)VAR_1);
      case 132:
         *(netmode_type*)VAR_1 = FUNC_1();
         break;
      case 128:
         FUNC_5((wiz_NetTimeout*)VAR_1);
         break;
      case 131:
         FUNC_2((wiz_NetTimeout*)VAR_1);
         break;
      default:
         return -1;
   }
   return 0;
}
