
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int addr ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,struct sockaddr*,int*) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int,char*,int,int ) ;
 int FUNC_8 (int) ;
 int VAR_3 ;

void *FUNC_9(void *VAR_4)
{
 int VAR_5 = (int)(unsigned long)VAR_4;
 struct sockaddr_in VAR_6;
 socklen_t VAR_7 = sizeof(VAR_6);
 char *VAR_8;
 int VAR_9;
 int VAR_10;

 VAR_8 = FUNC_4(VAR_0);

 for (;;) {
  VAR_9 = FUNC_0(VAR_5, (struct sockaddr *)&VAR_6, &VAR_7);
  if (VAR_9 == -1) {
   FUNC_5("accept");
   break;
  }
  do {
   VAR_10 = FUNC_7(VAR_9, VAR_8, VAR_0, 0);
  } while (VAR_10 < 0 && VAR_2 == VAR_1);
  if (VAR_10 < 0)
   FUNC_5("send");
  if (VAR_10 != VAR_0)
   FUNC_2(VAR_3, "can only send %d bytes\n", VAR_10);




  FUNC_8(1);
  FUNC_1(VAR_9);
 }

 FUNC_3(VAR_8);
 FUNC_1(VAR_5);
 FUNC_6(0);
}
