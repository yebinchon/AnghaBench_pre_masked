
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;
struct sock {int dummy; } ;


 int FUNC_0 (struct sock*,struct sockaddr*) ;
 int VAR_0 ;

int FUNC_1(struct sock *VAR_1, struct sockaddr *VAR_2, int VAR_3)
{




 if (VAR_3 < sizeof(struct sockaddr_in))
  return -VAR_0;

 return FUNC_0(VAR_1, VAR_2);
}
