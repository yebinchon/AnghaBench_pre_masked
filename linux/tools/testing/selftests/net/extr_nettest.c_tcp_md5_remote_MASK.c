
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_in6 {int sin6_family; int sin6_addr; void* sin6_port; } ;
struct sockaddr_in {int sin_family; int sin_addr; void* sin_port; } ;
struct TYPE_2__ {int in6; int in; } ;
struct sock_args {int version; int password; TYPE_1__ remote_addr; int port; } ;
typedef int sin6 ;
typedef int sin ;




 int FUNC_0 (int) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int,void*,int,int ) ;

__attribute__((used)) static int FUNC_4(int VAR_0, struct sock_args *VAR_1)
{
 struct sockaddr_in VAR_2 = {
  .sin_family = 129,
 };
 struct sockaddr_in6 VAR_3 = {
  .sin6_family = 128,
 };
 void *VAR_4;
 int VAR_5;

 switch (VAR_1->version) {
 case 129:
  VAR_2.sin_port = FUNC_1(VAR_1->port);
  VAR_2.sin_addr = VAR_1->remote_addr.in;
  VAR_4 = &VAR_2;
  VAR_5 = sizeof(VAR_2);
  break;
 case 128:
  VAR_3 = FUNC_1(VAR_1->port);
  VAR_3 = VAR_1->remote_addr.in6;
  VAR_4 = &VAR_3;
  VAR_5 = sizeof(VAR_3);
  break;
 default:
  FUNC_2("unknown address family\n");
  FUNC_0(1);
 }

 if (FUNC_3(VAR_0, VAR_4, VAR_5, VAR_1->password))
  return -1;

 return 0;
}
