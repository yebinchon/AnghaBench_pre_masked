
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct sk_buff {int protocol; scalar_t__ data; scalar_t__ mac_len; } ;
struct nshhdr {scalar_t__ np; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct nshhdr*,struct nshhdr const*,size_t) ;
 size_t FUNC_2 (struct nshhdr const*) ;
 scalar_t__ FUNC_3 (struct sk_buff*,size_t) ;
 int FUNC_4 (struct sk_buff*,struct nshhdr*,size_t) ;
 int FUNC_5 (struct sk_buff*,size_t) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*) ;
 scalar_t__ FUNC_9 (int ) ;

int FUNC_10(struct sk_buff *VAR_4, const struct nshhdr *VAR_5)
{
 struct nshhdr *VAR_6;
 size_t VAR_7 = FUNC_2(VAR_5);
 u8 VAR_8;

 if (VAR_4->mac_len) {
  VAR_8 = VAR_3;
 } else {
  VAR_8 = FUNC_9(VAR_4->protocol);
  if (!VAR_8)
   return -VAR_0;
 }


 if (FUNC_3(VAR_4, VAR_7) < 0)
  return -VAR_1;

 FUNC_5(VAR_4, VAR_7);
 VAR_6 = (struct nshhdr *)(VAR_4->data);
 FUNC_1(VAR_6, VAR_5, VAR_7);
 VAR_6->np = VAR_8;
 FUNC_4(VAR_4, VAR_6, VAR_7);

 VAR_4->protocol = FUNC_0(VAR_2);
 FUNC_6(VAR_4);
 FUNC_8(VAR_4);
 FUNC_7(VAR_4);

 return 0;
}
