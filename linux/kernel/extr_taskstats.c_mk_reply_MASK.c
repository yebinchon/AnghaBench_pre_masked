
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct taskstats {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
typedef int pid ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct taskstats* FUNC_0 (struct nlattr*) ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 int FUNC_2 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_3 (struct sk_buff*,int) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int,int,int *) ;
 struct nlattr* FUNC_5 (struct sk_buff*,int ,int,int ) ;

__attribute__((used)) static struct taskstats *FUNC_6(struct sk_buff *VAR_5, int VAR_6, u32 VAR_7)
{
 struct nlattr *VAR_8, *VAR_9;
 int VAR_10;

 VAR_10 = (VAR_6 == VAR_3)
   ? VAR_0
   : VAR_1;

 VAR_8 = FUNC_3(VAR_5, VAR_10);
 if (!VAR_8)
  goto err;

 if (FUNC_4(VAR_5, VAR_6, sizeof(VAR_7), &VAR_7) < 0) {
  FUNC_1(VAR_5, VAR_8);
  goto err;
 }
 VAR_9 = FUNC_5(VAR_5, VAR_4,
    sizeof(struct taskstats), VAR_2);
 if (!VAR_9) {
  FUNC_1(VAR_5, VAR_8);
  goto err;
 }
 FUNC_2(VAR_5, VAR_8);

 return FUNC_0(VAR_9);
err:
 return ((void*)0);
}
