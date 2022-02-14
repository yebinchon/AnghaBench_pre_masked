
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sw_flow_key {int dummy; } ;
struct sw_flow_actions {int dummy; } ;
struct nlattr {int dummy; } ;
struct net {int dummy; } ;
struct check_pkt_len_arg {int exec_for_lesser_equal; int exec_for_greater; scalar_t__ pkt_len; } ;
typedef int arg ;
typedef int __be16 ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (struct net*,struct nlattr const*,struct sw_flow_key const*,struct sw_flow_actions**,int ,int ,int) ;
 int FUNC_1 (struct nlattr const*) ;
 int FUNC_2 (struct sw_flow_actions*,int) ;
 int FUNC_3 (struct sw_flow_actions**,size_t,int) ;
 int VAR_7 ;
 int FUNC_4 (struct nlattr const*) ;
 scalar_t__ FUNC_5 (struct nlattr*) ;
 int FUNC_6 (struct nlattr const*) ;
 int FUNC_7 (struct nlattr**,int ,int ,int ,int ,int *) ;
 int FUNC_8 (struct sw_flow_actions**,int ,struct check_pkt_len_arg*,int,int) ;

__attribute__((used)) static int FUNC_9(struct net *VAR_8,
        const struct nlattr *VAR_9,
        const struct sw_flow_key *VAR_10,
        struct sw_flow_actions **VAR_11,
        __be16 VAR_12, __be16 VAR_13,
        bool VAR_14, bool VAR_15)
{
 const struct nlattr *VAR_16, *VAR_17;
 struct nlattr *VAR_18[VAR_5 + 1];
 struct check_pkt_len_arg VAR_19;
 int VAR_20;
 int VAR_21, VAR_22;

 VAR_22 = FUNC_7(VAR_18, VAR_5,
       FUNC_4(VAR_9), FUNC_6(VAR_9),
       VAR_7, ((void*)0));
 if (VAR_22)
  return VAR_22;

 if (!VAR_18[VAR_6] ||
     !FUNC_5(VAR_18[VAR_6]))
  return -VAR_0;

 VAR_17 = VAR_18[VAR_3];
 VAR_16 = VAR_18[VAR_2];


 if (!VAR_16 || !VAR_17)
  return -VAR_0;


 VAR_21 = FUNC_3(VAR_11, VAR_1,
     VAR_14);
 if (VAR_21 < 0)
  return VAR_21;

 VAR_19.pkt_len = FUNC_5(VAR_18[VAR_6]);
 VAR_19.exec_for_lesser_equal =
  VAR_15 || !FUNC_1(VAR_17);
 VAR_19.exec_for_greater =
  VAR_15 || !FUNC_1(VAR_16);

 VAR_22 = FUNC_8(VAR_11, VAR_4, &VAR_19,
     sizeof(VAR_19), VAR_14);
 if (VAR_22)
  return VAR_22;

 VAR_20 = FUNC_3(VAR_11,
  VAR_3, VAR_14);
 if (VAR_20 < 0)
  return VAR_20;

 VAR_22 = FUNC_0(VAR_8, VAR_17, VAR_10, VAR_11,
         VAR_12, VAR_13, VAR_14);

 if (VAR_22)
  return VAR_22;

 FUNC_2(*VAR_11, VAR_20);

 VAR_20 = FUNC_3(VAR_11,
  VAR_2, VAR_14);
 if (VAR_20 < 0)
  return VAR_20;

 VAR_22 = FUNC_0(VAR_8, VAR_16, VAR_10, VAR_11,
         VAR_12, VAR_13, VAR_14);

 if (VAR_22)
  return VAR_22;

 FUNC_2(*VAR_11, VAR_20);
 FUNC_2(*VAR_11, VAR_21);
 return 0;
}
