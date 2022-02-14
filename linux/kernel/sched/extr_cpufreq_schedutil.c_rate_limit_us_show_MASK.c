
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sugov_tunables {int rate_limit_us; } ;
struct gov_attr_set {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,int) ;
 struct sugov_tunables* FUNC_1 (struct gov_attr_set*) ;

__attribute__((used)) static ssize_t FUNC_2(struct gov_attr_set *VAR_0, char *VAR_1)
{
 struct sugov_tunables *VAR_2 = FUNC_1(VAR_0);

 return FUNC_0(VAR_1, "%u\n", VAR_2->rate_limit_us);
}
