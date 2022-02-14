
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_21__ {int modulus; int condition; int vr; void* state; int va; int vs; TYPE_1__* ax25_dev; int window; } ;
typedef TYPE_2__ ax25_cb ;
struct TYPE_20__ {int * values; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;



 int VAR_6 ;

 int VAR_7 ;




 void* VAR_8 ;
 int const VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,struct sk_buff*) ;
 int FUNC_6 (TYPE_2__*,int const,int,int ) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_16(ax25_cb *VAR_13, struct sk_buff *VAR_14, int VAR_15, int VAR_16, int VAR_17, int VAR_18, int VAR_19)
{
 int VAR_20 = 0;

 switch (VAR_15) {
 case 129:
 case 128:
  if (VAR_15 == 129) {
   VAR_13->modulus = VAR_6;
   VAR_13->window = VAR_13->ax25_dev->values[VAR_11];
  } else {
   VAR_13->modulus = VAR_5;
   VAR_13->window = VAR_13->ax25_dev->values[VAR_10];
  }
  FUNC_6(VAR_13, VAR_9, VAR_18, VAR_7);
  FUNC_13(VAR_13);
  FUNC_14(VAR_13);
  FUNC_9(VAR_13);
  FUNC_7(VAR_13);
  VAR_13->condition = 0x00;
  VAR_13->vs = 0;
  VAR_13->va = 0;
  VAR_13->vr = 0;
  FUNC_4(VAR_13);
  break;

 case 137:
  FUNC_6(VAR_13, VAR_9, VAR_18, VAR_7);
  FUNC_2(VAR_13, 0);
  break;

 case 136:
  FUNC_2(VAR_13, VAR_12);
  break;

 case 130:
 case 131:
  if (VAR_15 == 130)
   VAR_13->condition &= ~VAR_3;
  else
   VAR_13->condition |= VAR_3;
  if (VAR_19 == VAR_0 && VAR_18)
   FUNC_10(VAR_13);
  if (FUNC_15(VAR_13, VAR_17)) {
   FUNC_1(VAR_13, VAR_17);
  } else {
   FUNC_12(VAR_13);
   VAR_13->state = VAR_8;
  }
  break;

 case 132:
  VAR_13->condition &= ~VAR_3;
  if (VAR_19 == VAR_0 && VAR_18)
   FUNC_10(VAR_13);
  if (FUNC_15(VAR_13, VAR_17)) {
   FUNC_3(VAR_13, VAR_17);
   FUNC_0(VAR_13);
   FUNC_13(VAR_13);
   FUNC_9(VAR_13);
   FUNC_4(VAR_13);
  } else {
   FUNC_12(VAR_13);
   VAR_13->state = VAR_8;
  }
  break;

 case 134:
  if (!FUNC_15(VAR_13, VAR_17)) {
   FUNC_12(VAR_13);
   VAR_13->state = VAR_8;
   break;
  }
  if (VAR_13->condition & VAR_3) {
   FUNC_3(VAR_13, VAR_17);
  } else {
   FUNC_1(VAR_13, VAR_17);
  }
  if (VAR_13->condition & VAR_2) {
   if (VAR_18) FUNC_10(VAR_13);
   break;
  }
  if (VAR_16 == VAR_13->vr) {
   VAR_13->vr = (VAR_13->vr + 1) % VAR_13->modulus;
   VAR_20 = FUNC_5(VAR_13, VAR_14);
   if (VAR_13->condition & VAR_2)
    VAR_13->vr = VAR_16;
   VAR_13->condition &= ~VAR_4;
   if (VAR_18) {
    FUNC_10(VAR_13);
   } else {
    if (!(VAR_13->condition & VAR_1)) {
     VAR_13->condition |= VAR_1;
     FUNC_8(VAR_13);
    }
   }
  } else {
   if (VAR_13->condition & VAR_4) {
    if (VAR_18) FUNC_10(VAR_13);
   } else {
    VAR_13->condition |= VAR_4;
    FUNC_6(VAR_13, 132, VAR_18, VAR_7);
    VAR_13->condition &= ~VAR_1;
   }
  }
  break;

 case 135:
 case 133:
  FUNC_11(VAR_13);
  VAR_13->state = VAR_8;
  break;

 default:
  break;
 }

 return VAR_20;
}
