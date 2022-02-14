
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int ) ;
 int FUNC_1 (char*,char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int FUNC_2 (struct nlattr*) ;
 int FUNC_3 (struct nlattr*) ;
 scalar_t__ FUNC_4 (struct nlattr**,int ,struct nlattr*,int *) ;

__attribute__((used)) static int FUNC_5(struct nlattr *VAR_7)
{
 struct nlattr *VAR_8[VAR_4 + 1];

 if (FUNC_4(VAR_8, VAR_4, VAR_7, ((void*)0)) < 0)
  return -VAR_0;

 if (!VAR_8[VAR_6])
  return -VAR_0;

 VAR_2;
 if (VAR_8[VAR_5])
  FUNC_0("name", "%s",
        FUNC_2(VAR_8[VAR_5]));
 if (VAR_8[VAR_3])
  FUNC_1("id", " id %u",
         FUNC_3(VAR_8[VAR_3]));
 VAR_1;
 return 0;
}
