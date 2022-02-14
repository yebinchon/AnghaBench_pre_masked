
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcf_result {int classid; } ;
struct tcf_proto {int dummy; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;




 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct sk_buff*,struct tcf_proto*,struct tcf_result*,int) ;

__attribute__((used)) static bool FUNC_2(struct sk_buff *VAR_2, struct tcf_proto *VAR_3,
    int *VAR_4, u32 *VAR_5)
{
 struct tcf_result VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_2, VAR_3, &VAR_6, 0);
 if (VAR_7 >= 0) {
  *VAR_5 = FUNC_0(VAR_6.classid);
  return 1;
 }
 return 0;
}
