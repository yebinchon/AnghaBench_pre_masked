
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int nla_len; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static struct nlattr *FUNC_1(const struct nlattr *VAR_0, int *VAR_1)
{
 int VAR_2 = FUNC_0(VAR_0->nla_len);

 *VAR_1 -= VAR_2;
 return (struct nlattr *) ((char *) VAR_0 + VAR_2);
}
