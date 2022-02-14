
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct setuid_ruleset {int rules; } ;
struct setuid_rule {int src_uid; int next; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int ) ;

__attribute__((used)) static void FUNC_2(struct setuid_ruleset *VAR_0, struct setuid_rule *VAR_1)
{
 FUNC_1(VAR_0->rules, &VAR_1->next, FUNC_0(VAR_1->src_uid));
}
