
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,char**,char*) ;
 size_t VAR_0 ;
 int FUNC_2 () ;

int FUNC_3(int VAR_1, char **VAR_2) {
 int VAR_3;
 int VAR_4 = 0;
 int VAR_5 = 0;
 int VAR_6 = 0;


 while ((VAR_3=FUNC_1 (VAR_1, VAR_2, "o:hrsj:iV")) !=-1) {
  switch (VAR_3) {
  case 'o':

   break;
  case 's':
   VAR_4 = VAR_3;

   break;
  case 'r':
   VAR_5 = 1;
   break;
  case 'j':
   VAR_6 = 1;
   break;
  case 'V':
   return FUNC_0 ("rasign2");
  default:
   return FUNC_2 ();
  }
 }

 if (VAR_2[VAR_0]==((void*)0))
  return FUNC_2 ();



 switch (VAR_4) {
 case 's':


  break;
 default:


  break;
 }



 return 0;
}
