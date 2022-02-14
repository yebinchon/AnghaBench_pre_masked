
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nlattr {int nla_type; int nla_len; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct nlattr*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct nlattr *VAR_0, int VAR_1, int VAR_2, u32 VAR_3)
{
 struct nlattr *VAR_4;

 VAR_4 = (struct nlattr *) ((char *) VAR_0 + VAR_1);
 VAR_4->nla_type = VAR_2;
 VAR_4->nla_len = FUNC_0(4);
 *(u32 *) FUNC_1(VAR_4) = VAR_3;

 return VAR_1 + FUNC_2(4);
}
