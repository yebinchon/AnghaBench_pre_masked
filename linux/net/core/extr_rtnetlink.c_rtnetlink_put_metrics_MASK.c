
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct TYPE_2__ {int* metrics; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_1__ VAR_9 ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 int FUNC_2 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_3 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int,char*) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int,int) ;
 char* FUNC_6 (int,char*) ;

int FUNC_7(struct sk_buff *VAR_10, u32 *VAR_11)
{
 struct nlattr *VAR_12;
 int VAR_13, VAR_14 = 0;


 if (VAR_11 == VAR_9.metrics)
  return 0;

 VAR_12 = FUNC_3(VAR_10, VAR_7);
 if (VAR_12 == ((void*)0))
  return -VAR_2;

 for (VAR_13 = 0; VAR_13 < VAR_6; VAR_13++) {
  if (VAR_11[VAR_13]) {
   if (VAR_13 == VAR_3 - 1) {
    char VAR_15[VAR_8], *VAR_16;

    VAR_16 = FUNC_6(VAR_11[VAR_13], VAR_15);
    if (!VAR_16)
     continue;
    if (FUNC_4(VAR_10, VAR_13 + 1, VAR_16))
     goto nla_put_failure;
   } else if (VAR_13 == VAR_4 - 1) {
    u32 VAR_17 = VAR_11[VAR_13] & VAR_5;

    if (!VAR_17)
     continue;
    FUNC_0(VAR_5 & VAR_0);
    if (FUNC_5(VAR_10, VAR_13 + 1, VAR_17))
     goto nla_put_failure;
   } else {
    if (FUNC_5(VAR_10, VAR_13 + 1, VAR_11[VAR_13]))
     goto nla_put_failure;
   }
   VAR_14++;
  }
 }

 if (!VAR_14) {
  FUNC_1(VAR_10, VAR_12);
  return 0;
 }

 return FUNC_2(VAR_10, VAR_12);

nla_put_failure:
 FUNC_1(VAR_10, VAR_12);
 return -VAR_1;
}
