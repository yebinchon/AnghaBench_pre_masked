
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int ,int ,int ,int *) ;
 int FUNC_2 (struct sk_buff*,int ,int *,int *) ;
 int VAR_1 ;
 int FUNC_3 (struct sk_buff*,int *) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_2, u16 VAR_3, u32 *VAR_4)
{
 int VAR_5;
 u32 VAR_6;
 u32 VAR_7;
 u32 VAR_8;

 VAR_5 = FUNC_3(VAR_2, &VAR_6);
 if (FUNC_4(VAR_5))
  return -VAR_0;
 VAR_5 = FUNC_2(VAR_2, VAR_3, &VAR_8, &VAR_7);
 if (FUNC_4(VAR_5))
  return -VAR_0;

 VAR_5 = FUNC_1(&VAR_1, VAR_7,
        VAR_8, VAR_6, VAR_4);
 if (FUNC_4(VAR_5)) {
  FUNC_0(
         "SELinux: failure in selinux_skb_peerlbl_sid(),"
         " unable to determine packet's peer label\n");
  return -VAR_0;
 }

 return 0;
}
