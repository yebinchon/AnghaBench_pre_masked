
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct fib_result {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,int ,int ,int ,struct net_device*,struct fib_result*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

int FUNC_3(struct sk_buff *VAR_1, __be32 VAR_2, __be32 VAR_3,
    u8 VAR_4, struct net_device *VAR_5)
{
 struct fib_result VAR_6;
 int VAR_7;

 VAR_4 &= VAR_0;
 FUNC_1();
 VAR_7 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, &VAR_6);
 FUNC_2();

 return VAR_7;
}
