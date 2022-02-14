
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int nla_len; } ;


 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(const struct nlattr *VAR_1)
{
 return VAR_1->nla_len - VAR_0;
}
