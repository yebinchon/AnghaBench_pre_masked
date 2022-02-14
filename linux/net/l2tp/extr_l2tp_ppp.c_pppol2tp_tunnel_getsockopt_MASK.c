
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct l2tp_tunnel {int debug; int name; } ;


 int VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (struct l2tp_tunnel*,int ,char*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct sock *VAR_2,
          struct l2tp_tunnel *VAR_3,
          int VAR_4, int *VAR_5)
{
 int VAR_6 = 0;

 switch (VAR_4) {
 case 128:
  *VAR_5 = VAR_3->debug;
  FUNC_0(VAR_3, VAR_1, "%s: get debug=%x\n",
     VAR_3->name, VAR_3->debug);
  break;

 default:
  VAR_6 = -VAR_0;
  break;
 }

 return VAR_6;
}
