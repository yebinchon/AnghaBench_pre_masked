
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tipc_nl_compat_msg {int rep; } ;
struct nlattr {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 int FUNC_0 (struct nlattr*) ;
 int FUNC_1 (struct nlattr**,int ,struct nlattr*,int *,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct tipc_nl_compat_msg*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct tipc_nl_compat_msg *VAR_12,
      struct nlattr **VAR_13)
{
 int VAR_14;
 u32 VAR_15;
 struct nlattr *VAR_16[VAR_10 + 1];

 if (!VAR_13[VAR_7])
  return -VAR_0;

 VAR_14 = FUNC_1(VAR_16, VAR_10,
       VAR_13[VAR_7], ((void*)0), ((void*)0));
 if (VAR_14)
  return VAR_14;

 VAR_15 = FUNC_0(VAR_16[VAR_11]);
 FUNC_5(VAR_12->rep, "%u:", VAR_15);

 if (VAR_16[VAR_8]) {
  u32 VAR_17;
  struct nlattr *VAR_18[VAR_3 + 1];

  VAR_14 = FUNC_1(VAR_18, VAR_3,
        VAR_16[VAR_8],
        ((void*)0), ((void*)0));

  if (VAR_14)
   return VAR_14;

  VAR_17 = FUNC_0(VAR_18[VAR_4]);
  FUNC_5(VAR_12->rep, "  connected to <%u.%u.%u:%u>",
     FUNC_6(VAR_17),
     FUNC_2(VAR_17),
     FUNC_4(VAR_17),
     FUNC_0(VAR_18[VAR_5]));

  if (VAR_18[VAR_1])
   FUNC_5(VAR_12->rep, " via {%u,%u}\n",
      FUNC_0(VAR_18[VAR_6]),
      FUNC_0(VAR_18[VAR_2]));
  else
   FUNC_5(VAR_12->rep, "\n");
 } else if (VAR_16[VAR_9]) {
  FUNC_5(VAR_12->rep, " bound to");

  VAR_14 = FUNC_3(VAR_12, VAR_15);
  if (VAR_14)
   return VAR_14;
 }
 FUNC_5(VAR_12->rep, "\n");

 return 0;
}
