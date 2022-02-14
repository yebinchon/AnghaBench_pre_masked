
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostent {int dummy; } ;
typedef int h_buf ;


 int VAR_0 ;
 int FUNC_0 (struct hostent*,char*,int,struct hostent**,int*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int,int) ;
 int FUNC_3 (struct hostent*) ;

int FUNC_4(int VAR_1, char** VAR_2) {
 struct hostent VAR_3;
 struct hostent *VAR_4;
 char VAR_5[1024];
 int VAR_6;
 int VAR_7;
 do {
  VAR_7 = FUNC_0(&VAR_3, VAR_5, sizeof(VAR_5), &VAR_4, &VAR_6);
  FUNC_2("ret: %d, h_errno: %d\n", VAR_7, VAR_6);
  if(VAR_7 != 0) {
   VAR_0 = VAR_7;
   VAR_7 = -1;
  }
  if(VAR_7 == -1) {
   FUNC_1("gethostent_r");
   break;
  }
  if(VAR_4) {
   FUNC_3(VAR_4);
  }
 } while (VAR_4);
 return 0;
}
