
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
struct sockaddr_in {int sin_addr; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int sockaddr ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,struct sockaddr*,int*) ;
 int FUNC_1 (char*,char*,int,int,int,int) ;
 int FUNC_2 (char*,char*) ;

char *
FUNC_3()
{
 static char VAR_1[32];
 struct sockaddr_in VAR_2;
 socklen_t VAR_3 = sizeof(VAR_2);
 if (FUNC_0(VAR_0, (struct sockaddr *) &VAR_2, &VAR_3) == 0)
 {
  uint8 *VAR_4 = (uint8 *) & VAR_2.sin_addr;
  FUNC_1(VAR_1, "%d.%d.%d.%d", VAR_4[0], VAR_4[1], VAR_4[2], VAR_4[3]);
 }
 else
  FUNC_2(VAR_1, "127.0.0.1");
 return VAR_1;
}
