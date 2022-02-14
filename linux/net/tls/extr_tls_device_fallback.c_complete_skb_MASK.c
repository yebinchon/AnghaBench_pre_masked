
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_wmem_alloc; } ;
struct sk_buff {scalar_t__ destructor; int truesize; struct sock* sk; int data; int len; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (int,int *) ;
 int FUNC_5 (struct sk_buff*,struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_7 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_8(struct sk_buff *VAR_1, struct sk_buff *VAR_2, int VAR_3)
{
 struct sock *VAR_4 = VAR_2->sk;
 int VAR_5;

 FUNC_5(VAR_1, VAR_2);

 FUNC_6(VAR_1, VAR_2->len);
 FUNC_2(VAR_1->data, VAR_2->data, VAR_3);

 VAR_1->destructor = VAR_2->destructor;
 VAR_1->sk = VAR_4;
 VAR_2->destructor = ((void*)0);
 VAR_2->sk = ((void*)0);

 FUNC_7(VAR_1, VAR_3);


 if (VAR_1->destructor == VAR_0)
  return;

 VAR_5 = VAR_1->truesize - VAR_2->truesize;
 if (FUNC_1(VAR_5 < 0))
  FUNC_0(FUNC_4(-VAR_5, &VAR_4->sk_wmem_alloc));
 else if (VAR_5)
  FUNC_3(VAR_5, &VAR_4->sk_wmem_alloc);
}
