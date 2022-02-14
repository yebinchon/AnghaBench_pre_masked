
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nlattr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct nlattr**,int,struct nlattr*,int ,int *) ;

__attribute__((used)) static int FUNC_1(struct nlattr *VAR_4, u32 *VAR_5)
{
 struct nlattr *VAR_6[VAR_2 + 1];
 int VAR_7;

 *VAR_5 = 0;

 if (!VAR_4)
  return -VAR_0;

 if (FUNC_0(VAR_6, VAR_2, VAR_4, VAR_3, ((void*)0)))
  return -VAR_0;

 for (VAR_7 = 1; VAR_7 <= VAR_2; VAR_7++)
  if (VAR_6[VAR_7])
   *VAR_5 |= (1<<VAR_7);

 *VAR_5 |= VAR_1;

 return 0;
}
