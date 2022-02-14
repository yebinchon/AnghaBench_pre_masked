
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tipc_nl_compat_msg {int rep; int req; } ;
struct tipc_name_table_query {int upbound; int lowbound; int type; int depth; } ;
struct nlattr {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_0 (int ) ;
 size_t FUNC_1 (struct nlattr*) ;
 int FUNC_2 (struct nlattr**,int ,struct nlattr*,int *,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,char*,int,int,int,size_t) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct tipc_nl_compat_msg *VAR_13,
       struct nlattr **VAR_14)
{
 char VAR_15[27];
 struct tipc_name_table_query *VAR_16;
 struct nlattr *VAR_17[VAR_2 + 1];
 struct nlattr *VAR_18[VAR_6 + 1];
 u32 VAR_19, VAR_20, VAR_21, VAR_22, VAR_23;
 static const char * const VAR_24[] = {"", " zone", " cluster",
       " node"};
 int VAR_25;

 if (!VAR_14[VAR_1])
  return -VAR_0;

 VAR_25 = FUNC_2(VAR_17, VAR_2,
       VAR_14[VAR_1], ((void*)0),
       ((void*)0));
 if (VAR_25)
  return VAR_25;

 if (!VAR_17[VAR_3])
  return -VAR_0;

 VAR_25 = FUNC_2(VAR_18, VAR_6,
       VAR_17[VAR_3], ((void*)0),
       ((void*)0));
 if (VAR_25)
  return VAR_25;

 VAR_16 = (struct tipc_name_table_query *)FUNC_0(VAR_13->req);

 VAR_20 = FUNC_3(VAR_16->depth);
 VAR_21 = FUNC_3(VAR_16->type);
 VAR_22 = FUNC_3(VAR_16->lowbound);
 VAR_23 = FUNC_3(VAR_16->upbound);

 if (!(VAR_20 & VAR_12) &&
     (VAR_21 != FUNC_1(VAR_18[VAR_10])))
  return 0;
 if (VAR_22 && (VAR_22 > FUNC_1(VAR_18[VAR_11])))
  return 0;
 if (VAR_23 && (VAR_23 < FUNC_1(VAR_18[VAR_5])))
  return 0;

 FUNC_7(VAR_13->rep, "%-10u ",
    FUNC_1(VAR_18[VAR_10]));

 if (VAR_20 == 1)
  goto out;

 FUNC_7(VAR_13->rep, "%-10u %-10u ",
    FUNC_1(VAR_18[VAR_5]),
    FUNC_1(VAR_18[VAR_11]));

 if (VAR_20 == 2)
  goto out;

 VAR_19 = FUNC_1(VAR_18[VAR_7]);
 FUNC_4(VAR_15, "<%u.%u.%u:%u>", FUNC_8(VAR_19), FUNC_5(VAR_19),
  FUNC_6(VAR_19), FUNC_1(VAR_18[VAR_8]));
 FUNC_7(VAR_13->rep, "%-26s ", VAR_15);

 if (VAR_20 == 3)
  goto out;

 FUNC_7(VAR_13->rep, "%-10u %s",
    FUNC_1(VAR_18[VAR_4]),
    VAR_24[FUNC_1(VAR_18[VAR_9])]);
out:
 FUNC_7(VAR_13->rep, "\n");

 return 0;
}
