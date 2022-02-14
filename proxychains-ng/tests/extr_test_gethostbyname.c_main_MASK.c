
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostent {int dummy; } ;


 struct hostent* FUNC_0 (char*) ;
 int FUNC_1 (struct hostent*) ;

int FUNC_2(int VAR_0, char**VAR_1) {
 struct hostent* VAR_2;
 if(VAR_0 == 1) return 1;
 VAR_2 = FUNC_0(VAR_1[1]);
 if(VAR_2) FUNC_1(VAR_2);
 return 0;
}
