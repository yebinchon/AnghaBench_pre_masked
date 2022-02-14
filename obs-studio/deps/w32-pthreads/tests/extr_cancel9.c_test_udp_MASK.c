
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_port; TYPE_1__ sin_addr; int sin_family; } ;
struct sockaddr {int dummy; } ;
typedef int WSADATA ;
typedef int WORD ;
typedef scalar_t__ SOCKET ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (scalar_t__,struct sockaddr*,int) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (scalar_t__,char*,int,int ,struct sockaddr*,int*) ;
 scalar_t__ FUNC_11 (int ,int ,int ) ;

void *
FUNC_12 (void *VAR_5)
{
  struct sockaddr_in VAR_6;
  struct sockaddr_in VAR_7;
  SOCKET VAR_8;
  int VAR_9;
  int VAR_10, VAR_11;
  char VAR_12[4096];
  WORD VAR_13 = FUNC_0 (2, 2);
  WSADATA VAR_14;

  FUNC_8 (VAR_3, ((void*)0));
  FUNC_9 (VAR_2, ((void*)0));

  if (FUNC_2 (VAR_13, &VAR_14) != 0)
    {
      return ((void*)0);
    }

  VAR_8 = FUNC_11 (VAR_0, VAR_4, 0);
  if ((int)VAR_8 == -1)
    {
      FUNC_7 ("Server: socket ERROR \n");
      FUNC_5 (-1);
    }

  VAR_6.sin_family = VAR_0;
  VAR_6.sin_addr.s_addr = VAR_1;
  VAR_6.sin_port = FUNC_6 (9003);

  if (FUNC_3
      (VAR_8, (struct sockaddr *) &VAR_6,
       sizeof (struct sockaddr_in)))
    {
      FUNC_7 ("Server: ERROR can't bind UDPSocket");
      FUNC_5 (-1);
    }

  VAR_9 = sizeof (struct sockaddr);

  VAR_10 = 512;

  VAR_11 =
    FUNC_10 (VAR_8, (char *) VAR_12, VAR_10, 0,
       (struct sockaddr *) &VAR_7, &VAR_9);

  FUNC_4 (VAR_8);
  FUNC_1 ();

  return ((void*)0);
}
