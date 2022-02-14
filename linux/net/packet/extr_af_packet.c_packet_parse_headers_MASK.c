
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {scalar_t__ type; } ;
struct sk_buff {scalar_t__ protocol; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_4(struct sk_buff *VAR_2, struct socket *VAR_3)
{
 if ((!VAR_2->protocol || VAR_2->protocol == FUNC_1(VAR_0)) &&
     VAR_3->type == VAR_1) {
  FUNC_3(VAR_2);
  VAR_2->protocol = FUNC_0(VAR_2);
 }

 FUNC_2(VAR_2);
}
