
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nlattr const*) ;
 int FUNC_1 (struct nlattr const*) ;
 int FUNC_2 (struct sk_buff*,struct nlattr*) ;
 int FUNC_3 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_4 (struct sk_buff*,int ) ;
 int FUNC_5 (int ,int,struct sk_buff*) ;

__attribute__((used)) static int FUNC_6(const struct nlattr *VAR_2,
    struct sk_buff *VAR_3)
{
 struct nlattr *VAR_4;
 int VAR_5 = 0, VAR_6 = FUNC_1(VAR_2);

 VAR_4 = FUNC_4(VAR_3, VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_5 = FUNC_5(FUNC_0(VAR_2), VAR_6, VAR_3);

 if (VAR_5)
  FUNC_2(VAR_3, VAR_4);
 else
  FUNC_3(VAR_3, VAR_4);

 return VAR_5;
}
