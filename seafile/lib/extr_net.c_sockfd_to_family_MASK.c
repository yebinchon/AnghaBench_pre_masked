
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int ss_family; } ;
struct sockaddr {int dummy; } ;
typedef int ss ;
typedef int socklen_t ;
typedef int evutil_socket_t ;


 scalar_t__ FUNC_0 (int ,struct sockaddr*,int*) ;

int
FUNC_1(evutil_socket_t VAR_0)
{
 struct sockaddr_storage VAR_1;
 socklen_t VAR_2;

 VAR_2 = sizeof(VAR_1);
 if (FUNC_0(VAR_0, (struct sockaddr *) &VAR_1, &VAR_2) < 0)
  return(-1);
 return(VAR_1.ss_family);
}
