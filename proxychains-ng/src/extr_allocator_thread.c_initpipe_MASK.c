
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (int*,int ) ;

__attribute__((used)) static void FUNC_5(int* VAR_3) {
 int VAR_4;




 VAR_4 = FUNC_3(VAR_3);
 if(VAR_4 == 0) {
  FUNC_1(VAR_3[0], VAR_1, VAR_0);
  FUNC_1(VAR_3[1], VAR_1, VAR_0);
 }

 if(VAR_4 == -1) {
  FUNC_2("pipe");
  FUNC_0(1);
 }
}
