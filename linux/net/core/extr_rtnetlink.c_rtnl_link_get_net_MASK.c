
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct net {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 struct net* FUNC_0 (struct net*) ;
 struct net* FUNC_1 (int ) ;
 struct net* FUNC_2 (int ) ;
 int FUNC_3 (struct nlattr*) ;

struct net *FUNC_4(struct net *VAR_2, struct nlattr *VAR_3[])
{
 struct net *VAR_4;



 if (VAR_3[VAR_1])
  VAR_4 = FUNC_2(FUNC_3(VAR_3[VAR_1]));
 else if (VAR_3[VAR_0])
  VAR_4 = FUNC_1(FUNC_3(VAR_3[VAR_0]));
 else
  VAR_4 = FUNC_0(VAR_2);
 return VAR_4;
}
