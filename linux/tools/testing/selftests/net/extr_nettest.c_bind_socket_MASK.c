
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_in6 {int sin6_family; int sin6_addr; void* sin6_port; } ;
struct sockaddr_in {int sin_family; int sin_addr; void* sin_port; } ;
struct TYPE_2__ {int in6; int in; } ;
struct sock_args {scalar_t__ type; int version; TYPE_1__ local_addr; int port; int has_local_ip; } ;
typedef int socklen_t ;
typedef int serv_addr ;
typedef int serv6_addr ;




 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int,void*,int) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(int VAR_1, struct sock_args *VAR_2)
{
 struct sockaddr_in VAR_3 = {
  .sin_family = 129,
 };
 struct sockaddr_in6 VAR_4 = {
  .sin6_family = 128,
 };
 void *VAR_5;
 socklen_t VAR_6;

 if (!VAR_2->has_local_ip && VAR_2->type == VAR_0)
  return 0;

 switch (VAR_2->version) {
 case 129:
  VAR_3.sin_port = FUNC_1(VAR_2->port);
  VAR_3.sin_addr = VAR_2->local_addr.in;
  VAR_5 = &VAR_3;
  VAR_6 = sizeof(VAR_3);
  break;

 case 128:
  VAR_4.sin6_port = FUNC_1(VAR_2->port);
  VAR_4.sin6_addr = VAR_2->local_addr.in6;
  VAR_5 = &VAR_4;
  VAR_6 = sizeof(VAR_4);
  break;

 default:
  FUNC_3("Invalid address family\n");
  return -1;
 }

 if (FUNC_0(VAR_1, VAR_5, VAR_6) < 0) {
  FUNC_2("error binding socket");
  return -1;
 }

 return 0;
}
