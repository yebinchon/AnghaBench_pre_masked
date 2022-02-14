
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct inet_diag_req_v2 {int sdiag_protocol; } ;
struct inet_diag_handler {int (* dump_one ) (struct sk_buff*,struct nlmsghdr const*,struct inet_diag_req_v2 const*) ;int (* destroy ) (struct sk_buff*,struct inet_diag_req_v2 const*) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct inet_diag_handler const*) ;
 int FUNC_1 (struct inet_diag_handler const*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct inet_diag_handler* FUNC_2 (int ) ;
 int FUNC_3 (struct inet_diag_handler const*) ;
 int FUNC_4 (struct sk_buff*,struct nlmsghdr const*,struct inet_diag_req_v2 const*) ;
 int FUNC_5 (struct sk_buff*,struct inet_diag_req_v2 const*) ;

__attribute__((used)) static int FUNC_6(int VAR_3, struct sk_buff *VAR_4,
          const struct nlmsghdr *VAR_5,
          const struct inet_diag_req_v2 *VAR_6)
{
 const struct inet_diag_handler *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_2(VAR_6->sdiag_protocol);
 if (FUNC_0(VAR_7))
  VAR_8 = FUNC_1(VAR_7);
 else if (VAR_3 == VAR_2)
  VAR_8 = VAR_7->dump_one(VAR_4, VAR_5, VAR_6);
 else if (VAR_3 == VAR_1 && VAR_7->destroy)
  VAR_8 = VAR_7->destroy(VAR_4, VAR_6);
 else
  VAR_8 = -VAR_0;
 FUNC_3(VAR_7);

 return VAR_8;
}
