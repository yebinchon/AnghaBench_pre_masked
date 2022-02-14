
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_node_info {void* up; void* addr; } ;
struct tipc_nl_compat_msg {int rep; } ;
struct nlattr {int dummy; } ;
typedef int node_info ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct nlattr*) ;
 int FUNC_2 (struct nlattr*) ;
 int FUNC_3 (struct nlattr**,int ,struct nlattr*,int *,int *) ;
 int FUNC_4 (int ,int ,struct tipc_node_info*,int) ;

__attribute__((used)) static int FUNC_5(struct tipc_nl_compat_msg *VAR_6,
        struct nlattr **VAR_7)
{
 struct tipc_node_info VAR_8;
 struct nlattr *VAR_9[VAR_3 + 1];
 int VAR_10;

 if (!VAR_7[VAR_1])
  return -VAR_0;

 VAR_10 = FUNC_3(VAR_9, VAR_3,
       VAR_7[VAR_1], ((void*)0), ((void*)0));
 if (VAR_10)
  return VAR_10;

 VAR_8.addr = FUNC_0(FUNC_2(VAR_9[VAR_2]));
 VAR_8.up = FUNC_0(FUNC_1(VAR_9[VAR_4]));

 return FUNC_4(VAR_6->rep, VAR_5, &VAR_8,
       sizeof(VAR_8));
}
