
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct ipv6hdr {int dummy; } ;


 int VAR_0 ;




 int FUNC_0 (int) ;
 int FUNC_1 (struct sk_buff*,int*,int) ;
 int FUNC_2 (struct ipv6hdr*,int*) ;
 int FUNC_3 (struct ipv6hdr*,int*) ;
 int FUNC_4 (struct ipv6hdr*,int*) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_1, struct ipv6hdr *VAR_2,
         u8 VAR_3)
{
 u8 VAR_4[4];


 switch (VAR_3) {
 case 131:

  if (FUNC_1(VAR_1, VAR_4, 4))
   return -VAR_0;







  FUNC_3(VAR_2, VAR_4);
  FUNC_2(VAR_2, VAR_4);
  FUNC_4(VAR_2, &VAR_4[1]);
  break;
 case 130:

  if (FUNC_1(VAR_1, VAR_4, 3))
   return -VAR_0;







  FUNC_3(VAR_2, VAR_4);
  FUNC_4(VAR_2, &VAR_4[0]);
  break;
 case 129:

  if (FUNC_1(VAR_1, VAR_4, 1))
   return -VAR_0;






  FUNC_3(VAR_2, VAR_4);
  FUNC_2(VAR_2, VAR_4);
  break;
 case 128:

  break;
 default:
  FUNC_0(1);
  return -VAR_0;
 }

 return 0;
}
