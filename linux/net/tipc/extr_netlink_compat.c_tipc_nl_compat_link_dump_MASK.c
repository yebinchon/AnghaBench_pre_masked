
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_nl_compat_msg {int rep; } ;
struct tipc_link_info {int str; int up; int dest; } ;
struct nlattr {int dummy; } ;
typedef int link_info ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct nlattr*) ;
 int FUNC_2 (struct nlattr**,int ,struct nlattr*,int *,int *) ;
 int FUNC_3 (int ,struct nlattr*,int ) ;
 int FUNC_4 (int ,int ,struct tipc_link_info*,int) ;

__attribute__((used)) static int FUNC_5(struct tipc_nl_compat_msg *VAR_8,
        struct nlattr **VAR_9)
{
 struct nlattr *VAR_10[VAR_4 + 1];
 struct tipc_link_info VAR_11;
 int VAR_12;

 if (!VAR_9[VAR_2])
  return -VAR_0;

 VAR_12 = FUNC_2(VAR_10, VAR_4,
       VAR_9[VAR_2], ((void*)0), ((void*)0));
 if (VAR_12)
  return VAR_12;

 VAR_11.dest = FUNC_1(VAR_10[VAR_3]);
 VAR_11.up = FUNC_0(FUNC_1(VAR_10[VAR_6]));
 FUNC_3(VAR_11.str, VAR_10[VAR_5],
      VAR_1);

 return FUNC_4(VAR_8->rep, VAR_7,
       &VAR_11, sizeof(VAR_11));
}
