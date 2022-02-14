
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostent {int dummy; } ;
struct gethostbyname_data {int dummy; } ;


 int FUNC_0 (struct hostent*) ;
 struct hostent* FUNC_1 (char*,struct gethostbyname_data*) ;

int FUNC_2(int VAR_0, char**VAR_1) {
 struct hostent* VAR_2;
 struct gethostbyname_data VAR_3;
 if(VAR_0 == 1) return 1;
 VAR_2 = FUNC_1(VAR_1[1], &VAR_3);
 if(VAR_2) FUNC_0(VAR_2);
 return 0;
}
