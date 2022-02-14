
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in {int dummy; } ;


 int FUNC_0 (int,struct sockaddr_in*,int) ;
 int FUNC_1 (int,int,int ,int) ;
 int FUNC_2 (int,struct sockaddr_in*) ;
 int VAR_0 ;
 int FUNC_3 (int) ;
 int VAR_1 ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,char*,int,char*) ;
 scalar_t__ FUNC_7 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,int) ;
 int VAR_4 ;
 char* FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int,int *,int ) ;

__attribute__((used)) static void
FUNC_12(int VAR_5)
{
 int VAR_6, VAR_7;
 struct sockaddr_in VAR_8;
 int VAR_9;

 VAR_6 = FUNC_1(VAR_5, 3, VAR_2, 3);
 if (VAR_6 < 0) {
  FUNC_8("Server setup failed");
  FUNC_4(1);
 }

 FUNC_9("server[%d]: started.\n", (int) FUNC_7());
 for(;;) {
  while (FUNC_11(-1, ((void*)0), VAR_0) > 0) ;
  VAR_7 = FUNC_0(VAR_6, &VAR_8, 5);
  if (VAR_7 < 0) {
   if (VAR_7 == VAR_3)
    FUNC_9("server[%d]: idle\n", (int) FUNC_7());
   else
    FUNC_6(VAR_4, "server[%d]: accept error: %s\n",
     (int) FUNC_7(), FUNC_10(VAR_1));
  } else if ((VAR_9 = FUNC_5()) < 0) {
   FUNC_6(VAR_4, "server[%d]: fork error: %s\n",
    (int) FUNC_7(), FUNC_10(VAR_1));
   FUNC_4(1);
  } else if (VAR_9 == 0) {
   FUNC_2(VAR_7, &VAR_8);
   FUNC_4(0);
  } else {

   (void) FUNC_3(VAR_7);
  }
 }
}
