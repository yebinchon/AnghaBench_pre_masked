
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct tlv_desc {void* tlv_len; void* tlv_type; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct tlv_desc*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int ,void*,int ) ;
 int FUNC_5 (struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_8(struct sk_buff *VAR_1, u16 VAR_2, void *VAR_3, u16 VAR_4)
{
 struct tlv_desc *VAR_5 = (struct tlv_desc *)FUNC_6(VAR_1);

 if (FUNC_7(VAR_1) < FUNC_2(VAR_4))
  return -VAR_0;

 FUNC_5(VAR_1, FUNC_2(VAR_4));
 VAR_5->tlv_type = FUNC_3(VAR_2);
 VAR_5->tlv_len = FUNC_3(FUNC_1(VAR_4));
 if (VAR_4 && VAR_3)
  FUNC_4(FUNC_0(VAR_5), VAR_3, VAR_4);

 return 0;
}
