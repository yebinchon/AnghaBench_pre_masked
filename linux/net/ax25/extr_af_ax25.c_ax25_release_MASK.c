
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sock {scalar_t__ sk_type; int (* sk_state_change ) (struct sock*) ;int sk_shutdown; void* sk_state; } ;
struct TYPE_14__ {int state; TYPE_1__* ax25_dev; int n2count; int sk; } ;
typedef TYPE_2__ ax25_cb ;
struct TYPE_13__ {int * values; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 void* VAR_7 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (struct sock*) ;
 int FUNC_10 (struct sock*) ;
 TYPE_2__* FUNC_11 (struct sock*) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (struct sock*) ;
 int FUNC_14 (struct sock*) ;
 int FUNC_15 (struct sock*) ;
 int FUNC_16 (struct sock*,int ) ;
 int FUNC_17 (struct sock*) ;
 int FUNC_18 (struct sock*) ;

__attribute__((used)) static int FUNC_19(struct socket *VAR_8)
{
 struct sock *VAR_9 = VAR_8->sk;
 ax25_cb *VAR_10;

 if (VAR_9 == ((void*)0))
  return 0;

 FUNC_13(VAR_9);
 FUNC_14(VAR_9);
 FUNC_9(VAR_9);
 VAR_10 = FUNC_11(VAR_9);

 if (VAR_9->sk_type == VAR_6) {
  switch (VAR_10->state) {
  case 132:
   FUNC_10(VAR_9);
   FUNC_3(VAR_10, 0);
   FUNC_9(VAR_9);
   FUNC_2(VAR_10);
   break;

  case 131:
  case 130:
   FUNC_4(VAR_10, VAR_1, VAR_2, VAR_0);
   FUNC_10(VAR_9);
   FUNC_3(VAR_10, 0);
   FUNC_9(VAR_9);
   if (!FUNC_12(VAR_10->sk, VAR_5))
    FUNC_2(VAR_10);
   break;

  case 129:
  case 128:
   FUNC_1(VAR_10);
   VAR_10->n2count = 0;

   switch (VAR_10->ax25_dev->values[VAR_3]) {
   case 133:
   case 134:
    FUNC_4(VAR_10,
        VAR_1,
        VAR_2,
        VAR_0);
    FUNC_7(VAR_10);
    FUNC_8(VAR_10);
    FUNC_6(VAR_10);
    break;






   }
   FUNC_0(VAR_10);
   FUNC_5(VAR_10);
   VAR_10->state = 130;
   VAR_9->sk_state = VAR_7;
   VAR_9->sk_shutdown |= VAR_4;
   VAR_9->sk_state_change(VAR_9);
   FUNC_16(VAR_9, VAR_5);
   break;

  default:
   break;
  }
 } else {
  VAR_9->sk_state = VAR_7;
  VAR_9->sk_shutdown |= VAR_4;
  VAR_9->sk_state_change(VAR_9);
  FUNC_2(VAR_10);
 }

 VAR_8->sk = ((void*)0);
 FUNC_10(VAR_9);
 FUNC_15(VAR_9);

 return 0;
}
