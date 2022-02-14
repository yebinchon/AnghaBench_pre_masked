
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct sk_buff_head {int dummy; } ;
struct sk_buff {int dummy; } ;
struct msghdr {int dummy; } ;
struct l2cap_chan {size_t remote_mps; } ;


 int FUNC_0 (char*,struct l2cap_chan*,struct msghdr*,size_t) ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 size_t VAR_0 ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff_head*) ;
 int FUNC_4 (struct sk_buff_head*,struct sk_buff*) ;
 struct sk_buff* FUNC_5 (struct l2cap_chan*,struct msghdr*,size_t,size_t) ;

__attribute__((used)) static int FUNC_6(struct l2cap_chan *VAR_1,
    struct sk_buff_head *VAR_2,
    struct msghdr *VAR_3, size_t VAR_4)
{
 struct sk_buff *VAR_5;
 size_t VAR_6;
 u16 VAR_7;

 FUNC_0("chan %p, msg %p, len %zu", VAR_1, VAR_3, VAR_4);

 VAR_7 = VAR_4;
 VAR_6 = VAR_1->remote_mps - VAR_0;

 while (VAR_4 > 0) {
  if (VAR_4 <= VAR_6)
   VAR_6 = VAR_4;

  VAR_5 = FUNC_5(VAR_1, VAR_3, VAR_6, VAR_7);
  if (FUNC_1(VAR_5)) {
   FUNC_3(VAR_2);
   return FUNC_2(VAR_5);
  }

  FUNC_4(VAR_2, VAR_5);

  VAR_4 -= VAR_6;

  if (VAR_7) {
   VAR_7 = 0;
   VAR_6 += VAR_0;
  }
 }

 return 0;
}
