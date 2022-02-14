
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;


 int VAR_0 ;



 char** VAR_1 ;
 int FUNC_0 (char*,char*) ;

void FUNC_1(char *VAR_2, ut8 VAR_3){
 FUNC_0 (VAR_2,"\ncard\t");
 switch (VAR_3){
  case 128:
  case 129:
  case 130:
   FUNC_0 (VAR_2,VAR_1[VAR_3-240]);
   break;
  case 0x15:
  case 0x16:
  case 0x17:
   FUNC_0 (VAR_2,"XXX");
   break;
  default:
   if (VAR_3>VAR_0) {
    FUNC_0 (VAR_2,"XXX");
    return;
   }
   FUNC_0 (VAR_2,VAR_1[VAR_3]);
   break;
 }
}
