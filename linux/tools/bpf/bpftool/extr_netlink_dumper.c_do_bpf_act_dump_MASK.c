
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*) ;
 int VAR_1 ;
 int FUNC_2 (struct nlattr*) ;
 scalar_t__ FUNC_3 (struct nlattr**,int,struct nlattr*,int *) ;

__attribute__((used)) static int FUNC_4(struct nlattr *VAR_2)
{
 struct nlattr *VAR_3[VAR_1 + 1];
 int VAR_4, VAR_5;

 if (FUNC_3(VAR_3, VAR_1, VAR_2, ((void*)0)) < 0)
  return -VAR_0;

 FUNC_1("act", " %s [");
 for (VAR_4 = 0; VAR_4 <= VAR_1; VAR_4++) {
  VAR_5 = FUNC_2(VAR_3[VAR_4]);
  if (VAR_5)
   break;
 }
 FUNC_0("] ");

 return VAR_5;
}
