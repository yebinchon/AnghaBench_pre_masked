
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int data; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct sock*,int ,int,int) ;
 int FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_3(struct sock *VAR_0, struct sk_buff *VAR_1)
{
 FUNC_0(&VAR_1->data);
 FUNC_1(VAR_0, FUNC_2(VAR_1), 1, 1);
}
