
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ ip_summed; int csum_complete_sw; int csum_valid; int csum; int dev; int len; } ;
typedef int __wsum ;
typedef int __sum16 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,int ,int ,int ) ;
 int FUNC_5 (struct sk_buff*) ;
 scalar_t__ FUNC_6 (int) ;

__sum16 FUNC_7(struct sk_buff *VAR_1)
{
 __wsum VAR_2;
 __sum16 VAR_3;

 VAR_2 = FUNC_4(VAR_1, 0, VAR_1->len, 0);

 VAR_3 = FUNC_1(FUNC_0(VAR_1->csum, VAR_2));







 if (FUNC_2(!VAR_3)) {
  if (FUNC_6(VAR_1->ip_summed == VAR_0) &&
      !VAR_1->csum_complete_sw)
   FUNC_3(VAR_1->dev, VAR_1);
 }

 if (!FUNC_5(VAR_1)) {

  VAR_1->csum = VAR_2;
  VAR_1->ip_summed = VAR_0;
  VAR_1->csum_complete_sw = 1;
  VAR_1->csum_valid = !VAR_3;
 }

 return VAR_3;
}
