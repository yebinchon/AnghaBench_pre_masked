
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct broadcast_sk {int work; struct sock* sk; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 struct broadcast_sk* FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int *) ;
 void FUNC_3 (struct sock*) ;
 int VAR_2 ;

void FUNC_4(struct sock *VAR_3)
{

 struct broadcast_sk *VAR_4 =
  FUNC_1(sizeof(struct broadcast_sk), VAR_0);
 if (!VAR_4)
  return FUNC_3(VAR_3);
 VAR_4->sk = VAR_3;
 FUNC_0(&VAR_4->work, VAR_2);
 FUNC_2(VAR_1, &VAR_4->work);
}
