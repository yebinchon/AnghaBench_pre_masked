
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int ) ;
 int FUNC_1 (char*,char*,int ) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_2 (struct nlattr*) ;
 int FUNC_3 (struct nlattr*) ;
 int FUNC_4 (struct nlattr*) ;
 scalar_t__ FUNC_5 (struct nlattr**,int ,struct nlattr*,int *) ;

__attribute__((used)) static int FUNC_6(struct nlattr *VAR_5)
{
 struct nlattr *VAR_6[VAR_3 + 1];
 int VAR_7;

 if (FUNC_5(VAR_6, VAR_3, VAR_5, ((void*)0)) < 0)
  return -VAR_0;

 if (VAR_6[VAR_4])
  FUNC_0("name", " %s",
        FUNC_3(VAR_6[VAR_4]));
 if (VAR_6[VAR_2])
  FUNC_1("id", " id %u",
         FUNC_4(VAR_6[VAR_2]));
 if (VAR_6[VAR_1]) {
  VAR_7 = FUNC_2(VAR_6[VAR_1]);
  if (VAR_7)
   return VAR_7;
 }

 return 0;
}
