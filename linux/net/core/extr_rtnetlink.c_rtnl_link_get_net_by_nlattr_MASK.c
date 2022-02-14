
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 struct net* FUNC_0 (int ) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 struct net* FUNC_1 (struct net*) ;
 struct net* FUNC_2 (struct net*,int ) ;
 int FUNC_3 (struct nlattr*) ;
 struct net* FUNC_4 (struct net*,struct nlattr**) ;

__attribute__((used)) static struct net *FUNC_5(struct net *VAR_4,
            struct nlattr *VAR_5[])
{
 struct net *VAR_6;

 if (VAR_5[VAR_2] || VAR_5[VAR_1])
  return FUNC_4(VAR_4, VAR_5);

 if (!VAR_5[VAR_3])
  return FUNC_1(VAR_4);

 VAR_6 = FUNC_2(VAR_4, FUNC_3(VAR_5[VAR_3]));
 if (!VAR_6)
  return FUNC_0(-VAR_0);

 return VAR_6;
}
