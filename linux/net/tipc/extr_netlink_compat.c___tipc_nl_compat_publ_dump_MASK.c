
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tipc_nl_compat_msg {int rep; } ;
struct nlattr {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ FUNC_0 (struct nlattr*) ;
 int FUNC_1 (struct nlattr**,int ,struct nlattr*,int *,int *) ;
 int FUNC_2 (int ,char*,scalar_t__,scalar_t__,...) ;

__attribute__((used)) static int FUNC_3(struct tipc_nl_compat_msg *VAR_6,
          struct nlattr **VAR_7)
{
 u32 VAR_8, VAR_9, VAR_10;
 struct nlattr *VAR_11[VAR_3 + 1];
 int VAR_12;

 if (!VAR_7[VAR_1])
  return -VAR_0;

 VAR_12 = FUNC_1(VAR_11, VAR_3,
       VAR_7[VAR_1], ((void*)0), ((void*)0));
 if (VAR_12)
  return VAR_12;

 VAR_8 = FUNC_0(VAR_11[VAR_4]);
 VAR_9 = FUNC_0(VAR_11[VAR_2]);
 VAR_10 = FUNC_0(VAR_11[VAR_5]);

 if (VAR_9 == VAR_10)
  FUNC_2(VAR_6->rep, " {%u,%u}", VAR_8, VAR_9);
 else
  FUNC_2(VAR_6->rep, " {%u,%u,%u}", VAR_8, VAR_9, VAR_10);

 return 0;
}
