
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ ip_summed; int csum_valid; int dev; int csum_complete_sw; int csum; } ;
typedef int __sum16 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,int ,int,int ) ;
 int FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (int) ;

__sum16 FUNC_6(struct sk_buff *VAR_1, int VAR_2)
{
 __sum16 VAR_3;

 VAR_3 = FUNC_0(FUNC_3(VAR_1, 0, VAR_2, VAR_1->csum));

 if (FUNC_1(!VAR_3)) {
  if (FUNC_5(VAR_1->ip_summed == VAR_0) &&
      !VAR_1->csum_complete_sw)
   FUNC_2(VAR_1->dev, VAR_1);
 }
 if (!FUNC_4(VAR_1))
  VAR_1->csum_valid = !VAR_3;
 return VAR_3;
}
