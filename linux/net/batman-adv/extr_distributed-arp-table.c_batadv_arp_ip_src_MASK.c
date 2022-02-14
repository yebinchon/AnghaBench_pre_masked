
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
typedef int __be32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct sk_buff*,int) ;

__attribute__((used)) static __be32 FUNC_1(struct sk_buff *VAR_1, int VAR_2)
{
 return *(__be32 *)(FUNC_0(VAR_1, VAR_2) + VAR_0);
}
