
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nlmsghdr {int nlmsg_type; } ;
struct inet_diag_req_v2 {int id; int idiag_states; int idiag_ext; int sdiag_protocol; int sdiag_family; } ;
struct inet_diag_req {int id; int idiag_states; int idiag_ext; int idiag_family; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct sk_buff*,struct nlmsghdr const*,struct inet_diag_req_v2*) ;
 int FUNC_1 (int ) ;
 struct inet_diag_req* FUNC_2 (struct nlmsghdr const*) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_1,
          const struct nlmsghdr *VAR_2)
{
 struct inet_diag_req *VAR_3 = FUNC_2(VAR_2);
 struct inet_diag_req_v2 VAR_4;

 VAR_4.sdiag_family = VAR_3->idiag_family;
 VAR_4.sdiag_protocol = FUNC_1(VAR_2->nlmsg_type);
 VAR_4.idiag_ext = VAR_3->idiag_ext;
 VAR_4.idiag_states = VAR_3->idiag_states;
 VAR_4.id = VAR_3->id;

 return FUNC_0(VAR_0, VAR_1, VAR_2, &VAR_4);
}
