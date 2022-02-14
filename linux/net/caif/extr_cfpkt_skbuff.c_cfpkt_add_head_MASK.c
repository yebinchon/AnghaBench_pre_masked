
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct sk_buff {int dummy; } ;
struct cfpkt {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct cfpkt*,char*) ;
 int FUNC_1 (struct cfpkt*) ;
 int FUNC_2 (int *,int const*,int ) ;
 struct sk_buff* FUNC_3 (struct cfpkt*) ;
 int FUNC_4 (struct sk_buff*,int ,struct sk_buff**) ;
 int FUNC_5 (struct sk_buff*) ;
 int * FUNC_6 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_7 (int) ;

int FUNC_8(struct cfpkt *VAR_1, const void *VAR_2, u16 VAR_3)
{
 struct sk_buff *VAR_4 = FUNC_3(VAR_1);
 struct sk_buff *VAR_5;
 u8 *VAR_6;
 const u8 *VAR_7 = VAR_2;
 int VAR_8;
 if (FUNC_7(FUNC_1(VAR_1)))
  return -VAR_0;
 if (FUNC_7(FUNC_5(VAR_4) < VAR_3)) {
  FUNC_0(VAR_1, "no headroom\n");
  return -VAR_0;
 }


 VAR_8 = FUNC_4(VAR_4, 0, &VAR_5);
 if (FUNC_7(VAR_8 < 0)) {
  FUNC_0(VAR_1, "cow failed\n");
  return VAR_8;
 }

 VAR_6 = FUNC_6(VAR_4, VAR_3);
 FUNC_2(VAR_6, VAR_7, VAR_3);
 return 0;
}
