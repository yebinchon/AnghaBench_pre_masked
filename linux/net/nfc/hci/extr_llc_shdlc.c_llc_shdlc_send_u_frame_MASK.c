
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct llc_shdlc {int (* xmit_to_drv ) (int ,struct sk_buff*) ;int hdev; } ;
typedef enum uframe_modifier { ____Placeholder_uframe_modifier } uframe_modifier ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (char*,int) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int) ;
 int FUNC_3 (int ,struct sk_buff*) ;

__attribute__((used)) static int FUNC_4(struct llc_shdlc *VAR_1,
      struct sk_buff *VAR_2,
      enum uframe_modifier VAR_3)
{
 int VAR_4;

 FUNC_1("uframe_modifier=%d\n", VAR_3);

 *(u8 *)FUNC_2(VAR_2, 1) = VAR_0 | VAR_3;

 VAR_4 = VAR_1->xmit_to_drv(VAR_1->hdev, VAR_2);

 FUNC_0(VAR_2);

 return VAR_4;
}
