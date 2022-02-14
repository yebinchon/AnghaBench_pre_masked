
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct netlink_callback {TYPE_1__* nlh; } ;
struct inet_diag_req_v2 {int id; int idiag_states; int idiag_ext; int sdiag_protocol; int sdiag_family; } ;
struct inet_diag_req {int id; int idiag_states; int idiag_ext; } ;
struct TYPE_4__ {int nlmsg_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,struct netlink_callback*,struct inet_diag_req_v2*,struct nlattr*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int) ;
 struct inet_diag_req* FUNC_3 (TYPE_1__*) ;
 struct nlattr* FUNC_4 (TYPE_1__*,int,int ) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_2,
     struct netlink_callback *VAR_3)
{
 struct inet_diag_req *VAR_4 = FUNC_3(VAR_3->nlh);
 int VAR_5 = sizeof(struct inet_diag_req);
 struct inet_diag_req_v2 VAR_6;
 struct nlattr *VAR_7 = ((void*)0);

 VAR_6.sdiag_family = VAR_0;
 VAR_6.sdiag_protocol = FUNC_1(VAR_3->nlh->nlmsg_type);
 VAR_6.idiag_ext = VAR_4->idiag_ext;
 VAR_6.idiag_states = VAR_4->idiag_states;
 VAR_6.id = VAR_4->id;

 if (FUNC_2(VAR_3->nlh, VAR_5))
  VAR_7 = FUNC_4(VAR_3->nlh, VAR_5, VAR_1);

 return FUNC_0(VAR_2, VAR_3, &VAR_6, VAR_7);
}
