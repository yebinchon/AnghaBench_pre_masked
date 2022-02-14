
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tnl_ptk_info {scalar_t__ proto; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int daddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (struct sk_buff*,struct tnl_ptk_info*,int) ;
 int FUNC_1 (struct sk_buff*,struct tnl_ptk_info*,int*,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*,int ,int ,int ) ;
 TYPE_1__* FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (struct sk_buff*,struct tnl_ptk_info*,int) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct sk_buff*) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (struct sk_buff*) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(struct sk_buff *VAR_6)
{
 struct tnl_ptk_info VAR_7;
 bool VAR_8 = 0;
 int VAR_9;
 VAR_9 = FUNC_1(VAR_6, &VAR_7, &VAR_8, FUNC_2(VAR_2), 0);
 if (VAR_9 < 0)
  goto drop;

 if (FUNC_10(VAR_7.proto == FUNC_2(VAR_0) ||
       VAR_7.proto == FUNC_2(VAR_1))) {
  if (FUNC_0(VAR_6, &VAR_7, VAR_9) == VAR_5)
   return 0;
  goto out;
 }

 if (FUNC_5(VAR_6, &VAR_7, VAR_9) == VAR_5)
  return 0;

out:
 FUNC_3(VAR_6, VAR_3, VAR_4, 0);
drop:
 FUNC_7(VAR_6);
 return 0;
}
