
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcp_congestion_ops {int flags; int owner; } ;
struct TYPE_2__ {int tcp_congestion_control; } ;
struct net {TYPE_1__ ipv4; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 struct tcp_congestion_ops* FUNC_3 (struct net*,char const*) ;
 int FUNC_4 (int ) ;
 struct tcp_congestion_ops* FUNC_5 (int *,struct tcp_congestion_ops*) ;

int FUNC_6(struct net *VAR_3, const char *VAR_4)
{
 struct tcp_congestion_ops *VAR_5;
 const struct tcp_congestion_ops *VAR_6;
 int VAR_7;

 FUNC_1();
 VAR_5 = FUNC_3(VAR_3, VAR_4);
 if (!VAR_5) {
  VAR_7 = -VAR_1;
 } else if (!FUNC_4(VAR_5->owner)) {
  VAR_7 = -VAR_0;
 } else {
  VAR_6 = FUNC_5(&VAR_3->ipv4.tcp_congestion_control, VAR_5);
  if (VAR_6)
   FUNC_0(VAR_6->owner);

  VAR_5->flags |= VAR_2;
  VAR_7 = 0;
 }
 FUNC_2();

 return VAR_7;
}
