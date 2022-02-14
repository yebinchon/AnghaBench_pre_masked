
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint32 ;
struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
struct sockaddr {int dummy; } ;
typedef int fd_set ;
typedef int addr ;
typedef int BOOL ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int,struct sockaddr*,int*) ;
 int VAR_0 ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,int ,char*,char*,char*,char*) ;
 int FUNC_9 () ;
 int FUNC_10 (int *,int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_11 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_12 (int,int *,int *,int *,struct timeval*) ;
 int VAR_3 ;
 char* FUNC_13 (int ) ;
 int FUNC_14 () ;
 int FUNC_15 () ;

void
FUNC_16(char *VAR_4, uint32 VAR_5, char *VAR_6, char *VAR_7,
  char *VAR_8, char *VAR_9)
{
 struct sockaddr VAR_10;
 fd_set VAR_11;
 struct timeval VAR_12;
 int VAR_13, VAR_14 = sizeof(VAR_10);

 VAR_13 = FUNC_11(VAR_2);
 FUNC_6(VAR_3, "Listening on VNC port %d\n", VAR_2);
 if (VAR_13 <= 0)
  FUNC_3("Cannot listen on port %d", VAR_2);
 else
  while (1)
  {
   FUNC_1(&VAR_11);
   FUNC_0(VAR_13, &VAR_11);
   VAR_12.tv_sec = 5;
   VAR_12.tv_usec = 0;
   if (FUNC_12(VAR_13 + 1, &VAR_11, ((void*)0), ((void*)0), &VAR_12) > 0)
   {
    VAR_1 = FUNC_2(VAR_13, &VAR_10, &VAR_14);
    if (VAR_1 < 0)
    {
     FUNC_3("Error accepting client (%d: %s.\n",
           VAR_0, FUNC_13(VAR_0));
     continue;
    }
    FUNC_14();
    if (!FUNC_8(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9))
    {
     FUNC_3("Error connecting to RDP server.\n");
     continue;
    }
    if (!FUNC_5())
    {
     BOOL VAR_15;
     uint32_t VAR_16;
     FUNC_7("Connection successful.\n");
     FUNC_10(&VAR_15, &VAR_16);
     FUNC_7("Disconnecting...\n");
     FUNC_9();
     FUNC_15();
     FUNC_4(0);
    }
   }
  }
}
