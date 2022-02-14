
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct net_device {int dummy; } ;
struct mpls_link_stats {int dummy; } ;
struct mpls_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct mpls_dev* FUNC_0 (struct net_device const*) ;
 int FUNC_1 (struct mpls_dev*,struct mpls_link_stats*) ;
 struct mpls_link_stats* FUNC_2 (struct nlattr*) ;
 struct nlattr* FUNC_3 (struct sk_buff*,int ,int,int ) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_4,
         const struct net_device *VAR_5)
{
 struct mpls_link_stats *VAR_6;
 struct mpls_dev *VAR_7;
 struct nlattr *VAR_8;

 VAR_7 = FUNC_0(VAR_5);
 if (!VAR_7)
  return -VAR_1;

 VAR_8 = FUNC_3(VAR_4, VAR_2,
    sizeof(struct mpls_link_stats),
    VAR_3);
 if (!VAR_8)
  return -VAR_0;

 VAR_6 = FUNC_2(VAR_8);
 FUNC_1(VAR_7, VAR_6);

 return 0;
}
