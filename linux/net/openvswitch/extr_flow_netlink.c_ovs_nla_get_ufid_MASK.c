
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sw_flow_id {int ufid_len; int ufid; } ;
struct nlattr {int dummy; } ;


 int FUNC_0 (struct nlattr const*,int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct nlattr const*) ;

bool FUNC_3(struct sw_flow_id *VAR_0, const struct nlattr *VAR_1,
        bool VAR_2)
{
 VAR_0->ufid_len = FUNC_0(VAR_1, VAR_2);
 if (VAR_0->ufid_len)
  FUNC_1(VAR_0->ufid, FUNC_2(VAR_1), VAR_0->ufid_len);

 return VAR_0->ufid_len;
}
