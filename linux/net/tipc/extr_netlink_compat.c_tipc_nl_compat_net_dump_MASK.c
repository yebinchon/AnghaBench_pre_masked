
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_nl_compat_msg {int rep; } ;
struct nlattr {int dummy; } ;
typedef int id ;
typedef int __be32 ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct nlattr*) ;
 int FUNC_2 (struct nlattr**,int ,struct nlattr*,int *,int *) ;
 int FUNC_3 (int ,int ,int *,int) ;

__attribute__((used)) static int FUNC_4(struct tipc_nl_compat_msg *VAR_5,
       struct nlattr **VAR_6)
{
 __be32 VAR_7;
 struct nlattr *VAR_8[VAR_3 + 1];
 int VAR_9;

 if (!VAR_6[VAR_1])
  return -VAR_0;

 VAR_9 = FUNC_2(VAR_8, VAR_3,
       VAR_6[VAR_1], ((void*)0), ((void*)0));
 if (VAR_9)
  return VAR_9;

 VAR_7 = FUNC_0(FUNC_1(VAR_8[VAR_2]));

 return FUNC_3(VAR_5->rep, VAR_4, &VAR_7, sizeof(VAR_7));
}
