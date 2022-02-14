
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int len; scalar_t__ data; } ;
typedef int __le16 ;


 int FUNC_0 (struct sock*,struct sk_buff*,unsigned short) ;
 unsigned short FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_3(struct sock *VAR_0, struct sk_buff *VAR_1, int VAR_2)
{
 __le16 *VAR_3 = (__le16 *)VAR_1->data;
 int VAR_4 = 0;
 unsigned short VAR_5;

 if (VAR_1->len < 2)
  return VAR_4;

 if ((VAR_5 = FUNC_1(*VAR_3)) & 0x8000) {
  FUNC_2(VAR_1, 2);
  VAR_3++;
  VAR_4 += 2;
  if ((VAR_5 & 0x4000) == 0) {
   if (VAR_2)
    VAR_5 ^= 0x2000;
   FUNC_0(VAR_0, VAR_1, VAR_5);
  }
 }

 if (VAR_1->len < 2)
  return VAR_4;

 if ((VAR_5 = FUNC_1(*VAR_3)) & 0x8000) {
  FUNC_2(VAR_1, 2);
  VAR_4 += 2;
  if ((VAR_5 & 0x4000) == 0) {
   if (VAR_2)
    VAR_5 ^= 0x2000;
   FUNC_0(VAR_0, VAR_1, VAR_5);
  }
 }

 return VAR_4;
}
