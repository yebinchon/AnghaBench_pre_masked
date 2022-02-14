
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct fib_rule_uid_range {int end; int start; } ;
struct fib_kuid_range {void* end; void* start; } ;


 size_t VAR_0 ;
 int FUNC_0 () ;
 void* FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (struct nlattr*) ;

__attribute__((used)) static struct fib_kuid_range FUNC_3(struct nlattr **VAR_1)
{
 struct fib_rule_uid_range *VAR_2;
 struct fib_kuid_range VAR_3;

 VAR_2 = (struct fib_rule_uid_range *)FUNC_2(VAR_1[VAR_0]);

 VAR_3.start = FUNC_1(FUNC_0(), VAR_2->start);
 VAR_3.end = FUNC_1(FUNC_0(), VAR_2->end);

 return VAR_3;
}
