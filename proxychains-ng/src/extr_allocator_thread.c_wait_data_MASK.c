
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fd_set ;


 int VAR_0 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int,char*,char*) ;
 int VAR_1 ;
 int FUNC_4 (int,int *,int *,int *,int *) ;
 char* FUNC_5 (int,char*,int) ;

__attribute__((used)) static int FUNC_6(int VAR_2) {
 FUNC_2();
 fd_set VAR_3;
 FUNC_1(&VAR_3);
 FUNC_0(VAR_2, &VAR_3);
 int VAR_4;
 while((VAR_4 = FUNC_4(VAR_2+1, &VAR_3, ((void*)0), ((void*)0), ((void*)0))) <= 0) {
  if(VAR_4 < 0) {
   int VAR_5 = VAR_1;
   if(VAR_5 == VAR_0) continue;





   return 0;
  }
 }
 return 1;
}
