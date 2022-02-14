
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct ifaddrmsg {int dummy; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct sk_buff*,int ) ;
 int FUNC_2 (struct nlattr*) ;
 struct ifaddrmsg* FUNC_3 (struct nlmsghdr*) ;
 int FUNC_4 (struct nlmsghdr*,int,struct nlattr**,int ,int ,struct netlink_ext_ack*) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_8, struct nlmsghdr *VAR_9,
     struct netlink_ext_ack *VAR_10)
{
 struct nlattr *VAR_11[VAR_5 + 1];
 struct ifaddrmsg *VAR_12;
 int VAR_13;

 if (!FUNC_1(VAR_8, VAR_0))
  return -VAR_3;

 if (!FUNC_1(VAR_8, VAR_1))
  return -VAR_3;

 FUNC_0();

 VAR_13 = FUNC_4(VAR_9, sizeof(*VAR_12), VAR_11, VAR_5,
        VAR_7, VAR_10);
 if (VAR_13 < 0)
  return VAR_13;

 VAR_12 = FUNC_3(VAR_9);
 if (!VAR_11[VAR_4])
  return -VAR_2;

 VAR_6 = FUNC_2(VAR_11[VAR_4]);
 return 0;
}
