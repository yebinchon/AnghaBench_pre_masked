
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int sk; } ;
struct sockaddr {scalar_t__ sa_family; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct sockaddr*,int,int) ;

int FUNC_1(struct socket *VAR_3, struct sockaddr *VAR_4,
        int VAR_5, int VAR_6)
{
 if (VAR_5 < sizeof(VAR_4->sa_family))
  return -VAR_1;

 if (VAR_4->sa_family == VAR_0)
  return -VAR_2;

 return FUNC_0(VAR_3->sk, VAR_4, VAR_5, VAR_6);
}
