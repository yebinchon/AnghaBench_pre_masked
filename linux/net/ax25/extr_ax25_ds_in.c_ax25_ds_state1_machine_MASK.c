
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_17__ {TYPE_3__* sk; int n2count; int state; int vr; int va; int vs; TYPE_1__* ax25_dev; int window; int modulus; } ;
typedef TYPE_2__ ax25_cb ;
struct TYPE_18__ {int (* sk_state_change ) (TYPE_3__*) ;int sk_state; } ;
struct TYPE_16__ {int * values; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;

 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*,int const,int,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_3__*,int ) ;
 int FUNC_11 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_12(ax25_cb *VAR_11, struct sk_buff *VAR_12, int VAR_13, int VAR_14, int VAR_15)
{
 switch (VAR_13) {
 case 130:
  VAR_11->modulus = VAR_2;
  VAR_11->window = VAR_11->ax25_dev->values[VAR_7];
  FUNC_3(VAR_11, 128, VAR_14, VAR_4);
  break;

 case 129:
  VAR_11->modulus = VAR_1;
  VAR_11->window = VAR_11->ax25_dev->values[VAR_6];
  FUNC_3(VAR_11, 128, VAR_14, VAR_4);
  break;

 case 132:
  FUNC_3(VAR_11, 131, VAR_14, VAR_4);
  break;

 case 128:
  FUNC_0(VAR_11);
  FUNC_7(VAR_11);
  FUNC_5(VAR_11);
  FUNC_4(VAR_11);
  VAR_11->vs = 0;
  VAR_11->va = 0;
  VAR_11->vr = 0;
  VAR_11->state = VAR_5;
  VAR_11->n2count = 0;
  if (VAR_11->sk != ((void*)0)) {
   FUNC_8(VAR_11->sk);
   VAR_11->sk->sk_state = VAR_10;




   if (!FUNC_10(VAR_11->sk, VAR_9))
    VAR_11->sk->sk_state_change(VAR_11->sk);
   FUNC_9(VAR_11->sk);
  }
  FUNC_1(VAR_11);





  FUNC_6(VAR_11);
  break;

 case 131:
  if (VAR_14)
   FUNC_2(VAR_11, VAR_8);
  break;

 default:
  if (VAR_14)
   FUNC_3(VAR_11, 130, VAR_3, VAR_0);
  break;
 }

 return 0;
}
