
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nla_policy {size_t type; scalar_t__ len; } ;


 scalar_t__* VAR_0 ;
 scalar_t__* VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;

int
FUNC_1(const struct nla_policy *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5 = 0;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++, VAR_2++) {
  if (VAR_2->len)
   VAR_5 += FUNC_0(VAR_2->len);
  else if (VAR_0[VAR_2->type])
   VAR_5 += FUNC_0(VAR_0[VAR_2->type]);
  else if (VAR_1[VAR_2->type])
   VAR_5 += FUNC_0(VAR_1[VAR_2->type]);
 }

 return VAR_5;
}
