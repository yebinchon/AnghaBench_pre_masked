
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_receive_queue; } ;
struct sk_psock {int ingress_msg; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,struct sock*) ;
 int FUNC_5 (int ,struct sock*) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sock*,long*,int,int *) ;
 int FUNC_8 (int *) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_9(struct sock *VAR_3, struct sk_psock *VAR_4,
        int VAR_5, long VAR_6, int *VAR_7)
{
 FUNC_0(VAR_1, VAR_2);
 int VAR_8 = 0;

 if (!VAR_6)
  return VAR_8;

 FUNC_1(FUNC_6(VAR_3), &VAR_1);
 FUNC_5(VAR_0, VAR_3);
 VAR_8 = FUNC_7(VAR_3, &VAR_6,
       !FUNC_2(&VAR_4->ingress_msg) ||
       !FUNC_8(&VAR_3->sk_receive_queue), &VAR_1);
 FUNC_4(VAR_0, VAR_3);
 FUNC_3(FUNC_6(VAR_3), &VAR_1);
 return VAR_8;
}
