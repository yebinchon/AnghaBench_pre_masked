
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct sock {int sk_protocol; struct sk_security_struct* sk_security; } ;
struct sk_security_struct {int sclass; } ;
struct sk_buff {scalar_t__ len; } ;
struct nlmsghdr {int nlmsg_type; } ;
struct TYPE_5__ {int name; } ;
struct TYPE_4__ {int comm; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (int *) ;
 struct nlmsghdr* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (char*,int ,int ,int ,int ,int ) ;
 TYPE_2__* VAR_4 ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int,int ,int *) ;
 int VAR_5 ;
 int FUNC_5 (struct sock*,int ) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_7(struct sock *VAR_6, struct sk_buff *VAR_7)
{
 int VAR_8 = 0;
 u32 VAR_9;
 struct nlmsghdr *VAR_10;
 struct sk_security_struct *VAR_11 = VAR_6->sk_security;

 if (VAR_7->len < VAR_2) {
  VAR_8 = -VAR_0;
  goto out;
 }
 VAR_10 = FUNC_1(VAR_7);

 VAR_8 = FUNC_4(VAR_11->sclass, VAR_10->nlmsg_type, &VAR_9);
 if (VAR_8) {
  if (VAR_8 == -VAR_0) {
   FUNC_2("SELinux: unrecognized netlink"
          " message: protocol=%hu nlmsg_type=%hu sclass=%s"
          " pig=%d comm=%s\n",
          VAR_6->sk_protocol, VAR_10->nlmsg_type,
          VAR_4[VAR_11->sclass - 1].name,
          FUNC_6(VAR_3), VAR_3->comm);
   if (!FUNC_0(&VAR_5) ||
       FUNC_3(&VAR_5))
    VAR_8 = 0;
  }


  if (VAR_8 == -VAR_1)
   VAR_8 = 0;
  goto out;
 }

 VAR_8 = FUNC_5(VAR_6, VAR_9);
out:
 return VAR_8;
}
