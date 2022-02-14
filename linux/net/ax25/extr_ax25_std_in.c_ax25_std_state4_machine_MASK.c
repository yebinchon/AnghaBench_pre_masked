
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_19__ {int modulus; int condition; int vr; void* state; int va; int vs; int n2count; TYPE_1__* ax25_dev; int window; } ;
typedef TYPE_2__ ax25_cb ;
struct TYPE_18__ {int * values; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;



 int VAR_6 ;

 int VAR_7 ;




 void* VAR_8 ;
 void* VAR_9 ;
 int const VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,struct sk_buff*) ;
 int FUNC_4 (TYPE_2__*,int const,int,int) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_14(ax25_cb *VAR_14, struct sk_buff *VAR_15, int VAR_16, int VAR_17, int VAR_18, int VAR_19, int VAR_20)
{
 int VAR_21 = 0;

 switch (VAR_16) {
 case 129:
 case 128:
  if (VAR_16 == 129) {
   VAR_14->modulus = VAR_6;
   VAR_14->window = VAR_14->ax25_dev->values[VAR_12];
  } else {
   VAR_14->modulus = VAR_5;
   VAR_14->window = VAR_14->ax25_dev->values[VAR_11];
  }
  FUNC_4(VAR_14, VAR_10, VAR_19, VAR_7);
  FUNC_11(VAR_14);
  FUNC_12(VAR_14);
  FUNC_7(VAR_14);
  FUNC_5(VAR_14);
  VAR_14->condition = 0x00;
  VAR_14->vs = 0;
  VAR_14->va = 0;
  VAR_14->vr = 0;
  VAR_14->state = VAR_9;
  VAR_14->n2count = 0;
  FUNC_2(VAR_14);
  break;

 case 137:
  FUNC_4(VAR_14, VAR_10, VAR_19, VAR_7);
  FUNC_0(VAR_14, 0);
  break;

 case 136:
  FUNC_0(VAR_14, VAR_13);
  break;

 case 130:
 case 131:
  if (VAR_16 == 130)
   VAR_14->condition &= ~VAR_3;
  else
   VAR_14->condition |= VAR_3;
  if (VAR_20 == VAR_7 && VAR_19) {
   FUNC_11(VAR_14);
   VAR_14->n2count = 0;
   if (FUNC_13(VAR_14, VAR_18)) {
    FUNC_1(VAR_14, VAR_18);
    if (VAR_14->vs == VAR_14->va) {
     FUNC_7(VAR_14);
     VAR_14->state = VAR_9;
    } else {
     FUNC_2(VAR_14);
    }
   } else {
    FUNC_10(VAR_14);
    VAR_14->state = VAR_8;
   }
   break;
  }
  if (VAR_20 == VAR_0 && VAR_19)
   FUNC_8(VAR_14);
  if (FUNC_13(VAR_14, VAR_18)) {
   FUNC_1(VAR_14, VAR_18);
  } else {
   FUNC_10(VAR_14);
   VAR_14->state = VAR_8;
  }
  break;

 case 132:
  VAR_14->condition &= ~VAR_3;
  if (VAR_19 && VAR_20 == VAR_7) {
   FUNC_11(VAR_14);
   VAR_14->n2count = 0;
   if (FUNC_13(VAR_14, VAR_18)) {
    FUNC_1(VAR_14, VAR_18);
    if (VAR_14->vs == VAR_14->va) {
     FUNC_7(VAR_14);
     VAR_14->state = VAR_9;
    } else {
     FUNC_2(VAR_14);
    }
   } else {
    FUNC_10(VAR_14);
    VAR_14->state = VAR_8;
   }
   break;
  }
  if (VAR_20 == VAR_0 && VAR_19)
   FUNC_8(VAR_14);
  if (FUNC_13(VAR_14, VAR_18)) {
   FUNC_1(VAR_14, VAR_18);
   FUNC_2(VAR_14);
  } else {
   FUNC_10(VAR_14);
   VAR_14->state = VAR_8;
  }
  break;

 case 134:
  if (!FUNC_13(VAR_14, VAR_18)) {
   FUNC_10(VAR_14);
   VAR_14->state = VAR_8;
   break;
  }
  FUNC_1(VAR_14, VAR_18);
  if (VAR_14->condition & VAR_2) {
   if (VAR_19)
    FUNC_8(VAR_14);
   break;
  }
  if (VAR_17 == VAR_14->vr) {
   VAR_14->vr = (VAR_14->vr + 1) % VAR_14->modulus;
   VAR_21 = FUNC_3(VAR_14, VAR_15);
   if (VAR_14->condition & VAR_2)
    VAR_14->vr = VAR_17;
   VAR_14->condition &= ~VAR_4;
   if (VAR_19) {
    FUNC_8(VAR_14);
   } else {
    if (!(VAR_14->condition & VAR_1)) {
     VAR_14->condition |= VAR_1;
     FUNC_6(VAR_14);
    }
   }
  } else {
   if (VAR_14->condition & VAR_4) {
    if (VAR_19) FUNC_8(VAR_14);
   } else {
    VAR_14->condition |= VAR_4;
    FUNC_4(VAR_14, 132, VAR_19, VAR_7);
    VAR_14->condition &= ~VAR_1;
   }
  }
  break;

 case 135:
 case 133:
  FUNC_9(VAR_14);
  VAR_14->state = VAR_8;
  break;

 default:
  break;
 }

 return VAR_21;
}
