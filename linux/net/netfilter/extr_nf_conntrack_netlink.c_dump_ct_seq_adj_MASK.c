
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct nf_ct_seqadj {int offset_after; int offset_before; int correction_pos; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_2 (struct sk_buff*,int) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int
FUNC_4(struct sk_buff *VAR_3, const struct nf_ct_seqadj *VAR_4, int VAR_5)
{
 struct nlattr *VAR_6;

 VAR_6 = FUNC_2(VAR_3, VAR_5);
 if (!VAR_6)
  goto nla_put_failure;

 if (FUNC_3(VAR_3, VAR_0,
    FUNC_0(VAR_4->correction_pos)) ||
     FUNC_3(VAR_3, VAR_2,
    FUNC_0(VAR_4->offset_before)) ||
     FUNC_3(VAR_3, VAR_1,
    FUNC_0(VAR_4->offset_after)))
  goto nla_put_failure;

 FUNC_1(VAR_3, VAR_6);

 return 0;

nla_put_failure:
 return -1;
}
