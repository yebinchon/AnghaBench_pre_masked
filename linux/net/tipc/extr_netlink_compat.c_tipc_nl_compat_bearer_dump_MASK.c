
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_nl_compat_msg {int rep; } ;
struct nlattr {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct nlattr*) ;
 int FUNC_1 (struct nlattr*) ;
 int FUNC_2 (struct nlattr**,int ,struct nlattr*,int *,int *) ;
 int FUNC_3 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct tipc_nl_compat_msg *VAR_5,
          struct nlattr **VAR_6)
{
 struct nlattr *VAR_7[VAR_2 + 1];
 int VAR_8;

 if (!VAR_6[VAR_1])
  return -VAR_0;

 VAR_8 = FUNC_2(VAR_7, VAR_2,
       VAR_6[VAR_1], ((void*)0), ((void*)0));
 if (VAR_8)
  return VAR_8;

 return FUNC_3(VAR_5->rep, VAR_4,
       FUNC_0(VAR_7[VAR_3]),
       FUNC_1(VAR_7[VAR_3]));
}
