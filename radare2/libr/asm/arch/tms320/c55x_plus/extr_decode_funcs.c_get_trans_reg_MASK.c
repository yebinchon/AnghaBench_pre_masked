
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut32 ;


 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;
 char* FUNC_1 (char*) ;

char *FUNC_2(ut32 VAR_1) {
 char *VAR_2 = ((void*)0);

 switch (VAR_1) {
 case 6:
  VAR_2 = "trn0";
  break;
 case 7:
  VAR_2 = "trn1";
  break;
 case 4:
  VAR_2 = "trn2";
  break;
 case 5:
  VAR_2 = "trn3";
  break;
 case 2:
  VAR_2 = "trn4";
  break;
 case 3:
  VAR_2 = "trn5";
  break;
 case 0:
  VAR_2 = "trn6";
  break;
 case 1:
  VAR_2 = "trn7";
  break;

 default:
  FUNC_0 (VAR_0, "Invalid transaction instruction 0x%x\n", VAR_1);
 }
 return VAR_2? FUNC_1 (VAR_2): ((void*)0);
}
