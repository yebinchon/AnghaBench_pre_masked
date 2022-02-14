
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int len; } ;
struct rfcomm_hdr {int ctrl; int addr; scalar_t__ len; } ;
typedef int __le16 ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int *) ;
 struct rfcomm_hdr* FUNC_6 (struct sk_buff*,int) ;
 int * FUNC_7 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_8(struct sk_buff *VAR_1, u8 VAR_2)
{
 struct rfcomm_hdr *VAR_3;
 int VAR_4 = VAR_1->len;
 u8 *VAR_5;

 if (VAR_4 > 127) {
  VAR_3 = FUNC_6(VAR_1, 4);
  FUNC_5(FUNC_4(FUNC_2(VAR_4)), (__le16 *) &VAR_3->len);
 } else {
  VAR_3 = FUNC_6(VAR_1, 3);
  VAR_3->len = FUNC_3(VAR_4);
 }
 VAR_3->addr = VAR_2;
 VAR_3->ctrl = FUNC_0(VAR_0, 0);

 VAR_5 = FUNC_7(VAR_1, 1);
 *VAR_5 = FUNC_1((void *) VAR_3);
}
