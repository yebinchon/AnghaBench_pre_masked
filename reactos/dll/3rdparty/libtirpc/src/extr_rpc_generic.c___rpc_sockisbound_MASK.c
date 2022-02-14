
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_un {int * sun_path; int sin6_port; int sin_port; } ;
struct sockaddr_storage {int ss_family; } ;
struct sockaddr_in6 {int * sun_path; int sin6_port; int sin_port; } ;
struct sockaddr_in {int * sun_path; int sin6_port; int sin_port; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int SOCKET ;





 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,struct sockaddr*,int*) ;
 int FUNC_1 (struct sockaddr_un*,struct sockaddr_storage*,int) ;

int
FUNC_2(SOCKET VAR_1)
{
 struct sockaddr_storage VAR_2;
 union {
  struct sockaddr_in sin;
  struct sockaddr_in6 sin6;

  struct sockaddr_un usin;

 } VAR_3;
 socklen_t VAR_4;

 VAR_4 = sizeof (struct sockaddr_storage);
 if (FUNC_0(VAR_1, (struct sockaddr *)(void *)&VAR_2, &VAR_4) == VAR_0)
  return 0;

 switch (VAR_2.ss_family) {
  case 130:
   FUNC_1(&VAR_3.sin, &VAR_2, sizeof(VAR_3.sin));
   return (VAR_3.sin.sin_port != 0);






  case 128:

   FUNC_1(&VAR_3.usin, &VAR_2, sizeof(VAR_3.usin));
   return (VAR_3.usin.sun_path[0] != 0);

  default:
   break;
 }

 return 0;
}
