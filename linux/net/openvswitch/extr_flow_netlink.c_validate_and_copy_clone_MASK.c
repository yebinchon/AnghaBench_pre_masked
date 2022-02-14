
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sw_flow_key {int dummy; } ;
struct sw_flow_actions {int dummy; } ;
struct nlattr {int dummy; } ;
struct net {int dummy; } ;
typedef int exec ;
typedef int __be16 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct net*,struct nlattr const*,struct sw_flow_key const*,struct sw_flow_actions**,int ,int ,int) ;
 int FUNC_1 (struct nlattr const*) ;
 int FUNC_2 (struct sw_flow_actions*,int) ;
 int FUNC_3 (struct sw_flow_actions**,int ,int) ;
 scalar_t__ FUNC_4 (struct nlattr const*) ;
 int FUNC_5 (struct sw_flow_actions**,int ,int*,int,int) ;

__attribute__((used)) static int FUNC_6(struct net *VAR_4,
       const struct nlattr *VAR_5,
       const struct sw_flow_key *VAR_6,
       struct sw_flow_actions **VAR_7,
       __be16 VAR_8, __be16 VAR_9,
       bool VAR_10, bool VAR_11)
{
 int VAR_12, VAR_13;
 u32 VAR_14;

 if (FUNC_4(VAR_5) && FUNC_4(VAR_5) < VAR_1)
  return -VAR_0;

 VAR_12 = FUNC_3(VAR_7, VAR_2, VAR_10);
 if (VAR_12 < 0)
  return VAR_12;

 VAR_14 = VAR_11 || !FUNC_1(VAR_5);

 VAR_13 = FUNC_5(VAR_7, VAR_3, &VAR_14,
     sizeof(VAR_14), VAR_10);
 if (VAR_13)
  return VAR_13;

 VAR_13 = FUNC_0(VAR_4, VAR_5, VAR_6, VAR_7,
         VAR_8, VAR_9, VAR_10);
 if (VAR_13)
  return VAR_13;

 FUNC_2(*VAR_7, VAR_12);

 return 0;
}
