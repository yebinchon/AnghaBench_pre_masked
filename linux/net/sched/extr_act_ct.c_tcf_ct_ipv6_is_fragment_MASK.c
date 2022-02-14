
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {unsigned int len; } ;
struct ipv6hdr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (struct sk_buff*,unsigned int*,int,unsigned short*,unsigned int*) ;
 int FUNC_1 (struct sk_buff*,unsigned int) ;
 int FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_4, bool *VAR_5)
{
 unsigned int VAR_6 = 0, VAR_7, VAR_8 = 0;
 unsigned short VAR_9;
 int VAR_10;

 VAR_7 = FUNC_2(VAR_4) + sizeof(struct ipv6hdr);
 if (FUNC_3(VAR_4->len < VAR_7))
  return -VAR_0;
 if (FUNC_3(!FUNC_1(VAR_4, VAR_7)))
  return -VAR_1;

 VAR_10 = FUNC_0(VAR_4, &VAR_8, -1, &VAR_9, &VAR_6);
 if (FUNC_3(VAR_10 < 0))
  return -VAR_2;

 *VAR_5 = VAR_6 & VAR_3;
 return 0;
}
