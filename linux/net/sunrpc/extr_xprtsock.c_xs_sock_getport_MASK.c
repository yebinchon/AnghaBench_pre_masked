
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct sockaddr_storage {int ss_family; } ;
struct sockaddr_in6 {int sin6_port; } ;
struct sockaddr_in {int sin_port; } ;
struct sockaddr {int dummy; } ;




 scalar_t__ FUNC_0 (struct socket*,struct sockaddr*) ;
 unsigned short FUNC_1 (int ) ;

__attribute__((used)) static unsigned short FUNC_2(struct socket *VAR_0)
{
 struct sockaddr_storage VAR_1;
 unsigned short VAR_2 = 0;

 if (FUNC_0(VAR_0, (struct sockaddr *)&VAR_1) < 0)
  goto out;
 switch (VAR_1.ss_family) {
 case 128:
  VAR_2 = FUNC_1(((struct sockaddr_in6 *)&VAR_1)->sin6_port);
  break;
 case 129:
  VAR_2 = FUNC_1(((struct sockaddr_in *)&VAR_1)->sin_port);
 }
out:
 return VAR_2;
}
