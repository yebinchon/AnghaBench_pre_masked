
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct fib_rule_uid_range {int member_1; int member_0; } ;
struct fib_kuid_range {int end; int start; } ;
typedef int out ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct sk_buff*,int ,int,struct fib_rule_uid_range*) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_1, struct fib_kuid_range *VAR_2)
{
 struct fib_rule_uid_range VAR_3 = {
  FUNC_1(FUNC_0(), VAR_2->start),
  FUNC_1(FUNC_0(), VAR_2->end)
 };

 return FUNC_2(VAR_1, VAR_0, sizeof(VAR_3), &VAR_3);
}
