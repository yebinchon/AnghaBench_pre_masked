
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int nlmsg_type; } ;
struct TYPE_2__ {long expires; } ;
struct inet_timewait_sock {scalar_t__ tw_state; int tw_substate; TYPE_1__ tw_timer; } ;
struct inet_diag_msg {int idiag_timer; scalar_t__ idiag_inode; scalar_t__ idiag_uid; scalar_t__ idiag_wqueue; scalar_t__ idiag_rqueue; int idiag_expires; int idiag_state; scalar_t__ idiag_retrans; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct inet_diag_msg*,struct sock*) ;
 struct inet_timewait_sock* FUNC_2 (struct sock*) ;
 long VAR_2 ;
 int FUNC_3 (long) ;
 struct inet_diag_msg* FUNC_4 (struct nlmsghdr*) ;
 int FUNC_5 (struct sk_buff*,struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_6 (struct sk_buff*,int ,int ,int ,int,int ) ;

__attribute__((used)) static int FUNC_7(struct sock *VAR_3,
          struct sk_buff *VAR_4,
          u32 VAR_5, u32 VAR_6, u16 VAR_7,
          const struct nlmsghdr *VAR_8)
{
 struct inet_timewait_sock *VAR_9 = FUNC_2(VAR_3);
 struct inet_diag_msg *VAR_10;
 struct nlmsghdr *VAR_11;
 long VAR_12;

 VAR_11 = FUNC_6(VAR_4, VAR_5, VAR_6, VAR_8->nlmsg_type, sizeof(*VAR_10),
   VAR_7);
 if (!VAR_11)
  return -VAR_0;

 VAR_10 = FUNC_4(VAR_11);
 FUNC_0(VAR_9->tw_state != VAR_1);

 VAR_12 = VAR_9->tw_timer.expires - VAR_2;
 if (VAR_12 < 0)
  VAR_12 = 0;

 FUNC_1(VAR_10, VAR_3);
 VAR_10->idiag_retrans = 0;

 VAR_10->idiag_state = VAR_9->tw_substate;
 VAR_10->idiag_timer = 3;
 VAR_10->idiag_expires = FUNC_3(VAR_12);
 VAR_10->idiag_rqueue = 0;
 VAR_10->idiag_wqueue = 0;
 VAR_10->idiag_uid = 0;
 VAR_10->idiag_inode = 0;

 FUNC_5(VAR_4, VAR_11);
 return 0;
}
