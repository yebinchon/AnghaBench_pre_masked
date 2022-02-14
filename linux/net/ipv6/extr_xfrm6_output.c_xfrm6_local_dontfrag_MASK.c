
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {scalar_t__ sk_family; int sk_protocol; } ;
struct sk_buff {struct sock* sk; } ;
struct TYPE_2__ {int dontfrag; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (struct sock*) ;

__attribute__((used)) static int FUNC_1(struct sk_buff *VAR_3)
{
 int VAR_4;
 struct sock *VAR_5 = VAR_3->sk;

 if (VAR_5) {
  if (VAR_5->sk_family != VAR_0)
   return 0;

  VAR_4 = VAR_5->sk_protocol;
  if (VAR_4 == VAR_2 || VAR_4 == VAR_1)
   return FUNC_0(VAR_5)->dontfrag;
 }

 return 0;
}
