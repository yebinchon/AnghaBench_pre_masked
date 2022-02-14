
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sock {int sk_family; } ;





 scalar_t__ FUNC_0 () ;

__attribute__((used)) static u8 FUNC_1(struct sock *VAR_0)
{
 u8 VAR_1;

 if (FUNC_0())
  return 0;
 VAR_1 = VAR_0->sk_family;
 switch (VAR_1) {
 case 130:
 case 129:
 case 128:
  return VAR_1;
 default:
  return 0;
 }
}
