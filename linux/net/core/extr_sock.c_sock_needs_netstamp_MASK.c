
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_family; } ;





__attribute__((used)) static bool FUNC_0(const struct sock *VAR_0)
{
 switch (VAR_0->sk_family) {
 case 128:
 case 129:
  return 0;
 default:
  return 1;
 }
}
