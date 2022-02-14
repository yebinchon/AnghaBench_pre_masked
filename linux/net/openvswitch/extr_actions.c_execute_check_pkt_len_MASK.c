
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sw_flow_key {int dummy; } ;
struct sk_buff {scalar_t__ len; } ;
struct nlattr {int dummy; } ;
struct datapath {int dummy; } ;
struct check_pkt_len_arg {scalar_t__ pkt_len; int exec_for_greater; int exec_for_lesser_equal; } ;


 int FUNC_0 (struct datapath*,struct sk_buff*,struct sw_flow_key*,int ,void*,int,int,int) ;
 void* FUNC_1 (struct nlattr const*) ;
 int FUNC_2 (struct nlattr const*) ;
 struct nlattr* FUNC_3 (struct nlattr const*,int*) ;

__attribute__((used)) static int FUNC_4(struct datapath *VAR_0, struct sk_buff *VAR_1,
     struct sw_flow_key *VAR_2,
     const struct nlattr *VAR_3, bool VAR_4)
{
 const struct nlattr *VAR_5, *VAR_6;
 const struct check_pkt_len_arg *VAR_7;
 int VAR_8 = FUNC_2(VAR_3);
 bool VAR_9;




 VAR_6 = FUNC_1(VAR_3);
 VAR_7 = FUNC_1(VAR_6);

 if (VAR_1->len <= VAR_7->pkt_len) {



  VAR_5 = FUNC_3(VAR_6, &VAR_8);
  VAR_9 = !VAR_7->exec_for_lesser_equal;
 } else {



  VAR_5 = FUNC_3(VAR_6, &VAR_8);
  VAR_5 = FUNC_3(VAR_5, &VAR_8);
  VAR_9 = !VAR_7->exec_for_greater;
 }

 return FUNC_0(VAR_0, VAR_1, VAR_2, 0, FUNC_1(VAR_5),
        FUNC_2(VAR_5), VAR_4, VAR_9);
}
