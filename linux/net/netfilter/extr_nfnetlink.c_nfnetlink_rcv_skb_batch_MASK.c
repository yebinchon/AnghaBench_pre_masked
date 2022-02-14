
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct sk_buff {int len; } ;
struct nlmsghdr {int nlmsg_len; } ;
struct nlattr {int dummy; } ;
struct nfgenmsg {scalar_t__ res_id; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (struct sk_buff*,struct nlmsghdr*,int,int *) ;
 int FUNC_2 (struct sk_buff*,struct nlmsghdr*,scalar_t__,int ) ;
 int VAR_4 ;
 int FUNC_3 (struct nlattr*) ;
 int FUNC_4 (struct nlattr**,int ,struct nlattr*,int,int ,int *) ;
 struct nfgenmsg* FUNC_5 (struct nlmsghdr*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int FUNC_9 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_10(struct sk_buff *VAR_5, struct nlmsghdr *VAR_6)
{
 int VAR_7 = FUNC_6(sizeof(struct nfgenmsg));
 struct nlattr *VAR_8 = (void *)VAR_6 + VAR_7;
 struct nlattr *VAR_9[VAR_1 + 1];
 int VAR_10 = VAR_6->nlmsg_len - VAR_7;
 struct nfgenmsg *VAR_11;
 int VAR_12, VAR_13;
 u32 VAR_14 = 0;
 u16 VAR_15;

 VAR_12 = FUNC_0(VAR_6->nlmsg_len);
 if (VAR_12 > VAR_5->len)
  VAR_12 = VAR_5->len;

 if (VAR_5->len < VAR_3 + sizeof(struct nfgenmsg))
  return;

 VAR_13 = FUNC_4(VAR_9, VAR_1, VAR_8, VAR_10,
       VAR_4, ((void*)0));
 if (VAR_13 < 0) {
  FUNC_1(VAR_5, VAR_6, VAR_13, ((void*)0));
  return;
 }
 if (VAR_9[VAR_0])
  VAR_14 = FUNC_7(FUNC_3(VAR_9[VAR_0]));

 VAR_11 = FUNC_5(VAR_6);
 FUNC_9(VAR_5, VAR_12);

 if (VAR_11->res_id == VAR_2)
  VAR_15 = VAR_2;
 else
  VAR_15 = FUNC_8(VAR_11->res_id);

 FUNC_2(VAR_5, VAR_6, VAR_15, VAR_14);
}
