
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct libbpf_nla_policy {int dummy; } ;


 int FUNC_0 (struct nlattr*) ;
 int FUNC_1 (struct nlattr*) ;
 int FUNC_2 (struct nlattr**,int,int ,int ,struct libbpf_nla_policy*) ;

int FUNC_3(struct nlattr *VAR_0[], int VAR_1,
       struct nlattr *VAR_2,
       struct libbpf_nla_policy *VAR_3)
{
 return FUNC_2(VAR_0, VAR_1, FUNC_0(VAR_2),
    FUNC_1(VAR_2), VAR_3);
}
