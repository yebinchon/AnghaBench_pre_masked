
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pollfd {int events; int fd; int revents; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int VAR_7 ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 () ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (struct pollfd*,int,int) ;
 scalar_t__ FUNC_10 (int ,int ) ;
 int FUNC_11 (int) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (int,int ) ;
 scalar_t__ FUNC_14 (int,int ,int *,int ) ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_15 (int,int *,int ) ;

int FUNC_16(int VAR_9, char **VAR_10)
{
 struct pollfd VAR_11;
 int VAR_12, VAR_13;
 int VAR_14 = 10000;

 VAR_11.events = VAR_2;

 if (VAR_9 > 2)
  FUNC_5("Unexpected command line argument\n");

 if (VAR_9 == 2) {
  VAR_14 = FUNC_1(VAR_10[1]);
  if (VAR_14 <= 0)
   FUNC_5("invalid input parameter %s\n",
     VAR_10[1]);
 }

 FUNC_7("running pidfd poll test for %d iterations\n",
  VAR_14);

 for (VAR_12 = 0; VAR_12 < VAR_14; VAR_12++) {
  int VAR_15;
  int VAR_16 = FUNC_4();

  if (VAR_16 < 0) {
   if (VAR_6 == VAR_0) {
    VAR_12--;
    continue;
   }
   FUNC_5(
    "%s - failed to fork a child process\n",
    FUNC_12(VAR_6));
  }

  if (VAR_16 == 0) {

   FUNC_11(60);
   FUNC_3(VAR_1);
  }


  VAR_15 = FUNC_13(VAR_16, 0);
  if (VAR_15 < 0)
   FUNC_5("%s - pidfd_open failed\n",
     FUNC_12(VAR_6));


  if (FUNC_10(VAR_3, VAR_7) == VAR_5)
   FUNC_5("%s - signal failed\n",
     FUNC_12(VAR_6));
  FUNC_0(3);


  if (FUNC_14(VAR_15, VAR_4, ((void*)0), 0))
   FUNC_5("%s - pidfd_send_signal failed\n",
     FUNC_12(VAR_6));


  VAR_11.fd = VAR_15;
  VAR_13 = FUNC_9(&VAR_11, 1, -1);


  if (VAR_13 < 0)
   FUNC_5("%s - poll failed\n",
     FUNC_12(VAR_6));

  if (VAR_13 != 1)
   FUNC_5("unexpected poll result: %d\n",
     VAR_13);

  if (!(VAR_11.revents & VAR_2))
   FUNC_5(
    "unexpected event type received: 0x%x\n",
    VAR_11.revents);

  if (VAR_8)
   FUNC_5(
    "death notification wait timeout\n");

  FUNC_2(VAR_15);

  if (FUNC_15(VAR_16, ((void*)0), 0) < 0)
   FUNC_5("%s - waitpid failed\n",
     FUNC_12(VAR_6));

 }

 FUNC_8("pidfd poll test: pass\n");
 return FUNC_6();
}
