
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct netlink_sock {int flags; scalar_t__ cb_running; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct sk_buff*,int ,int ) ;
 struct netlink_sock* FUNC_1 (struct sock*) ;

__attribute__((used)) static int FUNC_2(struct sock *VAR_12, struct sk_buff *VAR_13)
{
 struct netlink_sock *VAR_14 = FUNC_1(VAR_12);
 u32 VAR_15 = 0;

 if (VAR_14->cb_running)
  VAR_15 |= VAR_2;
 if (VAR_14->flags & VAR_11)
  VAR_15 |= VAR_5;
 if (VAR_14->flags & VAR_7)
  VAR_15 |= VAR_0;
 if (VAR_14->flags & VAR_10)
  VAR_15 |= VAR_4;
 if (VAR_14->flags & VAR_9)
  VAR_15 |= VAR_3;
 if (VAR_14->flags & VAR_8)
  VAR_15 |= VAR_1;

 return FUNC_0(VAR_13, VAR_6, VAR_15);
}
