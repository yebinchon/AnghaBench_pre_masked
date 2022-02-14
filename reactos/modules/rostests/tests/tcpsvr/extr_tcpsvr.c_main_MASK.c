
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_port; TYPE_1__ sin_addr; int sin_family; } ;
struct sockaddr {int dummy; } ;
typedef int servAddr ;
typedef int cliAddr ;
typedef int WSADATA ;
typedef int WORD ;
typedef scalar_t__ INT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int *) ;
 int FUNC_3 (int,struct sockaddr*,int*) ;
 scalar_t__ FUNC_4 (int,struct sockaddr*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 char* FUNC_7 (TYPE_1__) ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (char*,int,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*,...) ;
 int FUNC_13 (int,char*) ;
 int FUNC_14 (int ,int ,int ) ;

int FUNC_15 (int VAR_7, char *VAR_8[]) {

  WORD VAR_9;
  WSADATA VAR_10;
  INT VAR_11;
  int VAR_12, VAR_13, VAR_14;

  struct sockaddr_in VAR_15, VAR_16;
  char VAR_17[VAR_4];

    VAR_9 = FUNC_0(2, 2);

    VAR_11 = FUNC_2(VAR_9, &VAR_10);
    if (VAR_11 != 0) {
        FUNC_12("Could not initialize winsock dll.\n");
        return VAR_2;
    }


  VAR_12 = FUNC_14(VAR_0, VAR_6, 0);
   if(VAR_12<0) {
    FUNC_11("cannot open socket ");
    FUNC_1();
    return VAR_1;
  }


  VAR_16.sin_family = VAR_0;
  VAR_16.sin_addr.s_addr = FUNC_5(VAR_3);
  VAR_16.sin_port = FUNC_6(VAR_5);

  if(FUNC_4(VAR_12, (struct sockaddr *) &VAR_16, sizeof(VAR_16))<0) {
    FUNC_11("cannot bind port ");
    FUNC_1();
    return VAR_1;
  }

  FUNC_8(VAR_12,5);

  while(1) {

    FUNC_12("%s: \n"
          "To start test, Please telnet to localhost (127.0.0.1) port 23 \n"
          "When connected input raw data followed by End of Line\n"
          "Test is now running on TCP port %u\n",VAR_8[0],VAR_5);

    VAR_14 = sizeof(VAR_15);
    VAR_13 = FUNC_3(VAR_12, (struct sockaddr *) &VAR_15, &VAR_14);
    if(VAR_13<0) {
      FUNC_11("cannot accept connection ");
      FUNC_1();
      return VAR_1;
    }


    FUNC_9(VAR_17,0x0,VAR_4);


    while(FUNC_13(VAR_13,VAR_17)!=VAR_1) {

      FUNC_12("%s: received from %s:TCP%d : %s\n", VAR_8[0],
      FUNC_7(VAR_15.sin_addr),
      FUNC_10(VAR_15.sin_port), VAR_17);

      FUNC_9(VAR_17,0x0,VAR_4);

    }

  }

}
