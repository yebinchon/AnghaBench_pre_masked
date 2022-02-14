
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sock {int (* sk_data_ready ) (struct sock*) ;void* sk_state; int (* sk_state_change ) (struct sock*) ;} ;
struct sco_conn {TYPE_2__* hcon; struct sock* sk; } ;
struct TYPE_6__ {int flags; } ;
struct TYPE_5__ {int dst; int src; } ;
struct TYPE_4__ {int dst; int src; } ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (char*,struct sco_conn*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct sco_conn*,struct sock*,struct sock*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;
 TYPE_3__* FUNC_5 (struct sock*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (struct sco_conn*) ;
 int FUNC_8 (struct sco_conn*) ;
 struct sock* FUNC_9 (int *) ;
 TYPE_1__* FUNC_10 (struct sock*) ;
 struct sock* FUNC_11 (int ,int *,int ,int ,int ) ;
 int FUNC_12 (struct sock*) ;
 int FUNC_13 (struct sock*,struct sock*) ;
 int FUNC_14 (struct sock*) ;
 int FUNC_15 (struct sock*) ;
 int FUNC_16 (struct sock*) ;
 scalar_t__ FUNC_17 (int ,int *) ;

__attribute__((used)) static void FUNC_18(struct sco_conn *VAR_5)
{
 struct sock *VAR_6;
 struct sock *VAR_7 = VAR_5->sk;

 FUNC_0("conn %p", VAR_5);

 if (VAR_7) {
  FUNC_12(VAR_7);
  FUNC_3(VAR_7);
  VAR_7->sk_state = VAR_2;
  VAR_7->sk_state_change(VAR_7);
  FUNC_4(VAR_7);
 } else {
  FUNC_7(VAR_5);

  if (!VAR_5->hcon) {
   FUNC_8(VAR_5);
   return;
  }

  VAR_6 = FUNC_9(&VAR_5->hcon->src);
  if (!VAR_6) {
   FUNC_8(VAR_5);
   return;
  }

  FUNC_3(VAR_6);

  VAR_7 = FUNC_11(FUNC_14(VAR_6), ((void*)0),
        VAR_0, VAR_4, 0);
  if (!VAR_7) {
   FUNC_4(VAR_6);
   FUNC_8(VAR_5);
   return;
  }

  FUNC_13(VAR_7, VAR_6);

  FUNC_2(&FUNC_10(VAR_7)->src, &VAR_5->hcon->src);
  FUNC_2(&FUNC_10(VAR_7)->dst, &VAR_5->hcon->dst);

  FUNC_6(VAR_5->hcon);
  FUNC_1(VAR_5, VAR_7, VAR_6);

  if (FUNC_17(VAR_3, &FUNC_5(VAR_6)->flags))
   VAR_7->sk_state = VAR_1;
  else
   VAR_7->sk_state = VAR_2;


  VAR_6->sk_data_ready(VAR_6);

  FUNC_4(VAR_6);

  FUNC_8(VAR_5);
 }
}
