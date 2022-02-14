
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_0 (struct nlattr*) ;
 int FUNC_1 (struct nlattr**,int ,struct nlattr const*,int ,int *) ;

__attribute__((used)) static int FUNC_2(const struct nlattr *VAR_5, char **VAR_6,
    struct nlattr **VAR_7)
{
 int VAR_8;
 struct nlattr *VAR_9[VAR_1+1];

 VAR_8 = FUNC_1(VAR_9, VAR_1, VAR_5,
       VAR_4, ((void*)0));
 if (VAR_8 < 0)
  return VAR_8;

 if (!VAR_9[VAR_2])
  return -VAR_3;

 *VAR_6 = FUNC_0(VAR_9[VAR_2]);

 if (VAR_9[VAR_0])
  *VAR_7 = VAR_9[VAR_0];

 return 0;
}
