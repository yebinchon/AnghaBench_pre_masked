
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {scalar_t__ sk_type; int sk_protocol; int sk_state; } ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
struct TYPE_3__ {int idiag_sport; } ;
struct inet_diag_msg {int idiag_state; TYPE_1__ id; } ;
struct inet_diag_handler {int (* idiag_get_info ) (struct sock*,struct inet_diag_msg*,void*) ;scalar_t__ idiag_info_size; } ;
struct TYPE_4__ {int inet_sport; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct inet_diag_handler const*) ;
 int FUNC_1 (struct inet_diag_handler const*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 struct inet_diag_handler* FUNC_2 (int ) ;
 int FUNC_3 (struct inet_diag_msg*,struct sock*) ;
 int FUNC_4 (struct inet_diag_handler const*) ;
 TYPE_2__* FUNC_5 (struct sock*) ;
 int FUNC_6 (struct inet_diag_msg*,int ,int) ;
 void* FUNC_7 (struct nlattr*) ;
 int FUNC_8 (struct sk_buff*,int ,int ) ;
 struct nlattr* FUNC_9 (struct sk_buff*,int ,scalar_t__,int ) ;
 int FUNC_10 (struct sk_buff*,struct nlmsghdr*) ;
 struct inet_diag_msg* FUNC_11 (struct nlmsghdr*) ;
 int FUNC_12 (struct sk_buff*,struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_13 (struct sk_buff*,int ,int ,int ,int,int ) ;
 int FUNC_14 (struct sock*,struct inet_diag_msg*,void*) ;

__attribute__((used)) static
int FUNC_15(struct sk_buff *VAR_7, struct sock *VAR_8)
{
 const struct inet_diag_handler *VAR_9;
 struct nlmsghdr *VAR_10;
 struct nlattr *VAR_11;
 struct inet_diag_msg *VAR_12;
 void *VAR_13 = ((void*)0);
 int VAR_14 = 0;

 VAR_10 = FUNC_13(VAR_7, 0, 0, VAR_5, sizeof(*VAR_12), 0);
 if (!VAR_10)
  return -VAR_0;

 VAR_12 = FUNC_11(VAR_10);
 FUNC_6(VAR_12, 0, sizeof(*VAR_12));
 FUNC_3(VAR_12, VAR_8);
 if (VAR_8->sk_type == VAR_4 || VAR_8->sk_type == VAR_6)
  VAR_12->id.idiag_sport = FUNC_5(VAR_8)->inet_sport;
 VAR_12->idiag_state = VAR_8->sk_state;

 if ((VAR_14 = FUNC_8(VAR_7, VAR_3, VAR_8->sk_protocol))) {
  FUNC_10(VAR_7, VAR_10);
  return VAR_14;
 }

 VAR_9 = FUNC_2(VAR_8->sk_protocol);
 if (FUNC_0(VAR_9)) {
  FUNC_4(VAR_9);
  FUNC_10(VAR_7, VAR_10);
  return FUNC_1(VAR_9);
 }

 VAR_11 = VAR_9->idiag_info_size
  ? FUNC_9(VAR_7, VAR_1,
        VAR_9->idiag_info_size,
        VAR_2)
  : ((void*)0);
 if (VAR_11)
  VAR_13 = FUNC_7(VAR_11);

 VAR_9->idiag_get_info(VAR_8, VAR_12, VAR_13);
 FUNC_4(VAR_9);

 FUNC_12(VAR_7, VAR_10);
 return 0;
}
