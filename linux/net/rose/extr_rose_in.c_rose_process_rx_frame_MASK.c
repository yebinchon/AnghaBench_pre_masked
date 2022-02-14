
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct rose_sock {int state; } ;


 int VAR_0 ;





 int FUNC_0 (struct sk_buff*,int*,int*,int*,int*,int*) ;
 int FUNC_1 (struct sock*) ;
 struct rose_sock* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*,struct sk_buff*,int) ;
 int FUNC_4 (struct sock*,struct sk_buff*,int) ;
 int FUNC_5 (struct sock*,struct sk_buff*,int,int,int,int,int,int) ;
 int FUNC_6 (struct sock*,struct sk_buff*,int) ;
 int FUNC_7 (struct sock*,struct sk_buff*,int) ;

int FUNC_8(struct sock *VAR_1, struct sk_buff *VAR_2)
{
 struct rose_sock *VAR_3 = FUNC_2(VAR_1);
 int VAR_4 = 0, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;

 if (VAR_3->state == VAR_0)
  return 0;

 VAR_5 = FUNC_0(VAR_2, &VAR_6, &VAR_7, &VAR_8, &VAR_9, &VAR_10);

 switch (VAR_3->state) {
 case 132:
  VAR_4 = FUNC_3(VAR_1, VAR_2, VAR_5);
  break;
 case 131:
  VAR_4 = FUNC_4(VAR_1, VAR_2, VAR_5);
  break;
 case 130:
  VAR_4 = FUNC_5(VAR_1, VAR_2, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10);
  break;
 case 129:
  VAR_4 = FUNC_6(VAR_1, VAR_2, VAR_5);
  break;
 case 128:
  VAR_4 = FUNC_7(VAR_1, VAR_2, VAR_5);
  break;
 }

 FUNC_1(VAR_1);

 return VAR_4;
}
