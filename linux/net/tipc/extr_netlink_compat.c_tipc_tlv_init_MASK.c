
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct tlv_desc {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;


 int FUNC_0 (struct tlv_desc*,int ) ;
 int FUNC_1 (struct tlv_desc*,int ) ;
 int FUNC_2 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_3(struct sk_buff *VAR_0, u16 VAR_1)
{
 struct tlv_desc *VAR_2 = (struct tlv_desc *)VAR_0->data;

 FUNC_0(VAR_2, 0);
 FUNC_1(VAR_2, VAR_1);
 FUNC_2(VAR_0, sizeof(struct tlv_desc));
}
