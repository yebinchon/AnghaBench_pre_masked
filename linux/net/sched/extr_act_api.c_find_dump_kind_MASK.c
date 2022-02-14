
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_1 (struct nlattr*) ;
 int FUNC_2 (struct nlattr*) ;
 scalar_t__ FUNC_3 (struct nlattr**,int ,int ,int ,int *,int *) ;
 scalar_t__ FUNC_4 (struct nlattr**,int ,struct nlattr*,int ,int *) ;
 int VAR_4 ;

__attribute__((used)) static struct nlattr *FUNC_5(struct nlattr **VAR_5)
{
 struct nlattr *VAR_6, *VAR_7[VAR_1 + 1];
 struct nlattr *VAR_8[VAR_2 + 1];
 struct nlattr *VAR_9;

 VAR_6 = VAR_5[VAR_3];
 if (VAR_6 == ((void*)0))
  return ((void*)0);

 if (FUNC_3(VAR_8, VAR_2, FUNC_1(VAR_6), FUNC_0(FUNC_2(VAR_6)), ((void*)0), ((void*)0)) < 0)
  return ((void*)0);

 if (VAR_8[1] == ((void*)0))
  return ((void*)0);
 if (FUNC_4(VAR_7, VAR_1, VAR_8[1], VAR_4, ((void*)0)) < 0)
  return ((void*)0);
 VAR_9 = VAR_7[VAR_0];

 return VAR_9;
}
