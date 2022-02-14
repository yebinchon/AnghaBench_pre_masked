
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct sample_arg {int probability; } ;
typedef struct nlattr const nlattr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (struct nlattr const*) ;
 int FUNC_1 (struct nlattr const*) ;
 int FUNC_2 (struct sk_buff*,struct nlattr const*) ;
 int FUNC_3 (struct sk_buff*,struct nlattr const*) ;
 struct nlattr const* FUNC_4 (struct sk_buff*,int ) ;
 struct nlattr const* FUNC_5 (struct nlattr const*,int*) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,int ) ;
 int FUNC_7 (struct nlattr const*,int,struct sk_buff*) ;

__attribute__((used)) static int FUNC_8(const struct nlattr *VAR_4,
     struct sk_buff *VAR_5)
{
 struct nlattr *VAR_6, *VAR_7 = ((void*)0), *VAR_8;
 int VAR_9 = 0, VAR_10 = FUNC_1(VAR_4);
 const struct sample_arg *VAR_11;
 struct nlattr *VAR_12;

 VAR_6 = FUNC_4(VAR_5, VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_8 = FUNC_0(VAR_4);
 VAR_11 = FUNC_0(VAR_8);
 VAR_12 = FUNC_5(VAR_8, &VAR_10);

 if (FUNC_6(VAR_5, VAR_3, VAR_11->probability)) {
  VAR_9 = -VAR_0;
  goto out;
 }

 VAR_7 = FUNC_4(VAR_5, VAR_2);
 if (!VAR_7) {
  VAR_9 = -VAR_0;
  goto out;
 }

 VAR_9 = FUNC_7(VAR_12, VAR_10, VAR_5);

out:
 if (VAR_9) {
  FUNC_2(VAR_5, VAR_7);
  FUNC_2(VAR_5, VAR_6);
 } else {
  FUNC_3(VAR_5, VAR_7);
  FUNC_3(VAR_5, VAR_6);
 }

 return VAR_9;
}
