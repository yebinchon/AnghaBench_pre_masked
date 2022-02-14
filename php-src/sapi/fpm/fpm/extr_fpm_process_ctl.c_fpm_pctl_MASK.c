
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_2 (int ,char*,int ,...) ;

void FUNC_3(int VAR_4, int VAR_5)
{
 switch (VAR_5) {
  case 133 :
   if (VAR_2 == VAR_4) {
    return;
   }

   switch (VAR_2) {
    case 130 :

     break;
    case 129 :

     if (VAR_4 == 131) break;
    case 131 :

     if (VAR_4 == 128) break;
    case 128 :

     FUNC_2(VAR_0, "not switching to '%s' state, because already in '%s' state",
      VAR_3[VAR_4], VAR_3[VAR_2]);
     return;
   }

   VAR_1 = 0;
   VAR_2 = VAR_4;

   FUNC_2(VAR_0, "switching to '%s' state", VAR_3[VAR_2]);


  case 132 :
   FUNC_1();
   break;
  case 134 :
   FUNC_0();
   break;

 }
}
