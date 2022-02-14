
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_protocol; } ;
struct sk_buff {struct sock* sk; } ;
__attribute__((used)) static bool FUNC_0(const struct sk_buff *VAR_0)
{
 struct sock *VAR_1 = VAR_0->sk;




 switch (VAR_1->sk_protocol) {
 case 131:
 case 129:
 case 130:
 case 132:
 case 128:
 case 135:
 case 133:
 case 134:
  return 1;
 }

 return 0;
}
