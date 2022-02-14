
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct llc_shdlc {int (* xmit_to_drv ) (int ,struct sk_buff*) ;int hdev; } ;
typedef enum sframe_type { ____Placeholder_sframe_type } sframe_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 struct sk_buff* FUNC_1 (struct llc_shdlc*,int ) ;
 int FUNC_2 (char*,int,int) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int) ;
 int FUNC_4 (int ,struct sk_buff*) ;

__attribute__((used)) static int FUNC_5(struct llc_shdlc *VAR_2,
      enum sframe_type VAR_3, int VAR_4)
{
 int VAR_5;
 struct sk_buff *VAR_6;

 FUNC_2("sframe_type=%d nr=%d\n", VAR_3, VAR_4);

 VAR_6 = FUNC_1(VAR_2, 0);
 if (VAR_6 == ((void*)0))
  return -VAR_0;

 *(u8 *)FUNC_3(VAR_6, 1) = VAR_1 | (VAR_3 << 3) | VAR_4;

 VAR_5 = VAR_2->xmit_to_drv(VAR_2->hdev, VAR_6);

 FUNC_0(VAR_6);

 return VAR_5;
}
