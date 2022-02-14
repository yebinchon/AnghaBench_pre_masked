
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net {int dummy; } ;
struct ip_options {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (struct net*,struct ip_options*,struct sk_buff*,int *) ;
 int FUNC_1 (struct sk_buff*,int ,int ,int ) ;

int FUNC_2(struct net *VAR_1,
         struct ip_options *VAR_2, struct sk_buff *VAR_3)
{
 int VAR_4;
 __be32 VAR_5;

 VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3, &VAR_5);
 if (VAR_4 != 0 && VAR_3)
  FUNC_1(VAR_3, VAR_0, 0, VAR_5);
 return VAR_4;
}
