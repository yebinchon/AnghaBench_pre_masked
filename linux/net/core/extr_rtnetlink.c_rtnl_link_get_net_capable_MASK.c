
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct net {int user_ns; } ;


 int VAR_0 ;
 struct net* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct net*) ;
 int FUNC_2 (struct sk_buff const*,int ,int) ;
 int FUNC_3 (struct net*) ;
 struct net* FUNC_4 (struct net*,struct nlattr**) ;

__attribute__((used)) static struct net *FUNC_5(const struct sk_buff *VAR_1,
          struct net *VAR_2,
          struct nlattr *VAR_3[], int VAR_4)
{
 struct net *VAR_5;

 VAR_5 = FUNC_4(VAR_2, VAR_3);
 if (FUNC_1(VAR_5))
  return VAR_5;

 if (!FUNC_2(VAR_1, VAR_5->user_ns, VAR_4)) {
  FUNC_3(VAR_5);
  return FUNC_0(-VAR_0);
 }

 return VAR_5;
}
