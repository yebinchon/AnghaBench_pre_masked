
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
struct net {int dummy; } ;


 int FUNC_0 (struct net*,struct notifier_block*) ;
 int FUNC_1 (struct net*,struct notifier_block*) ;

__attribute__((used)) static int FUNC_2(struct net *VAR_0, struct notifier_block *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2)
  return VAR_2;

 FUNC_1(VAR_0, VAR_1);

 return 0;
}
