
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ ip_summed; int dev; int csum_complete_sw; } ;
typedef int __wsum ;
typedef int __sum16 ;
struct TYPE_2__ {int csum_valid; int csum; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ,struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*,int ,int ,int ) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*) ;
 scalar_t__ FUNC_8 (int) ;

__sum16 FUNC_9(struct sk_buff *VAR_1)
{
 __wsum VAR_2;
 __sum16 VAR_3;

 VAR_2 = FUNC_5(VAR_1, FUNC_7(VAR_1), FUNC_6(VAR_1), 0);


 VAR_3 = FUNC_2(FUNC_1(FUNC_0(VAR_1)->csum, VAR_2));

 if (FUNC_3(!VAR_3)) {
  if (FUNC_8(VAR_1->ip_summed == VAR_0) &&
      !VAR_1->csum_complete_sw)
   FUNC_4(VAR_1->dev, VAR_1);
 }

 FUNC_0(VAR_1)->csum = VAR_2;
 FUNC_0(VAR_1)->csum_valid = 1;

 return VAR_3;
}
