
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sw_flow_key {int dummy; } ;
struct sk_buff {int dummy; } ;
struct sample_arg {scalar_t__ probability; int exec; } ;
typedef struct nlattr const nlattr ;
struct datapath {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct datapath*,struct sk_buff*,struct sw_flow_key*,int ,struct nlattr const*,int,int,int) ;
 int FUNC_1 (struct sk_buff*) ;
 void* FUNC_2 (struct nlattr const*) ;
 int FUNC_3 (struct nlattr const*) ;
 struct nlattr const* FUNC_4 (struct nlattr const*,int*) ;
 scalar_t__ FUNC_5 () ;

__attribute__((used)) static int FUNC_6(struct datapath *VAR_1, struct sk_buff *VAR_2,
    struct sw_flow_key *VAR_3, const struct nlattr *VAR_4,
    bool VAR_5)
{
 struct nlattr *VAR_6;
 struct nlattr *VAR_7;
 int VAR_8 = FUNC_3(VAR_4);
 const struct sample_arg *VAR_9;
 bool VAR_10;


 VAR_7 = FUNC_2(VAR_4);
 VAR_9 = FUNC_2(VAR_7);
 VAR_6 = FUNC_4(VAR_7, &VAR_8);

 if ((VAR_9->probability != VAR_0) &&
     (!VAR_9->probability || FUNC_5() > VAR_9->probability)) {
  if (VAR_5)
   FUNC_1(VAR_2);
  return 0;
 }

 VAR_10 = !VAR_9->exec;
 return FUNC_0(VAR_1, VAR_2, VAR_3, 0, VAR_6, VAR_8, VAR_5,
        VAR_10);
}
