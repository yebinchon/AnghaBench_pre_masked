
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct dcbmsg {scalar_t__ dcb_pad; int cmd; int dcb_family; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 struct dcbmsg* FUNC_1 (struct nlmsghdr*) ;
 struct sk_buff* FUNC_2 (int ,int ) ;
 struct nlmsghdr* FUNC_3 (struct sk_buff*,int ,int ,int,int,int ) ;

__attribute__((used)) static struct sk_buff *FUNC_4(int VAR_3, u8 VAR_4, u32 VAR_5, u32 VAR_6,
        u32 VAR_7, struct nlmsghdr **VAR_8)
{
 struct sk_buff *VAR_9;
 struct dcbmsg *VAR_10;
 struct nlmsghdr *VAR_11;

 VAR_9 = FUNC_2(VAR_2, VAR_1);
 if (!VAR_9)
  return ((void*)0);

 VAR_11 = FUNC_3(VAR_9, VAR_5, VAR_6, VAR_3, sizeof(*VAR_10), VAR_7);
 FUNC_0(!VAR_11);

 VAR_10 = FUNC_1(VAR_11);
 VAR_10->dcb_family = VAR_0;
 VAR_10->cmd = VAR_4;
 VAR_10->dcb_pad = 0;

 if (VAR_8)
  *VAR_8 = VAR_11;

 return VAR_9;
}
