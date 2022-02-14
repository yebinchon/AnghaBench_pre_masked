
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct in6_addr {int dummy; } ;


 struct in6_addr* FUNC_0 (struct nlattr*) ;
 scalar_t__ FUNC_1 (struct nlattr*,struct in6_addr*,int) ;

__attribute__((used)) static struct in6_addr *FUNC_2(struct nlattr *VAR_0, struct nlattr *VAR_1,
         struct in6_addr **VAR_2)
{
 struct in6_addr *VAR_3 = ((void*)0);

 *VAR_2 = ((void*)0);

 if (VAR_0)
  VAR_3 = FUNC_0(VAR_0);

 if (VAR_1) {
  if (VAR_3 && FUNC_1(VAR_1, VAR_3, sizeof(*VAR_3)))
   *VAR_2 = VAR_3;
  VAR_3 = FUNC_0(VAR_1);
 }

 return VAR_3;
}
