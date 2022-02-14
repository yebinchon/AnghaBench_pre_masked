
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sw_flow_actions {int dummy; } ;
struct nlattr {int nla_type; int nla_len; } ;


 scalar_t__ FUNC_0 (struct nlattr*) ;
 int FUNC_1 (int ,void*,int) ;
 int FUNC_2 (unsigned char*,int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct nlattr*) ;
 int FUNC_5 (int) ;
 struct nlattr* FUNC_6 (struct sw_flow_actions**,int,int) ;

__attribute__((used)) static struct nlattr *FUNC_7(struct sw_flow_actions **VAR_0,
       int VAR_1, void *VAR_2, int VAR_3, bool VAR_4)
{
 struct nlattr *VAR_5;

 VAR_5 = FUNC_6(VAR_0, FUNC_3(VAR_3), VAR_4);
 if (FUNC_0(VAR_5))
  return VAR_5;

 VAR_5->nla_type = VAR_1;
 VAR_5->nla_len = FUNC_3(VAR_3);

 if (VAR_2)
  FUNC_1(FUNC_4(VAR_5), VAR_2, VAR_3);
 FUNC_2((unsigned char *) VAR_5 + VAR_5->nla_len, 0, FUNC_5(VAR_3));

 return VAR_5;
}
