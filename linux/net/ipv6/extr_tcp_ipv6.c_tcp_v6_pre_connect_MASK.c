
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct sock {int dummy; } ;


 int FUNC_0 (struct sock*,struct sockaddr*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct sock*) ;

__attribute__((used)) static int FUNC_2(struct sock *VAR_2, struct sockaddr *VAR_3,
         int VAR_4)
{




 if (VAR_4 < VAR_1)
  return -VAR_0;

 FUNC_1(VAR_2);

 return FUNC_0(VAR_2, VAR_3);
}
