
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (char*,struct nlattr*,scalar_t__) ;

__attribute__((used)) static bool FUNC_2(struct nlattr *VAR_1, char *VAR_2)
{
 if (VAR_1)
  return FUNC_1(VAR_2, VAR_1, VAR_0) >= VAR_0;
 FUNC_0(VAR_2, 0, VAR_0);
 return 0;
}
