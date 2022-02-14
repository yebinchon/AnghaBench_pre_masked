
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct tcamsg {scalar_t__ tca__pad2; scalar_t__ tca__pad1; int tca_family; } ;
struct tc_action {int dummy; } ;
struct sk_buff {int len; } ;
struct nlmsghdr {int nlmsg_len; } ;
struct nlattr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_1 (struct sk_buff*,int ) ;
 struct tcamsg* FUNC_2 (struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_3 (struct sk_buff*,int ,int ,int,int,int ) ;
 int FUNC_4 (struct sk_buff*,unsigned char*) ;
 unsigned char* FUNC_5 (struct sk_buff*) ;
 scalar_t__ FUNC_6 (struct sk_buff*,struct tc_action**,int,int) ;

__attribute__((used)) static int FUNC_7(struct sk_buff *VAR_2, struct tc_action *VAR_3[],
   u32 VAR_4, u32 VAR_5, u16 VAR_6, int VAR_7, int VAR_8,
   int VAR_9)
{
 struct tcamsg *VAR_10;
 struct nlmsghdr *VAR_11;
 unsigned char *VAR_12 = FUNC_5(VAR_2);
 struct nlattr *VAR_13;

 VAR_11 = FUNC_3(VAR_2, VAR_4, VAR_5, VAR_7, sizeof(*VAR_10), VAR_6);
 if (!VAR_11)
  goto out_nlmsg_trim;
 VAR_10 = FUNC_2(VAR_11);
 VAR_10->tca_family = VAR_0;
 VAR_10->tca__pad1 = 0;
 VAR_10->tca__pad2 = 0;

 VAR_13 = FUNC_1(VAR_2, VAR_1);
 if (!VAR_13)
  goto out_nlmsg_trim;

 if (FUNC_6(VAR_2, VAR_3, VAR_8, VAR_9) < 0)
  goto out_nlmsg_trim;

 FUNC_0(VAR_2, VAR_13);

 VAR_11->nlmsg_len = FUNC_5(VAR_2) - VAR_12;
 return VAR_2->len;

out_nlmsg_trim:
 FUNC_4(VAR_2, VAR_12);
 return -1;
}
