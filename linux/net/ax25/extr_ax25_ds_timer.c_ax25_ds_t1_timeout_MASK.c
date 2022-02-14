
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int state; int n2count; int n2; int sk; int modulus; TYPE_1__* ax25_dev; int window; } ;
typedef TYPE_2__ ax25_cb ;
struct TYPE_8__ {int * values; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;



 size_t VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ,int ) ;

void FUNC_5(ax25_cb *VAR_12)
{
 switch (VAR_12->state) {
 case 130:
  if (VAR_12->n2count == VAR_12->n2) {
   if (VAR_12->modulus == VAR_3) {
    FUNC_1(VAR_12, VAR_10);
    return;
   } else {
    VAR_12->modulus = VAR_3;
    VAR_12->window = VAR_12->ax25_dev->values[VAR_9];
    VAR_12->n2count = 0;
    FUNC_2(VAR_12, VAR_7, VAR_4, VAR_0);
   }
  } else {
   VAR_12->n2count++;
   if (VAR_12->modulus == VAR_3)
    FUNC_2(VAR_12, VAR_7, VAR_4, VAR_0);
   else
    FUNC_2(VAR_12, VAR_8, VAR_4, VAR_0);
  }
  break;

 case 129:
  if (VAR_12->n2count == VAR_12->n2) {
   FUNC_2(VAR_12, VAR_1, VAR_5, VAR_0);
   if (!FUNC_4(VAR_12->sk, VAR_11))
    FUNC_1(VAR_12, VAR_10);
   return;
  } else {
   VAR_12->n2count++;
  }
  break;

 case 128:
  if (VAR_12->n2count == VAR_12->n2) {
   FUNC_2(VAR_12, VAR_2, VAR_5, VAR_6);
   FUNC_1(VAR_12, VAR_10);
   return;
  } else {
   VAR_12->n2count++;
  }
  break;
 }

 FUNC_0(VAR_12);
 FUNC_3(VAR_12);
}
