
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_15__ {void* modulus; TYPE_1__* ax25_dev; int window; TYPE_3__* sk; int n2count; int state; int vr; int va; int vs; } ;
typedef TYPE_2__ ax25_cb ;
struct TYPE_16__ {int (* sk_state_change ) (TYPE_3__*) ;int sk_state; } ;
struct TYPE_14__ {int * values; } ;




 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;

 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,int,int,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*,int ) ;
 int FUNC_9 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_10(ax25_cb *VAR_9, struct sk_buff *VAR_10, int VAR_11, int VAR_12, int VAR_13)
{
 switch (VAR_11) {
 case 130:
  VAR_9->modulus = VAR_1;
  VAR_9->window = VAR_9->ax25_dev->values[VAR_5];
  FUNC_2(VAR_9, 128, VAR_12, VAR_2);
  break;

 case 129:
  VAR_9->modulus = VAR_0;
  VAR_9->window = VAR_9->ax25_dev->values[VAR_4];
  FUNC_2(VAR_9, 128, VAR_12, VAR_2);
  break;

 case 132:
  FUNC_2(VAR_9, 131, VAR_12, VAR_2);
  break;

 case 128:
  if (VAR_12) {
   FUNC_0(VAR_9);
   FUNC_5(VAR_9);
   FUNC_4(VAR_9);
   FUNC_3(VAR_9);
   VAR_9->vs = 0;
   VAR_9->va = 0;
   VAR_9->vr = 0;
   VAR_9->state = VAR_3;
   VAR_9->n2count = 0;
   if (VAR_9->sk != ((void*)0)) {
    FUNC_6(VAR_9->sk);
    VAR_9->sk->sk_state = VAR_8;

    if (!FUNC_8(VAR_9->sk, VAR_7))
     VAR_9->sk->sk_state_change(VAR_9->sk);
    FUNC_7(VAR_9->sk);
   }
  }
  break;

 case 131:
  if (VAR_12) {
   if (VAR_9->modulus == VAR_1) {
    FUNC_1(VAR_9, VAR_6);
   } else {
    VAR_9->modulus = VAR_1;
    VAR_9->window = VAR_9->ax25_dev->values[VAR_5];
   }
  }
  break;

 default:
  break;
 }

 return 0;
}
