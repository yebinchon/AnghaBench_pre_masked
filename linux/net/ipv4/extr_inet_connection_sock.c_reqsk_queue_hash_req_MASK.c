
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_sock {int rsk_refcnt; int rsk_timer; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (struct request_sock*) ;
 int VAR_2 ;
 int FUNC_4 () ;
 int FUNC_5 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct request_sock *VAR_3,
     unsigned long VAR_4)
{
 FUNC_5(&VAR_3->rsk_timer, VAR_2, VAR_0);
 FUNC_1(&VAR_3->rsk_timer, VAR_1 + VAR_4);

 FUNC_0(FUNC_3(VAR_3), ((void*)0));



 FUNC_4();
 FUNC_2(&VAR_3->rsk_refcnt, 2 + 1);
}
