
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,char*,int) ;

int FUNC_6(void)
{
 int VAR_2 = FUNC_2("/dev/watchdog", VAR_1);
 int VAR_3 = 0;
 if (VAR_2 == -1) {
  FUNC_3("watchdog");
  FUNC_1(VAR_0);
 }
 while (1) {
  VAR_3 = FUNC_5(VAR_2, "\0", 1);
  if (VAR_3 != 1) {
   VAR_3 = -1;
   break;
  }
  FUNC_4(10);
 }
 FUNC_0(VAR_2);
 return VAR_3;
}
