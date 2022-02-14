
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ ip_summed; scalar_t__ data; scalar_t__ csum_offset; scalar_t__ len; } ;
typedef int __wsum ;
typedef int __sum16 ;
struct TYPE_2__ {int gso_size; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*,int ,int ,int ) ;
 int FUNC_4 (struct sk_buff*,int,scalar_t__,int ) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,int) ;
 scalar_t__ FUNC_7 (struct sk_buff*) ;
 scalar_t__ FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*) ;
 TYPE_1__* FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (struct sk_buff*) ;
 scalar_t__ FUNC_12 (int ) ;

int FUNC_13(struct sk_buff *VAR_5)
{
 __wsum VAR_6;
 int VAR_7 = 0, VAR_8;

 if (VAR_5->ip_summed == VAR_0)
  goto out_set_summed;

 if (FUNC_12(FUNC_10(VAR_5)->gso_size)) {
  FUNC_11(VAR_5);
  return -VAR_3;
 }




 if (FUNC_8(VAR_5)) {
  VAR_7 = FUNC_1(VAR_5);
  if (VAR_7)
   goto out;
 }

 VAR_8 = FUNC_5(VAR_5);
 FUNC_0(VAR_8 >= FUNC_9(VAR_5));
 VAR_6 = FUNC_4(VAR_5, VAR_8, VAR_5->len - VAR_8, 0);

 VAR_8 += VAR_5->csum_offset;
 FUNC_0(VAR_8 + sizeof(__sum16) > FUNC_9(VAR_5));

 if (FUNC_7(VAR_5) &&
     !FUNC_6(VAR_5, VAR_8 + sizeof(__sum16))) {
  VAR_7 = FUNC_3(VAR_5, 0, 0, VAR_4);
  if (VAR_7)
   goto out;
 }

 *(__sum16 *)(VAR_5->data + VAR_8) = FUNC_2(VAR_6) ?: VAR_2;
out_set_summed:
 VAR_5->ip_summed = VAR_1;
out:
 return VAR_7;
}
