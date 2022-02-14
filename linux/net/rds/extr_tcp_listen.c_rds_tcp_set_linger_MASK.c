
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct linger {int l_onoff; int l_linger; } ;
typedef int no_linger ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct socket*,int ,int ,char*,int) ;

void FUNC_1(struct socket *VAR_2)
{
 struct linger VAR_3 = {
  .l_onoff = 1,
  .l_linger = 0,
 };

 FUNC_0(VAR_2, VAR_0, VAR_1,
     (char *)&VAR_3, sizeof(VAR_3));
}
