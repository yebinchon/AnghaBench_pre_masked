
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct net*,int *,int ,int ) ;
 scalar_t__ FUNC_1 (struct net_device const*) ;

unsigned int FUNC_2(struct net *VAR_1,
          const struct net_device *VAR_2,
          __be32 VAR_3)
{
 u32 VAR_4 = FUNC_1(VAR_2) ? : VAR_0;

 return FUNC_0(VAR_1, ((void*)0), VAR_3, VAR_4);
}
