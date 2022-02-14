
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct b53_device {scalar_t__ allow_vid_4095; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_0 (struct b53_device*,int ,int ,int*) ;
 int FUNC_1 (struct b53_device*,int ,int ,int ) ;
 int FUNC_2 (struct b53_device*,int ,int ,int) ;
 scalar_t__ FUNC_3 (struct b53_device*) ;
 scalar_t__ FUNC_4 (struct b53_device*) ;
 scalar_t__ FUNC_5 (struct b53_device*) ;

__attribute__((used)) static void FUNC_6(struct b53_device *VAR_29, int VAR_30)
{
 u8 VAR_31, VAR_32, VAR_33, VAR_34 = 0, VAR_35;

 FUNC_0(VAR_29, VAR_0, VAR_1, &VAR_31);
 FUNC_0(VAR_29, VAR_12, VAR_2, &VAR_32);
 FUNC_0(VAR_29, VAR_12, VAR_3, &VAR_33);

 if (FUNC_3(VAR_29) || FUNC_4(VAR_29)) {
  FUNC_0(VAR_29, VAR_12, VAR_7, &VAR_34);
  FUNC_0(VAR_29, VAR_12, VAR_10, &VAR_35);
 } else if (FUNC_5(VAR_29)) {
  FUNC_0(VAR_29, VAR_12, VAR_8, &VAR_34);
  FUNC_0(VAR_29, VAR_12, VAR_11, &VAR_35);
 } else {
  FUNC_0(VAR_29, VAR_12, VAR_6, &VAR_34);
  FUNC_0(VAR_29, VAR_12, VAR_9, &VAR_35);
 }

 VAR_31 &= ~VAR_13;

 if (VAR_30) {
  VAR_32 |= VAR_17 | VAR_15 | VAR_16;
  VAR_33 |= VAR_20 | VAR_18;
  VAR_34 &= ~VAR_22;
  VAR_34 |= VAR_24 << VAR_23;
  VAR_35 |= VAR_27;

  if (FUNC_3(VAR_29))
   VAR_32 &= ~VAR_14;

  if (FUNC_3(VAR_29) || FUNC_4(VAR_29))
   VAR_33 |= VAR_19;

  if (!FUNC_3(VAR_29) && !FUNC_4(VAR_29)) {
   if (VAR_29->allow_vid_4095)
    VAR_35 |= VAR_28;
   else
    VAR_35 &= ~VAR_28;
  }
 } else {
  VAR_32 &= ~(VAR_17 | VAR_15 | VAR_16);
  VAR_33 &= ~(VAR_20 | VAR_18);
  VAR_34 &= ~VAR_22;
  VAR_35 &= ~VAR_27;

  if (FUNC_3(VAR_29) || FUNC_4(VAR_29))
   VAR_34 |= VAR_25 << VAR_23;
  else
   VAR_34 |= VAR_26 << VAR_23;

  if (FUNC_3(VAR_29) || FUNC_4(VAR_29))
   VAR_33 &= ~VAR_19;

  if (!FUNC_3(VAR_29) && !FUNC_4(VAR_29))
   VAR_35 &= ~VAR_28;
 }

 FUNC_2(VAR_29, VAR_12, VAR_2, VAR_32);
 FUNC_2(VAR_29, VAR_12, VAR_3, VAR_33);

 if (FUNC_3(VAR_29) || FUNC_4(VAR_29)) {

  if (FUNC_3(VAR_29) && VAR_30)
   FUNC_2(VAR_29, VAR_12, VAR_4,
       VAR_21);
  else
   FUNC_2(VAR_29, VAR_12, VAR_4, 0);

  FUNC_2(VAR_29, VAR_12, VAR_7, VAR_34);
  FUNC_2(VAR_29, VAR_12, VAR_10, VAR_35);
 } else if (FUNC_5(VAR_29)) {
  FUNC_1(VAR_29, VAR_12, VAR_5, 0);
  FUNC_2(VAR_29, VAR_12, VAR_8, VAR_34);
  FUNC_2(VAR_29, VAR_12, VAR_11, VAR_35);
 } else {
  FUNC_1(VAR_29, VAR_12, VAR_4, 0);
  FUNC_2(VAR_29, VAR_12, VAR_6, VAR_34);
  FUNC_2(VAR_29, VAR_12, VAR_9, VAR_35);
 }

 FUNC_2(VAR_29, VAR_0, VAR_1, VAR_31);
}
