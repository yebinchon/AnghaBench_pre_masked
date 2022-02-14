
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlmsghdr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct nfnl_err {int err; int head; struct netlink_ext_ack extack; struct nlmsghdr* nlh; } ;
struct list_head {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nfnl_err* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,struct list_head*) ;

__attribute__((used)) static int FUNC_2(struct list_head *VAR_2, struct nlmsghdr *VAR_3, int VAR_4,
   const struct netlink_ext_ack *VAR_5)
{
 struct nfnl_err *VAR_6;

 VAR_6 = FUNC_0(sizeof(struct nfnl_err), VAR_1);
 if (VAR_6 == ((void*)0))
  return -VAR_0;

 VAR_6->nlh = VAR_3;
 VAR_6->err = VAR_4;
 VAR_6->extack = *VAR_5;
 FUNC_1(&VAR_6->head, VAR_2);

 return 0;
}
